#include <stdio.h>
#include <iostream>

using namespace std;

int main() {
    cout << endl; 

    int cipokSzama;
    cout << "Add meg a vásárolt cipők számát: ";
    cin >> cipokSzama;
    double cipok[cipokSzama];

    cout << "A cipők árai: ";
    srand(time(0));
    for(int i = 0; i < cipokSzama; i++) {
        cipok[i] = rand() % 11501 + 500;
        cout << cipok[i] << " ";
    }
    cout << endl;

    double legkisebb = cipok[0];
    int kisInd = 0;
    for(int i = 1; i < cipokSzama; i++) {
        if(cipok[i] < legkisebb){
            legkisebb = cipok[i];
            kisInd = i;
        }
    }
    cout << "A legolcsóbb cipő ára: " << legkisebb << endl;

    double osszeg = 0;
    for(int i = 0; i < cipokSzama; i++) {
        // Ne felejtsuk el, 
        // hogy a learazas csak akkor ervenyes, 
        // ha 4 vagy tobb cipot vasarolunk!
        if(i == kisInd && cipokSzama >= 4){
            osszeg += 1;
        }
        else {
            osszeg += cipok[i];
        }
    }
    cout << "Összesen fizetendő: " << osszeg << endl;

    cout << endl;
    return 0;
}