/*

Írd meg a következő függvényeket rekurzívan:
+ Az Euklidészi algoritmus segítségével megkeresi két szám legnagyobb közös osztóját
    `euclid(184,100) = 4`
+ Rendezi a vektort a merge sort használatával
    `mergeSort({2,4,6,3,8,1}); v = {1,2,3,4,6,8}`
+ Egy rendezett vektorban megkeres egy elemet a bináris keresés segítségével
    `binSearch({1 3 4 8 9 11 12 15 17 21}, 2) = -1`
    `binSearch({1 3 4 8 9 11 12 15 17 21}, 4) = 2`

*/

#include <iostream>
#include <vector>
#include <string>
#include <set>

using namespace std;

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
vector<int> v = {6,4,2,3,8,1,5};
    cout << endl;
    cout <<  "===============================================================" << endl;
    cout <<  "               euclid(100,184) =  " << euclid(100,184) << endl;
    mergeSort(v,0,v.size() - 1);
    cout <<  "              mergeSort(v,0,5) =  ";
    printVector(v);
    return 0;
}