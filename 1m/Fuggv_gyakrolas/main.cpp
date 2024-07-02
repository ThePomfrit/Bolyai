#include <stdio.h>
#include <iostream>
#include <string>
#include <fstream>
#include <cmath>
#include <ctime>

using namespace std;

void kiir(int *a, int n) {
    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

int legkisebb(int* a, int n) {
    int min = a[0];
    for(int i = 1; i < n; i++) {
        if(a[i] < min) {
            min = a[i];
        }
    }
    return min;
}

int tombOsszeg(int* a, int n) {
    int osszeg = 0;
    for(int i = 0; i < n; i++) {
        osszeg += a[i];
    }
    return osszeg;
}

double tombAtlag(int* a, int n) {
    return (double)tombOsszeg(a, n) / n;
}

string osszefuz(string a, int n, string b) {
    string c = a;
    c.append(to_string(n));
    c.append(b);
    return c;
}

int szamOsszeg(int a, int b, int c) {
    return a + b + c;
}

double szamAtlag(int a, int b, int c) {
    return szamOsszeg(a, b, c) / 3;
}

double atfogo (double a, double b) {
    return sqrt(a * a + b * b);
}

string tombMondat(int* a, int n) {
    string s = "A tomb atlagon aluli elemeibol ";
    int db = 0;
    for(int i = 0; i < n; i++) {
        if(a[i] < tombAtlag(a, n)) {
            db++;
        }
    }
    s.append(to_string(db));
    s.append(" darab van, ezek: ");
    for(int i = 0; i < n; i++) {
        if(a[i] < tombAtlag(a, n)) {
            s.append(to_string(a[i]));
            s.append(" ");
        }
    }
    return s;
}

int* tombokOsszege(int* a, int indA, int* b, int indB, int* c, int indC) {
    int indD = max(max(indA, indB), indC);
    int* d = new int[indD];
    for(int i = 0; i < indD; i++) {
        d[i] = 0;
        if(i < indA) {
            d[i] += a[i];
        }
        if(i < indB) {
            d[i] += b[i];
        }
        if(i < indC) {
            d[i] += c[i];
        }
    }
    return d;
}

int main() {
    //1. feladat a,
    int a[20];
    int indA = 0;

    cout << "Kerem a szamokat, 0 vegjelig: ";
    do {
        cin >> a[indA];
        indA++;
    } while (indA < 20 && a[indA - 1] != 0);

    //1. feladat b,
    int b[20];
    int indB = 0;
    //kiprobalasra kikommenteljuk oket ugy, hogy csak egy maradjon meg.
    //egyesevel mindet kiprobaljuk
    //ifstream f("vegjel.txt");
    // ifstream f("teljes.txt");
    ifstream f("keves.txt");

    f >> b[indB];
    indB++;

    while(!f.eof() && indB < 20 && b[indB - 1] != 0) {
        f >> b[indB];
        indB++;
    }

    //1. feladat c,
    int c[20];
    int indC = 0;

    srand(time(0));
    do {
        c[indC] = rand() % 41 - 20;
        indC++;
    } while(indC < 20 && c[indC - 1] != 0);

    //1. feladat
    int x1 = 4;
    int y1 = 7;
    int z1 = 2;

    double x2 = 3.14;  //pi
    double y2 = 2.71;  //euler
    double z2 = 1.41;  //gyok 2

    //2. feladat
    cout << "Az a tomb (cin): ";
    kiir(a, indA);

    cout << "A b tomb (file): ";
    kiir(b, indB);

    cout << "A c tomb (rand): ";
    kiir(c, indC);

    //3. feladat
    cout << "A legkisebb elem az a tombben: " << legkisebb(a, indA) << endl;
    cout << "A legkisebb elem a b tombben: " << legkisebb(b, indB) << endl;
    cout << "A legkisebb elem a c tombben: " << legkisebb(c, indC) << endl;

    //4. feladat
    cout << "Az a tomb osszege: " << tombOsszeg(a, indA) << endl;
    cout << "A b tomb osszege: " << tombOsszeg(b, indB) << endl;
    cout << "A c tomb osszege: " << tombOsszeg(c, indC) << endl;

    //5. feladat
    cout << "Az a tomb atlaga: " << tombAtlag(a, indA) << endl;
    cout << "A b tomb atlaga: " << tombAtlag(b, indB) << endl;
    cout << "A c tomb atlaga: " << tombAtlag(c, indC) << endl;

    //6. feladat
    cout << osszefuz("Az a tombnek ", indA, " eleme van.") << endl;
    cout << osszefuz("A b tombnek ", indB, " eleme van.") << endl;
    cout << osszefuz("A c tombnek ", indC, " eleme van.") << endl;

    //7. feladat
    cout << "A " << x1 << ", " << y1 << ", " << z1 << " szamok osszege: " << szamOsszeg(x1, y1, z1) << endl;
    //8. feladat
    cout << "A " << x1 << ", " << y1 << " es " << z1 << " szamok atlaga: " << szamAtlag(x1, y1, z1) << endl;

    //9. feladat
    cout << "A " << x2 << " es " << y2 << " szamok atfogoja: " << atfogo(x2, y2) << endl;
    cout << "A " << x2 << " es " << z2 << " szamok atfogoja: " << atfogo(x2, z2) << endl;
    cout << "A " << y2 << " es " << z2 << " szamok atfogoja: " << atfogo(y2, z2) << endl;

    //10. feladat
    cout << tombMondat(a, indA) << endl;
    cout << tombMondat(b, indB) << endl;
    cout << tombMondat(c, indC) << endl;

    //11. feladat
    int* d = tombokOsszege(a, indA, b, indB, c, indC);
    int indD = max(max(indA, indB), indC);
    cout << "Az a, b es c tombok osszege: ";
    kiir(d, indD);

}