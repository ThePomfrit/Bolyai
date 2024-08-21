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



int main() {
    vector<int> v = {2,4,6,3,8,1};
    cout << endl;
    cout <<  "====================== v = {2,4,6,3,8,1} ======================" << endl;
    cout <<  "                        min(v) =  " << min(v) << endl;
    cout <<  "                     vecSum(v) =  " << vecSum(v) << endl;
    cout <<  "                    sumEven(v) =  " << sumEven(v) << endl;
    cout <<  "                 countNs(v, 8) =  " << countNs(v, 8) << endl;
    cout <<  "                sumUntilOdd(v) =  " << sumUntilOdd(v) << endl;

    return 0;
}