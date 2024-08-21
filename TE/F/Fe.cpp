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

bool isPrime(int n) {
    vector<int> primes = {2};
    for(int i = 3; i < n; i++) {
        for(int j = 0; j < primes.size(); j++) {
            if (i % primes[j] == 0) {
                break;
            } else if (j == primes.size() - 1) {
                primes.push_back(i);
            }
        }
    }

}

vector<int> findPrimesUntil(int n) {
    if(n < 2) {
        return {};
    }
    if(n == 2) {
        return {2};
    }
    if(isPrime(n)) {
        vector<int> primes = findPrimesUntil(n-1);
        primes.push_back(n);
        return primes;
    }
    return findPrimesUntil(n-1);
}

int vecSum(vector<int> v) {
    if (v.size() == 0) {
        return 0;
    } else {
        int sum = v[0];
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

int countNs(vector<int> v, int n) {
    if (v.size() == 0) {
        return 0;
    } else {
        int count = 0;
        if (v[0] == n) {
            count++;
        }
        v.erase(v.begin());
        return count + countNs(v, n);
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

uint fibonacci(uint n) {
    if (n == 0) {
        return 0;
    } 
    if (n == 1) {
        return 1;
    } 
    return (fibonacci(n-1) + fibonacci(n-2));
}

int euclid(int a, int b) {
    if(a < b) {
        return euclid(b, a);
    }
    if(a % b == 0) {
        return b;
    }
    return euclid(b, a % b);
}

void merge(vector<int> &v, int s, int m, int e) {
    vector<int> left(v.begin() + s, v.begin() + m + 1);
    vector<int> right(v.begin() + m + 1, v.begin() + e + 1);
    int i = 0;
    int j = 0;
    int k = s;
    while (i < left.size() && j < right.size()) {
        if (left[i] < right[j]) {
            v[k] = left[i];
            i++;
        } else {
            v[k] = right[j];
            j++;
        }
        k++;
    }
    while (i < left.size()) {
        v[k] = left[i];
        i++;
        k++;
    }
    while (j < right.size()) {
        v[k] = right[j];
        j++;
        k++;
    }
}

void mergeSort(vector<int> &v, int s, int e) {
    if (s < e) {
        int m = (s + e) / 2;
        mergeSort(v, s, m);
        mergeSort(v, m+1, e);
        merge(v, s, m, e);
    }
}

void printVector(vector<int> v) {
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
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
    cout <<  "                  factorial(n) =  " << factorial(5) << endl;
    cout <<  "            twoToThePowerOf(n) =  " << twoToThePowerOf(5) << endl;
    cout <<  "             toThePowerOf(2,n) =  " << toThePowerOf(2,5) << endl;
    cout <<  "                  product(7,8) =  " << product(7,8) << endl;
    cout <<  "           sumOddInRange(5,14) =  " << sumOddInRange(5,14) << endl;
    cout <<  "                 fibonacci(10) =  " << fibonacci(10) << endl;

    cout << endl;
    cout <<  "====================== v = {2,4,6,3,8,1} ======================" << endl;
    cout <<  "                        min(v) =  " << min(v) << endl;
    cout <<  "                     vecSum(v) =  " << vecSum(v) << endl;
    cout <<  "                    sumEven(v) =  " << sumEven(v) << endl;
    cout <<  "                 countNs(v, 8) =  " << countNs(v, 8) << endl;
    cout <<  "                sumUntilOdd(v) =  " << sumUntilOdd(v) << endl;
    
    cout << endl;
    cout <<  "==================== s = \"anni tejet inna\" ====================" << endl;
    cout <<  "                     strLen(s) =  " << strLen(s) << endl;
    cout <<  "                  palindrom(s) =  " << palindrom(s) << endl;
    cout <<  "                countVowels(s) =  " << countVowels(s) << endl;
    
    cout << endl;
    cout <<  "===============================================================" << endl;
    cout <<  "               euclid(100,184) =  " << euclid(100,184) << endl;
    mergeSort(v,0,5);
    cout <<  "              mergeSort(v,0,5) =  ";
    printVector(v);
    return 0;
}