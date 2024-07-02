#include <iostream>

using namespace std;

// 4.	Írj függvényt, ami kiírja a tömb elemeit 5 oszlopba! A kiírás előtt és után is egy-egy üres sor legyen! 
void kiir5(int *a, int n) {
    cout << endl;
    for (int i = 0; i < n; i++) {
        cout << a[i] << "\t";
        if ((i+1) % 5 == 0) {
            cout << endl;
        }
    }
    cout << endl;
}

// 6.	Írj függvényt, ami megszámolja, hogy  a tömbben hány 110-nél nagyobb páratlan szám van! 
int paratlan110(int*a, int n) {
    int db = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] > 110 && a[i] % 2 == 1) {
            db++;
        }
    }
    return db;

}

int main() {
    srand(time(0));
// 1.	Deklarálj egy 15 elemű tömböt egész számok tárolására, a neve legyen e!
    int e[15];
// 2.	Az elemei legyenek véletlen számok a [100, 120] intervallumból! Ha megjelenik az első 110-es érték, hagyd abba a tömb feltöltését! Ügyelj arra, hogy ne legyen több 15 elemnél! 
    int i = 0;
    do  {
        e[i] = rand() % 21 + 100;
        i++;
    }while ((i < 15) && (e[i - 1] != 110));
// 3.	Írasd ki, hogy hány elem lett végül a tömbben! 
    cout << "A tombben " << i << " elem van." << endl;

// 5.	A főprogramból hívd meg a fenti függvényt, hogy lássuk a tömb elemeit 5 oszlopban!
    cout << "Az e tomb elemei 5 oszlopba rendezve: \n";
    kiir5(e, i);

// 7.	Hívd meg a főprogramból a függvényt, és írasd ki az  eredményt üzenet kíséretében!
    cout << "A tombben " << paratlan110(e, i) << " db 110-nel nagyobb paratlan szam van." << endl;
// 8.	Hozz létre egy új tömböt, amiben ugyanennyi elem lesz! A neve legyen m.
    int m[15];
// 9.	Az m tömbbe írj az e tömb páratlan elemeinél 4-gyel kisebbet, a párosakhoz viszont adj hozzá 9-et! Az elemek sorrendje ne változzon!
    for (int j = 0; j < i; j++) {
        if (e[j] % 2 == 1) {
            m[j] = e[j] - 4;
        } else {
            m[j] = e[j] + 9;
        }
    }
// 10.	Írasd ki ezt a tömböt is 5 oszlopba!
    cout << "Az m (e-bol paratlan - 4, paros + 9) tomb elemei 5 oszlopba rendezve: \n";
    kiir5(m, i);
// 11.	Ebben a tömbben hány hány 110-nél nagyobb páratlan szám van? Írasd ki az eredményt üzenet kíséretében!
    cout << "A m tombben " << paratlan110(m, i) << " db 110-nel nagyobb paratlan szam van." << endl;
// 12.	Deklarálj még egy, szintén 10 elemű tömböt, egész számok tárolására, h néven!
    int h[10];
// 13.	Ebbe a tömbbe kerüljenek az e tömbből azok az elemek, amik öttel oszthatóak vagy a középső számjegyük 0!
    int j = 0;
    for (int k = 0; k < i; k++) {
        if (e[k] % 5 == 0 || (e[k] / 10) % 10 == 0) {
            h[j] = e[k];
            j++;
        }
    }

// 14.	Írasd ki, hogy hány eleme van a h tömbnek!
    cout << "A h tomb merete: " << j << endl;

// 15.	Írasd ki csak a “hasznos” elemeit, 5 oszlopba!
    cout << "A h (e-bol 5-tel oszthato vagy a kozepsoben 0) tomb hasznos elemei 5 oszlopba rendezve: \n";
    kiir5(h, j);

// 16.	Az m tömb 10. elemét  szorzod meg 3-mal! 
    m[9] *= 3;

// 17.	Írasd  ki újra az m tömb elemeit, 5 oszlopba!
    cout << "Az m tomb elemei 5 oszlopba rendezve: \n";
    kiir5(m, i);
    return 0;


}