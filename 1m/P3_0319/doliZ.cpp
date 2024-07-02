#include <iostream>

using namespace std;

// 4.	Írj függvényt, ami kiírja a tömb elemeit egymás mellé, 
// vesszővel elválasztva! Az utolsó elem után ne legyen vessző! 
// A kiírás előtt és után is egy-egy üres sor legyen! 
void kiir(int *a, int n) {
    for (int i = 0; i < n; i++) {
        cout << a[i];
        if (i < n - 1) {
            cout << ",";
        }
    }
    cout << endl;
}

// 7.	Írj függvényt, ami meghatározza a tömb legkisebb elemét! 
int lkis(int*a, int n){
    int kis = a[0];
    for(int i = 1; i < n; i++) {
        if(a[i] < kis) {
            kis = a[i];
        }
    }
    return kis;
}

int main() {
// 1.	Deklarálj egy 7 elemű tömböt egész számok tárolására, a neve legyen r!
    int r[7];
    
// 2.	Az elemeit a felhasználó vigye be, 0 végjelig! 
// Ügyelj arra, hogy ne legyen több 7 elemnél! 
    cout << "Kerek 7 szamot" << endl;
    int i = 0;
    do  {
        cin >> r[i];
        i++;
    } while ((i < 7) && (r[i - 1] != 0));
// 3.	Írasd ki, hogy hány elem került a tömbbe!
    cout << "A tombben " << i << " elem van" << endl;
// 5.	A főprogramból hívd meg a fenti függvényt, hogy lássuk a tömb 7  elemét a megadott módon!
    kiir(r,7);
// 6.	Újra írasd ki a tömböt, de most már csak a “hasznos” elemeit, amiket a felhasználó vitt be (a végjelet sem)!
    kiir(r,i);

// 8.	Hívd meg a főprogramból a függvényt, és írasd ki az  eredményt üzenet kíséretében!
    cout << "A legkisebb elem: " << lkis(r, i) << endl;

// 9.	Változtasd meg a tömb 4. elemét úgy, hogy 25 legyen, ha páros volt, egyébként vonj ki belőle 75-öt!
    if(r[4] % 2 == 0) {
        r[4] = 25;
    }
    else {
        r[4] -= 75;
    }
// 10.	Most mi a tömb legkisebb eleme? Írasd ki!
    cout << "A tomb uj legkisebb eleme: " << lkis(r,i);
// 11.	Hozz létre egy új tömböt, amiben ugyanennyi elem lesz! A neve legyen s.
    double s[7];
// 12.	Az s tömbbe írj az r tömb reciprok értékénél 2-vel nagyobb számot!
    for(int j = 0; j < i; j++) {
        s[j] = (double)1 / r[j] + 2;
    }
// 13.	Írasd ki ezt a tömböt is! Ez nem megy a kész függvénnyel, a főprogramban dolgozz rajta!
    for (int j = 0; j < i; j++) {
        cout << s[i];
        if (j < i - 1) {
            cout << ",";
        }
    }
// 14.	Deklarálj még egy, szintén 7 elemű tömböt, egész számok tárolására, t néven!
    int t[7];
// 15.	A t tömbbe kerüljenek az r tömbből azok az elemek, 10 és 70 közé esnek!
    int k = 0;
    for(int j = 0; j < i; j++){
        if(r[j] > 10 && r[j] < 70) {
            t[k] = r[j];
            k++;
        }
    }
// 16.	Írasd ki, hogy hány eleme van a t tömbnek!
    cout << "A t tombnek " << k << " eleme van." << endl;
// 17.	Írasd ki csak a “hasznos” elemeit a függvénnyel!
    kiir(t,k);
}