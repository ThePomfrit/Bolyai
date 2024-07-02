#include <stdio.h>
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

void kiir(int a[], int n) {
    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main() {
    int a[20];
    int indA = 0;

    cout << "Kerem a szamokat, 0 vegjelig: ";
    do {
        cin >> a[indA];
        indA++;
    } while (indA < 20 && a[indA - 1] != 0);

    int b[20];
    int indB = 0;
    //kiprobalasra kikommenteljuk oket ugy, hogy csak egy maradjon meg.
    //egyesevel mindet kiprobaljuk
    ifstream f("vegjel.txt");
    // ifstream f("vegjel.txt");
    // ifstream f("keves.txt");

    f >> b[indB];
    indB++;

    while(!f.eof() && indB < 20 && b[indB - 1] != 0) {
        f >> b[indB];
        indB++;
    }

    int c[20];
    int indC = 0;

    srand(time(0));
    do {
        c[indC] = rand() % 41 - 20;
        indC++;
    } while(indC < 20 && c[indC - 1] != 0);

    cout << "Az a tomb (cin): ";
    kiir(a, indA);

    cout << "A b tomb (file): ";
    kiir(b, indB);

    cout << "A c tomb (rand): ";
    kiir(c, indC);

}