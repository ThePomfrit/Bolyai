/*

Írd meg a következő függvényeket rekurzívan:
+ Kiszámolja egy adott `n` számig a számok összegét 
    `sum(5) = 1+2+3+4+5 = 15`
+ Kiszámolja egy számtani sorozat `n.` elemét, ha a sorozat első eleme 7, a különbsége pedig 3. 
  $ a_{n}=a_{n-1}+d $
    `arithmeticProgression73(5) = 19`
+ Kiszámolja egy számtani sorozat `n.` elemét, ha a sorozat első eleme és különbsége is paraméterként van megadva.
    `arithmeticProgression(5,7,3) = 19`
+ Kiszámolja egy mértani sorozat `n.` elemét, ha a sorozat első eleme 5, hányadosa pedig 3.
  $ a_n=a_{n-1}*q $
    `geometricProgression53(5) = 20`
+ Kiszámolja egy mértani sorozat `n.` elemét, ha a sorozat első eleme és hányadosa is paraméterként van megadva.
    `geometricProgression53(5,3,5) = 20`
+ Kiszámolja egy vektor elemeinek összegét 
    `vecSum({2,4,6,3,8,1} = 2+4+6+3+8+1 = 24`
+ Megkeresi egy vektor legkisebb elemét 
    `min({2,4,6,3,8,1} = 1)`
+ Összeadja a páros számokat egy vektorban 
    `sumEven({2,4,6,3,8,1} = 20)`
+ Összeadja a számokat egy vektorban, amíg páratlan számba nem ütközik 
    `sumUntilOdd({2,4,6,3,8,1}) = 12`
+ Megállapítja egy `string`ről, hogy palindrom-e 
    `palindrom("anni tejet inna") = true)`
+ Megszámolja, hogy egy string milyen hosszú 
    `strLen("anni tejet inna") = 15`
+ Megszámolja, hogy egy stringben hány magánhangzó van 
    `countVowels("anni tejet inna") = 6`
+ Kiszámolja két szám legnagyobb közös osztóját az Euklidészi algoritmussal.
    `euclid(6,10) = 2`
+ Kiszámolja a Fibonacci sorozat 
*/

#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <math.h>

using namespace std;

int sum(int n) {
    if (n == 0){ 
        return 0;
    } else {
        return n + sum(n-1);
    }
}

int arithmeticProgression73(int n) {
    if (n == 1) {
        return 7;
    } else {
        return arithmeticProgression73(n-1) + 3;
    }
}

int arithmeticProgression(int n, int a, int d) {
    if (n == 1) {
        return a;
    } else {
        return arithmeticProgression(n-1, a, d) + d;
    }
}

int geometricProgression53(int n) {
    if (n == 1) {
        return 5;
    } else {
        return geometricProgression53(n-1) * 3;
    }
}

int geometricProgression(int n, int a, int q) {
    if (n == 1) {
        return a;
    } else {
        return geometricProgression(n-1, a, q) * q;
    }
}

int factorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n-1);
    }
}

int twoToThePowerOf(int n) {
    if (n == 0) {
        return 1;
    } else {
        return 2 * twoToThePowerOf(n-1);
    }
}

int toThePowerOf(int a, int n) {
    if (n == 0) {
        return 1;
    } else {
        return a * toThePowerOf(a, n-1);
    }
}

int fibonacci(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}

int product(int a, int b) {
    if (b == 0) {
        return 0;
    } else {
        return a + product(a, b-1);
    }
}

int sumOddInRange(int a, int b) {
    if (a > b) {
        return 0;
    } else {
        if (a % 2 == 1) {
            return a + sumOddInRange(a+1, b);
        } else {
            return sumOddInRange(a+1, b);
        }
    }
}

vector<int> findPrimesUntil(int n) {
    //not recursive
    vector<int> primes;
    for (int i = 2; i <= n; i++) {
        bool isPrime = true;
        for (int j = 2; j < i; j++) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) {
            primes.push_back(i);
        }
    }
}

