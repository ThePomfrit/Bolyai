#include <stdio.h>
#include <iostream>

using namespace std;

int main() {
    double a[8] = {5.2, 3.4, 11, 21.3, 31.1, 0, 19.1, 10.3};

    cout << fixed << showpoint;
    cout.precision(2);
    for(int i = 0; i < 8; i++) {
        cout << a[i] << endl;
    }

    cout << "x\tx+3\tx/4\t1/x" << endl;
    cout << "-----------------------------" << endl;
    for(int i = 0; i < 8; i++) {
        if(a[i] != 0) {
            cout << a[i] << "\t" << a[i] + 3 << "\t" << a[i] / 4 << "\t" << 1 / a[i] << endl;
        }
        else {
            cout << a[i] << "\t" << a[i] + 3 << "\t" << a[i] / 4 << "\t" << "Hiba!" << endl;
        }
    }
    cout << "-----------------------------" << endl;
    
    double osszeg = 0;
    double plusz3Osszeg = 0;
    double per4Osszeg = 0;
    double egyPerOsszeg = 0;
    int egyPerDB = 0;
    for(int i = 0; i < 8; i++) {
        osszeg += a[i];
        plusz3Osszeg += a[i] + 3;
        per4Osszeg += a[i] / 4;
        if(a[i] != 0) {
            egyPerOsszeg += 1 / a[i];
            egyPerDB++;
        }
    }
    cout << osszeg << "\t" << plusz3Osszeg << "\t" << per4Osszeg << "\t" << egyPerOsszeg << endl;

    double atlag = osszeg / 8;
    double plusz3Atlag = plusz3Osszeg / 8;
    double per4Atlag = per4Osszeg / 8;
    double egyPerAtlag = egyPerOsszeg / egyPerDB;

    cout << atlag << "\t" << plusz3Atlag << "\t" << per4Atlag << "\t" << egyPerAtlag << endl;


}