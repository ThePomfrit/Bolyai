#include <stdio.h>
#include <iostream>

using namespace std;

int main() {
    int a[10];

    cout << "A tömb elemei: ";
    srand(time(0));
    for (int i = 0; i < 10; i++) {
        a[i] = rand() % 16 - 5;
        cout << a[i] << " ";
    }
    cout << endl;

    int osszeg = 0;
    for(int i = 0; i < 10; i++) {
        if(a[i] % 2 == 0){
            osszeg += a[i];
        }
    }
    cout << "A páros elemek összege: " << osszeg << endl;

    int legnagyobb = a[0];
    int legkisebb = a[0];
    for(int i = 1; i < 10; i++) {
        if(a[i] > legnagyobb){
            legnagyobb = a[i];
        }
        if(a[i] < legkisebb){
            legkisebb = a[i];
        }
    }
    cout << "A legnagyobb elem: " << legnagyobb << endl;
    cout << "A legkisebb elem: " << legkisebb << endl;

    double atlag = (legnagyobb + legkisebb) / 2.0;
    cout << "A legnagyobb és legkisebb elem átlaga: " << atlag << endl;

    cout << "A tömb elemei, amelyek kisebbek az átlagnál: ";
    for(int i = 0; i < 10; i++) {
        if (a[i] < atlag) {
            cout << a[i] << " ";
        }
    }
    return 0;
}