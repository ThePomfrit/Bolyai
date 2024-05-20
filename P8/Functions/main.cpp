#include <stdio.h>
#include <iostream>

using namespace std;

void kiir1(int *a, int n) {
    for(int i = 0; i < n; i++) {
        cout << a[i] << endl;
    }
    //habar nem resze a feladatnak, sokkal atlathatobb lesz a kiiras, ha elvalasztjuk
    cout << "--------------------------------" << endl;
}

void kiir2(int *a, int n) {
    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << "\n--------------------------------" << endl;
}

void kiir3(int *a, int n) {
    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
        if(i % 5 == 4) {
            cout << endl;
        }
    }
    cout << "\n--------------------------------" << endl;
}

int kis(int *a, int n) {
    int min = a[0];
    for(int i = 1; i < n; i++) {
        if(a[i] < min) {
            min = a[i];
        }
    }
    return min;
}

int osszeg (int *a, int n) {
    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += a[i];
    }
    return sum;
}

int main() {
    int a[40];
    int indA = 0;
    srand(time(0));
    do {
        a[indA] = rand() % 101;
        indA++;
    } while (a[indA - 1] != 0 && indA < 40);

    int b[25];
    int indB = 0;
    srand(time(0));
    do {
        b[indB] = rand() % 31 + 10;
        indB++;
    } while (b[indB - 1] != 30 && indB < 25);

    cout << "Az elso tomb: " << endl;
    kiir1(a, indA);
    cout << "A masodik tomb: " << endl;
    kiir1(b, indB);

    cout << "Az elso tomb: " << endl;
    kiir2(a, indA);
    cout << "A masodik tomb: " << endl;
    kiir2(b, indB);

    cout << "Az elso tomb: " << endl;
    kiir3(a, indA);
    cout << "A masodik tomb: " << endl;
    kiir3(b, indB);

    if(indA > indB) {
        cout << "A masodik tombben van kevesebb elem, ami " << indB << " db." << endl;
    } else if(indA < indB) {
        cout << "Az elso tombben van kevesebb elem, ami " << indA << " db." << endl;
    } else {
        cout << "A ket tombben ugyanannyi elem van, ami " << indA << " db." << endl;
    }

    int ossz[40];
    //ameddig mindkettoben vannak elemek, addig az osszeguk kell
    for(int i = 0; i < (min(indA, indB)); i++) {
        ossz[i] = a[i] + b[i];
    }
    //amikor mar az egyikbol elfogyott, akkor csak atadjuk a tobbi elemet
    for(int i = min(indA, indB); i < max(indA, indB); i++) {
        if(indA > indB) {
            ossz[i] = a[i];
        } else {
            ossz[i] = b[i];
        }
    }

    cout << "Az osszeg tomb: " << endl;
    kiir3(ossz, max(indA, indB));

    int kisA = kis(a, indA);
    int kisB = kis(b, indB);
    int kisOsszeg = kis(ossz, max(indA, indB));
    cout << "Az elso tomb legkisebb eleme: " << kisA << endl;
    cout << "A masodik tomb legkisebb eleme: " << kisB << endl;
    cout << "Az osszeg tomb legkisebb eleme: " << kisOsszeg << endl;

    int osszA = osszeg(a, indA);
    int osszB = osszeg(b, indB);
    int osszOsszeg = osszeg(ossz, max(indA, indB));
    cout << "Az elso tomb osszege: " << osszA << endl;
    cout << "A masodik tomb osszege: " << osszB << endl;
    cout << "Az osszeg tomb osszege: " << osszOsszeg << endl;









}