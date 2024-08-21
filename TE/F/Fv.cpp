/*

Írd meg a következő függvényeket rekurzívan:
+ Megkeresi egy vektor legkisebb elemét 
    `min({2,4,6,3,8,1}) = 1`
+ Kiszámolja egy vektor elemeinek összegét 
    `vecSum({2,4,6,3,8,1}) = 2+4+6+3+8+1 = 24`
+ Összeadja a páros számokat egy vektorban 
    `sumEven({2,4,6,3,8,1}) = 20`
+ Megszámolja, hogy egy vektorban hány darab van egy adott számból
    `countNs({2,4,6,3,8,1}, 8) = 1`
+ Összeadja a számokat egy vektorban, amíg páratlan számba nem ütközik 
    `sumUntilOdd({2,4,6,3,8,1}) = 12`
+ Megkeresi egy vektorban az utolsó páros számot
    `lastEvenNumber({2,4,6,3,8,1}) = 8`
+ Megkeresi egy vektorban az első páros számot
    `firstEvenNumber({2,4,6,3,8,1}) = 2`
+ Megkeresi egy vektorban az `n.` páros számot
    `nthEvenNumber({2,4,6,3,8,1}, 4) = 8`
+ Két vektorról megállapítja, hogy azok egyformák-e
    `equals({2,4,6,3,8,1}, {2,4,6,3,8,1}) = true`
*/

#include <iostream>
#include <vector>
#include <string>
#include <set>


using namespace std;

int findMin(vector<int> v) {
    if (v.size() == 1) {
        return v[0];
    } 
    return min(v[0], findMin(vector<int>(v.begin() + 1, v.end())));
}

int vecSum(vector<int> v) {
    if (v.size() == 0) {
        return 0;
    } 
    return v[0] + vecSum(vector<int>(v.begin() + 1, v.end()));
    
}


int sumEven(vector<int> v) {
    if (v.size() == 0) {
        return 0;
    }
    return v[0] % 2 == 0 ? 
                v[0] + sumEven(vector<int>(v.begin() + 1, v.end())) : 
                sumEven(vector<int>(v.begin() + 1, v.end()));
}

int countNs(vector<int> v, int n) {
    if (v.size() == 0) {
        return 0;
    }
    return  v[0] == n ? 
                1 + countNs(vector<int>(v.begin() + 1, v.end()), n) :
                countNs(vector<int>(v.begin() + 1, v.end()), n);
    
}

int sumUntilOdd(vector<int> v) {
    if (v.size() == 0) {
        return 0;
    } 
    if (v[0] % 2 == 1) {
        return 0;
    }
    return v[0] + sumUntilOdd(vector<int>(v.begin() + 1, v.end()));
}

int lastEvenNumber(vector<int> v) {
    if (v.size() == 0) {
        return 0;
    }

    return v[v.size() - 1] % 2 == 0 ? 
                v[v.size() - 1] : 
                lastEvenNumber(vector<int>(v.begin(), v.end() - 1));
}

int firstEvenNumber(vector<int> v) {
    if (v.size() == 0) {
        return 0;
    }
    return v[0] % 2 == 0 ? 
                v[0] : 
                firstEvenNumber(vector<int>(v.begin() + 1, v.end()));
}

bool equals(vector<int> v1, vector<int> v2) {
    if (v1.size() != v2.size()) {
        return false;
    }
    if (v1.size() == 0) {
        return true;
    }
    return v1[0] == v2[0] ? 
                equals(vector<int>(v1.begin() + 1, v1.end()), vector<int>(v2.begin() + 1, v2.end())) :
                false;
}

int main() {
    vector<int> v = {2,4,6,3,8,1};
    cout << endl;
    cout <<  "====================== v = {2,4,6,3,8,1} ======================" << endl;
    cout <<  "                        min(v) =  " << findMin(v) << endl;
    cout <<  "                     vecSum(v) =  " << vecSum(v) << endl;
    cout <<  "                    sumEven(v) =  " << sumEven(v) << endl;
    cout <<  "                 countNs(v, 8) =  " << countNs(v, 8) << endl;
    cout <<  "                sumUntilOdd(v) =  " << sumUntilOdd(v) << endl;
    cout <<  "             lastEvenNumber(v) =  " << lastEvenNumber(v) << endl;
    cout <<  "            firstEvenNumber(v) =  " << firstEvenNumber(v) << endl;
    cout <<  "                  equals(v, v) =  " << equals(v, v) << endl;

    return 0;
}