bool isPrime(int n) {
    if (n < 2) {
        return false;
    }
    if (n == 2) {
        return true;
    }
    if (n % 2 == 0) {
        return false;
    }
    vector<int> primes = findPrimesUntil(sqrt(n));
    for (int i = 0; i < primes.size(); i++) {
        if (n % primes[i] == 0) {
            return false;
        }
    }
}

vector<int> primeFactorHelper(int n, vector<int> primes) {
    

}


vector<int> primeFactors(int n) {
    vector<int> factors;
    factors.push_back(1);
    factors.push_back(n);
    if(isPrime(n)) {
        return factors;
    } 
    //recursive
    return primeFactorHelper(n, findPrimesUntil(sqrt(n)));

}

    


int vecSum(vector<int> v) {
    if (v.size() == 0) {
        return 0;
    } else {
        int sum = 0;
        sum += v[0];
        v.erase(v.begin());
        return sum + vecSum(v);
    }
}

int min(vector<int> v) {
    if (v.size() == 1) {
        return v[0];
    } else {
        if (v[0] < v[1]) {
            v.erase(v.begin()+1);
        } else {
            v.erase(v.begin());
        }
        return min(v);
    }
}

//without iterators
int sumEven(vector<int> v) {
    if (v.size() == 0) {
        return 0;
    } else {
        int sum = 0;
        if (v[0] % 2 == 0) {
            sum += v[0];
        }
        v.erase(v.begin());
        return sum + sumEven(v);
    }
}

int sumUntilOdd(vector<int> v) {
    if (v.size() == 0) {
        return 0;
    } 
    else if (v[0] % 2 == 1) {
        return 0;
    }
    else {
        int sum = v[0];
        v.erase(v.begin());
        return sum + sumUntilOdd(v);

    }
}

string reverse(string s) {
    if (s.size() == 0) {
        return "";
    } else {
        return s[s.size()-1] + reverse(s.substr(0, s.size()-1));
    }
}

bool palindrom(string s) {
    if (s == reverse(s)) {
        return true;
    } else {
        return false;
    }
}

int strLen(string s) {
    if (s.size() == 0) {
        return 0;
    } else {
        return 1 + strLen(s.substr(1));
    }
}

int countVowels(string s) {
    if (s.size() == 0) {
        return 0;
    } else {
        set<char> vowels = {'a', 'e', 'i', 'o', 'u'};
        if (vowels.find(s[0]) != vowels.end()) {
            return 1 + countVowels(s.substr(1));
        } else {
            return countVowels(s.substr(1));
        }
    }
}

int fibonacci(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}

int main() {
    vector<int> v = {2,4,6,3,8,1};
    string s = "anni tejet inna";
    cout <<  "============================ n = 5 ============================" << endl;
    cout <<  "                        sum(n) =  " << sum(5) << endl;
    cout <<  "    arithmeticProgression73(n) =  " << arithmeticProgression73(5) << endl;
    cout <<  "  arithmeticProgression(n,7,3) =  " << arithmeticProgression(5,7,3) << endl;
    cout <<  "     geometricProgression53(n) =  " << geometricProgression53(5) << endl;
    cout <<  "   geometricProgression(n,5,3) =  " << geometricProgression(5,5,3) << endl;
    
    cout << endl;
    cout <<  "====================== v = {2,4,6,3,8,1} ======================" << endl;
    cout <<  "                        min(v) =  " << min(v) << endl;
    cout <<  "                     vecSum(v) =  " << vecSum(v) << endl;
    cout <<  "                    sumEven(v) =  " << sumEven(v) << endl;
    cout <<  "                sumUntilOdd(v) =  " << sumUntilOdd(v) << endl;
    cout << endl;
    cout <<  "==================== s = \"anni tejet inna\" ====================" << endl;
    cout <<  "                     strLen(s) =  " << strLen(s) << endl;
    cout <<  "                  palindrom(s) =  " << palindrom(s) << endl;
    cout <<  "                countVowels(s) =  " << countVowels(s) << endl;
    cout << endl;
    cout <<  "===============================================================" << endl;
    cout <<  "                  euclid(6,10) =  " << euclid(6,10) << endl;
    cout <<  "                 fibonacci(10) =  " << fibonacci(10) << endl;
    return 0;
}