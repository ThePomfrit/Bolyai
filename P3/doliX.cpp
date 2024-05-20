#include <iostream>

using namespace std;

//3.	Írj függvényt, ami kiírja a tömb  elemit 4 oszlopba! A kiírás után legyen két üres sor!
void kiir3(int *a, int n) {
    for (int i = 0; i < n; i++) {
        cout << a[i] << "\t";
        if ((i+1) % 4 == 0) {
            cout << endl;
        }
    }
    cout << endl << endl;
}

//6.	Írj függvényt, ami kiszámítja  a tömb [7,21] intervallumba eső elemeinek az összegét! 
int osszeg721(int*a, int n) {
    int osszeg = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] >= 7 && a[i] <= 21) {
            osszeg += a[i];
        }
    }
    return osszeg;
}

int main() {
// 1.	Deklarálj egy 10 elemű tömböt egész számok tárolására, a neve legyen elso!
// 2.	Add neki kezdőértékként azt a tömböt, aminek az elemei: 5, 8, 11, 2, 19, 21, 33, 42
    int elso[10] = {5,8,11,2,19,21,33,42};
// 4.	A főprogramból hívd meg a fenti függvényt, hogy lássuk a tömb elemeit 4 oszlopban! (mind a 10 elemet)
    cout << "Az elso tomb elemei 4 oszlopba rendezve: \n";
    kiir3(elso, 10);
// 5.	Újra írasd ki az elemeket 4 oszlopba, de most csak a “hasznos” elemeket!
    cout << "Az elso tomb hasznos elemei 4 oszlopba rendezve: \n";
    kiir3(elso, 8);
// 7.	Hívd meg a főprogramból a függvényt, és írasd ki az  eredményt üzenet kíséretében!
    cout << "A tomb [7,21] intervallumba eso elemeinek az osszege: " << osszeg721(elso, 8) << endl;
// 8.	Hozz létre egy új tömböt, amiben ugyanennyi elem lesz! A neve legyen masodik.
    int masodik[10];
// 9.	Az új tömb elemei az eredeti tömb elemeinek háromszorosánél  15-tel kisebb számok legyenek!
    for (int i = 0; i < 10; i++) {
        masodik[i] = elso[i] * 3 - 15;
    }
// 10.	Írasd ki ezt a tömböt is 4 oszlopba!
    cout << "A masodik (= elso * 3 - 15) tomb elemei 4 oszlopba rendezve: \n";
    kiir3(masodik, 10);
// 11.	Számítsd ki ennél a tömbnél is a [7,21] intervallumba eső elemek az összegét! Írasd ki az eredményt üzenet kíséretében!
    cout << "A masodik tomb [7,21] intervallumba eso elemeinek az osszege: " << osszeg721(masodik, 8) << endl;
// 12.	Deklarálj még két, szintén 10 elemű tömböt, egész számok tárolására, harmadik és negyedik néven!
    int harmadik[10], negyedik[10];
// 13.	A harmadik tömbbe kerüljenek a második tömbből azok az elemek, amik párosak vagy 10-nél kisebbek, a negyedik-be pedig a többi elem! Ügyelj arra, hogy ne legyenek az új tömbökben “lyukak”!
    int h = 0, k = 0;
    for (int i = 0; i < 10; i++) {
        if (masodik[i] % 2 == 0 || masodik[i] < 10) {
            harmadik[h] = masodik[i];
            h++;
        } else {
            negyedik[k] = masodik[i];
            k++;
        }
    }
// 14.	Írasd ki, hogy hány eleme van a harmadik és a negyedik tömbnek!
    cout << "A harmadik tomb merete: " << h << endl;
    cout << "A negyedik tomb merete: " << k << endl;
// 15.	Írasd ki csak a “hasznos” elemeiket!
    cout << "A harmadik (masodikbol paros vagy < 10) tomb hasznos elemei 4 oszlopba rendezve: \n";
    kiir3(harmadik, h);
    cout << "A negyedik (masodikbol paratlan es >= 10) tomb hasznos elemei 4 oszlopba rendezve: \n";
    kiir3(negyedik, k);
// 16.	Az első tömb 5. elemét csökkentsd 11-gyel! 
    elso[4] -= 11;
// 17.	Írasd  ki újra az elso és a masodik tömböt, mindkettőt 3-3 oszlopba!
    cout << "Az elso tomb elemei 3 oszlopba rendezve: \n";
    for (int i = 0; i < 10; i++) {
        cout << elso[i] << "\t";
        if ((i+1) % 3 == 0) {
            cout << endl;
        }
    }
    cout << endl << endl;
    cout << "A masodik tomb elemei 3 oszlopba rendezve: \n";
    for (int i = 0; i < 10; i++) {
        cout << masodik[i] << "\t";
        if ((i+1) % 3 == 0) {
            cout << endl;
        }
    }
    cout << endl << endl;



}