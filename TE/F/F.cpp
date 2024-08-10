/*

Írd meg a következő függvényeket rekurzívan:
+ Kiszámolja egy adott `n` számig a számok összegét 
    `sum(5) = 1+2+3+4+5 = 15`
+ Kiszámolja egy vektor elemeinek összegét 
    `vecSum([1,3,5,2,7] = 1+3+5+2+7 = 18`
+ Megkeresi egy vektor legkisebb elemét 
    `min([3,5,2,6,1,3] = 1)`
+ Megállapítja egy `string`ről, hogy palindrom-e 
    `palindrom("anni tejet inna") = true)`
+ Összeadja a páros számokat egy vektorban 
    `sumEven([2,5,4,1,6,3,2] = 14)`
+ Összeadja a számokat egy vektorban, amíg páratlan számba nem ütközik 
    `sumUntilOdd([2,5,4,1,6,3,2]) = 2`
+ Megszámolja, hogy egy string milyen hosszú 
    `strLen("anni tejet inna") = 15`
+ Megszámolja, hogy egy stringben hány magánhangzó van 
    `countVowels("anni tejet inna") = 6`
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
//without iterators
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
    } else {
        if (v[0] % 2 == 1) {
            return 0;
        } else {
            return v[0] + sumUntilOdd(v);
        }
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

int main() {

    vector<int> v = {2,4,6,3,8};
    cout <<  "A szamok osszege 5ig " << sum(5) << endl;
    cout <<  "A vektor elemeinek osszege " << vecSum(v) << endl;
    cout <<  "A vektor legkisebb eleme " << min(v) << endl;
    cout <<  "A string palindrom-e " << palindrom("anni tejet inna") << endl;
    cout <<  "A vektor paros szamainak osszege " << sumEven(v) << endl;
    cout <<  "A vektor szamainak osszege paratlan szamig " << sumUntilOdd(v) << endl;
    cout <<  "A string hossza " << strLen("anni tejet inna") << endl;
    cout <<  "A stringben levo maganhangzok szama " << countVowels("anni tejet inna") << endl;
    return 0;
}