#include <stdio.h>
#include <iostream>

using namespace std;

int main() {
    int a[40];

    int ind = 0;
    srand(time(0));
    do {
        a[ind] = rand() % 31 + 10;
        ind++;
    } while (a[ind - 1] != 17 && ind < 40);

    // A feladatbol ugy ertem, hogy a 17 mar ne szamitson "hasznosnak".
    // Igy a 17 valojaban benne van a tombben, de nem szamit a hasznosok hoze.
    if(a[ind - 1] == 17) {
        ind--;
    }
    cout << "A tombben " << ind << " hasznos elem van." << endl;

    cout << endl;
    for(int i = 0; i < ind; i++) {
        cout << a[i] << " ";
        if(i % 8 == 7) {
            cout << endl;
        }
    }
    cout << endl;

    //a 10es indexu mar a 11. elem
    if(ind >= 11) {
        int csere = a[10];
        a[10] = a[0];
        a[0] = csere;
    }

    cout << endl;
    for(int i = 0; i < ind; i++) {
        cout << a[i] << " ";
        if(i % 8 == 7) {
            cout << endl;
        }
    }
    cout << endl;

    for(int i = 0; i < ind; i++) {
        if(a[i] % 2 == 0) {
            a[i] /= 2;
        }
    }

    cout << endl;
    for(int i = 0; i < ind; i++) {
        cout << a[i] << " ";
        if(i % 8 == 7) {
            cout << endl;
        }
    }
    cout << endl;

    for(int i = 0; i < ind; i++) {
        if(i % 2 == 1) {
            a[i] += 10;
        }
    }

    cout << endl;
    for(int i = 0; i < ind; i++) {
        cout << a[i] << " ";
        if(i % 5 == 4) {
            cout << endl;
        }
    }
    cout << endl;

    for (int i = 0; i < ind; i++) {
        if(a[i] % 10 == 0) {
            a[i] -= 7;
        }
    }

    cout << endl;
    for(int i = 0; i < ind; i++) {
        cout << a[i] << " ";
        if(i % 4 == 3) {
            cout << endl;
        }
    }
    cout << endl;

    int paratlanOsszeg = 0;
    int paratlanDB = 0;
    for(int i = 0; i < ind; i++) {
        if(a[i] % 2 == 1) {
            paratlanOsszeg += a[i];
            paratlanDB++;
        }
    }
    double paratlanAtlag = paratlanOsszeg * 1.00 / paratlanDB;
    cout << "A paratlan szamok osszege: " << paratlanOsszeg << endl;
    cout << "A paratlan szamok atlaga: " << paratlanAtlag << endl;

    int legkisebb = a[0];
    int legnagyobb = a[0];
    for(int i = 1; i < ind; i++) {
        if(a[i] < legkisebb) {
            legkisebb = a[i];
        }
        if(a[i] > legnagyobb) {
            legnagyobb = a[i];
        }
    }
    cout << "A legkisebb elem: " << legkisebb << endl;
    cout << "A legnagyobb elem: " << legnagyobb << endl;

}