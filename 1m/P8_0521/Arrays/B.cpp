#include <stdio.h>
#include <iostream>

using namespace std;

int main() {
    int a[5];

    cout << "Kérek 5 számot: ";
    for (int i = 0; i < 5; i++) {
        cin >> a[i];
    }

    int osszeg = 0;
    for(int i = 0; i < 5; i++) {
        osszeg += a[i];
    }
    cout << "A tömb elemeinek összege: " << osszeg << endl;
        
    double atlag = (double)osszeg / 5;
    cout << "A tömb elemeinek átlaga: " << atlag << endl;

    cout << "A tömb elemei, amelyek nagyobbak az átlagnál: ";
    for(int i = 0; i < 5; i++) {
        if (a[i] > atlag) {
            cout << a[i] << " ";
        }
    }
    cout << endl;

    cout << "A tömb negatív elemei: ";
    for(int i = 0; i < 5; i++) {
        if (a[i] < 0) {
            cout << a[i] << " ";
        }
    }
    cout << endl;

}