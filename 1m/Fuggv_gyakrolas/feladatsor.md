# Gyakorló feladatsor függvényekből

Minden feladatnál próbáld meg először te kitalálni, hogy hogy kellene kinéznie a fejlécnek. Ezt írd is le a programban, majd kommenteld ki (`//` teszel a sor elejére), és csak ez után nézd meg, hogy mi a fejléc.
Minden függvényt hívj meg és írass ki **üzenettel együtt** a főprogramban.
**FONTOS:** A string-es feladatoknál szükséged lesz arra, hogy int szöveggé alakuljon. Ennek az ellentétjét (szöveg -> szám) már meg tudjuk csinálni a `stoi(szam)` függvény segítségével. Ahhoz, hogy számból alakítsunk szöveggé, a `to_string(szam)` függvény fog kelleni. Ehhez fent oda kell írni, hogy `#include <string>`.

``` cpp
int a = 10;
string szamSzoveg = to_string(a);
string kiirni = "A pelda szam: "
kiirni.append(szamSzoveg);
//a fenti sorral ekvivalens a lenti
kiirni = kiirni + szamSzoveg
```
Kicsit komplikált a feladatsor, ha ezeket meg tudod csinálni, akkor biztos nem lesz gond a javítón.

1. Készíts egy tömböt `20` egész szám tárolására. Úgy töltsd fel, ahogy szeretnéd, (cin, file, random), habár én fileból olvasást ajánlom (Így nem kell minden alkalommal begépelni a számokat, sem újraszámolni az átlagot és hasonlókat minden futásnál). Mindenképp `0` végjelig olvass (vagy ameddig tele nem lesz a tömb).
Ezen kívül hozz létre egész szám tárolására `x1`, `y1` és `z1` változókat, és tizedes szám tárolására `x2`, `y2` és `z2` változókat. Mindnek adj változatos kezdőértékeket.

    **a.** Ha cin-t választod, akkor próbáld ki, hogy mi történik, ha a 0-t adsz neki (tényleg leáll-e), ha pedig beírod mind a 20 számot, akkor ezután leáll-e. Így tudod ellenőrizni, hogy jól működik az adatbeviteled. Ne felejts el negatív számokat is adni!
    <details><summary> Megoldas </summary> 

    ```cpp
    int a[20];
    int indA = 0;

    cout << "Kerem a szamokat, 0 vegjelig: ";
    do {
        cin >> a[indA];
        indA++;
    } while (indA < 20 && a[indA - 1] != 0);
    ```
    </details>

    **b.** Ha file-ból olvasol, olvashatsz `<<` vagy `getline` segítségével is. Három file-t hozz létre: `vegjel.txt`, `teljes.txt` és `keves.txt`. Az első kettőben legyen `30` darab szám (köztük negatívak is), de az elsőben valahol szerepeljen a `0`, a másodikban ne. A harmadikban kevesebb, mint `20` elem legyen, de `0` ne. Így le tudod ellenőrizni, hogy jól írtad e meg a ciklusfeltételed:
    * Ha végjelbe ütközik, akkor nem olvas tovább.
    * Ha eléri a `20` elemet, akkor nem olvas tovább.
    * Ha vége a file-nak, akkor nem próbál tovább olvasni

    <details><summary> Megoldas </summary> 

    ```cpp
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
    ```
    </details>

    **c.** Ha random szeretnéd feltölteni, akkor a `[-20,20]` intervallumból töltsd fel számokkal. Addig futtasd újra a programod, amíg egyszer generál `0`-t egy futásban (így meglátod, hogy végjelnek megáll-e), és egyszer **nem** generál `0`-t egy másik futásban (így meglátod, hogy ha a tömb végére ér, leáll-e)

    <details><summary> Megoldas </summary> 

    ```cpp
    int c[20];
    int indC = 0;

    srand(time(0));
    do {
        c[indC] = rand() % 41 - 20;
        indC++;
    } while(indC < 20 && c[indC - 1] != 0);
    ```
    </details>

2. Írj egy függvényt, ami kiírja a tömb elemeit üreshelyekkel (space, " ") elválasztva, a legvégén egy új sorral.
    <details> <summary> A függvény fejléce </summary> 
    
    `void kiir(int* a, int n)`

    </details>
    <details><summary> Megoldas </summary> 

    ```cpp
    void kiir(int *a, int n) {
        for(int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
    }

    ```
    ```cpp
    // main
    cout << "Az a tomb (cin): ";
    kiir(a, indA);

    cout << "A b tomb (file): ";
    kiir(b, indB);

    cout << "A c tomb (rand): ";
    kiir(c, indC);

    ```
    </details>
3. Készíts függvényt, ami kikeresi a tömb legkisebb elemét.
    <details> <summary> A függvény fejléce </summary> 

    `void legkisebb(int* a, int n)`

    </details>
    <details><summary> Megoldas </summary> 

    ```cpp
    int legkisebb(int* a, int n) {
        int min = a[0];
        for(int i = 1; i < n; i++) {
            if(a[i] < min) {
                min = a[i];
            }
        }
        return min;
    }
    ```
    ```cpp
    //main
    cout << "A legkisebb elem az a tombben: " << legkisebb(a, indA) << endl;
    cout << "A legkisebb elem a b tombben: " << legkisebb(b, indB) << endl;
    cout << "A legkisebb elem a c tombben: " << legkisebb(c, indC) << endl;

    ```
    </details>
4. Készíts függvényt, amely kiszámolja a tömb elemeinek összegét.
    <details> <summary> A függvény fejléce </summary> 

    `int tombOsszeg(int* a, int n)`

    </details>
    <details><summary> Megoldás </summary> 

    ```cpp
    int tombOsszeg(int* a, int n) {
        int osszeg = 0;
        for(int i = 0; i < n; i++) {
            osszeg += a[i];
        }
        return osszeg;
    }
    ```
    ```cpp
    //main
    cout << "Az a tomb osszege: " << tombOsszeg(a, indA) << endl;
    cout << "A b tomb osszege: " << tombOsszeg(b, indB) << endl;
    cout << "A c tomb osszege: " << tombOsszeg(c, indC) << endl;

    ```
    </details>
5. Készíts függvényt, ami kiszámolja a tömb elemeinek átlagát.
    <details> <summary> A függvény fejléce </summary>

    `double tombAtlag(int* a, int n)`

    </details>
        <details><summary> Megoldás </summary> 

    ```cpp
    double tombAtlag(int* a, int n) {
        return (double)tombOsszeg(a, n) / n;
    }
    ```
    ```cpp
    //main
    cout << "Az a tomb atlaga: " << tombAtlag(a, indA) << endl;
    cout << "A b tomb atlaga: " << tombAtlag(b, indB) << endl;
    cout << "A c tomb atlaga: " << tombAtlag(c, indC) << endl;

    ```
    </details>
6. Készíts függvényt, ami két string és egy számból csinál string-et, a következő módon:
    > A tömbnek 30 eleme van.

    Itt az első string `A tömbnek `, a szám `30`, a második string ` eleme van.`

    <details> <summary> A függvény fejléce </summary> 

    `string osszefuz(string kezd, int szam, string veg)`

   </details>
       <details><summary> Megoldás </summary> 

    ```cpp
    string osszefuz(string a, int n, string b) {
        string c = a;
        c.append(to_string(n));
        c.append(b);
        return c;
    }
    ```
    ```cpp
    //main
    cout << osszefuz("Az a tombnek ", indA, " eleme van.") << endl;
    cout << osszefuz("A b tombnek ", indB, " eleme van.") << endl;
    cout << osszefuz("A c tombnek ", indC, " eleme van.") << endl;

    ```
    </details>

7. Készíts függvényt, ami kap 3 egész számot, és kiszámolja az összegüket.
    <details> <summary> A függvény fejléce </summary> 

   `int szamOsszeg(int a, int b, int c)`

   </details>
       <details><summary> Megoldás </summary> 

    ```cpp
    int szamOsszeg(int a, int b, int c) {
        return a + b + c;
    }
    ```
    ```cpp
    //main
    cout << "A " << x1 << ", " << y1 << ", " << z1 << " szamok osszege: " << szamOsszeg(x1, y1, z1) << endl;

    ```
    </details>
8. Készíts függvényt, ami kap 3 egész számot, és kiszámolja az átlagukat.
    <details> <summary> A függvény fejléce </summary> 

    `double szamAtlag(int a, int b, int c)`

    </details>
        <details><summary> Megoldás </summary> 

    ```cpp
    double szamAtlag(int a, int b, int c) {
        return szamOsszeg(a, b, c) / 3;
    }
    ```
    ```cpp
    //main
    cout << "A " << x1 << ", " << y1 << " es " << z1 << " szamok atlaga: " << szamAtlag(x1, y1, z1) << endl;

    ```
    </details>
9. Készíts függvényt, ami megkapja a háromszög két befogóját, és kiszámolja az átfogót.
    <details> <summary> A függvény fejléce </summary> 

    `double atfogo(int a, int b)`

    </details>
        <details><summary> Megoldás </summary> 

    ```cpp
    double atfogo (double a, double b) {
        return sqrt(a * a + b * b);
    }
    ```
    ```cpp
    //main
    cout << "A " << x2 << " es " << y2 << " szamok atfogoja: " << atfogo(x2, y2) << endl;
    cout << "A " << x2 << " es " << z2 << " szamok atfogoja: " << atfogo(x2, z2) << endl;
    cout << "A " << y2 << " es " << z2 << " szamok atfogoja: " << atfogo(y2, z2) << endl;

    ```
    </details>

10. Készíts függvényt, ami visszaad egy ehhez hasonló, igaz mondatot:
    > A tömb átlagoni aluli elemeiből 10 darab van, ezek: 3,1,6,2,5,4,1,0,6,-1

    <details> <summary> A függvény fejléce </summary> 

    `string tombMondat(int* a, int n)`

    </details>
        <details><summary> Megoldás </summary> 

    ```cpp
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
    ```
    ```cpp
    //main
    cout << tombMondat(a, indA) << endl;
    cout << tombMondat(b, indB) << endl;
    cout << tombMondat(c, indC) << endl;

    ```
    </details>

11. (**NEHÉZ**) Készítsd el a másik két módon is a tömböket. Írj függvényt, ami megkapja mindhárom tömböt, és visszaad egy negyediket, amiben minden elem az eredeti háromból az elemek összege. A főprogramban állapítsd meg, hogy mekkora az "értékes" része a tömbnek.
    > Pl.  
    eredmeny[0] = a[0] + b[0] + c[0]  
    eredmeny[1] = a[1] + b[1] + c[1]  
    ...  
    Ha elfogy valamelyik tömb (végjelbe ütközik), akkor abból tovább ne vegye az elemeket  
    *tipp: Ha még feltöltés előtt lenullázod a tömböket, akkor itt hiába fogynak el az elemek, mivel 0-kat bármikor hozzáadhatunk a még elemeket tartalmazó tömbökhöz.*
    <details> <summary> A függvény fejléce </summary> 

    `int* tombokOsszege(int* a, int indA, int* b, int indB, int* c, int indC)`

    </details>
    <details><summary> Megoldás </summary> 

    ```cpp
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
    ```
    ```cpp
    //main
    int* d = tombokOsszege(a, indA, b, indB, c, indC);
    int indD = max(max(indA, indB), indC);
    cout << "Az a, b es c tombok osszege: ";
    kiir(d, indD);

    ```
    </details>


<details> <summary> Teljes megoldás: </summary>

`keves.txt:`

```txt
14 -16 2 6 -18 4 15 1 -6 17 13
```
---
`teljes.txt:`
```txt
14 -16 2 6 -18 4 15 1 -6 17 13 10 -11 -15 2 -4 3 -15 9 -12 16 7 -8 2 16 1 8 -9 2 18 
```
---
`vegjel.txt:`
```txt
14 -16 2 6 -18 4 15 1 -6 17 13 0 -11 -15 2 -4 3 -15 9 -12 16 7 -8 2 16 1 8 -9 2 18 
```
---
`console:`
```txt
Kerem a szamokat, 0 vegjelig: 1 3 8 9 6 8 7 4 5 0
Az a tomb (cin): 1 3 8 9 6 8 7 4 5 0
A b tomb (file): 14 -16 2 6 -18 4 15 1 -6 17 13
A c tomb (rand): 12 -1 -17 -8 14 -10 -17 16 9 2 -13 -10 17 -2 -18 -2 12 10 1 20
A legkisebb elem az a tombben: 0
A legkisebb elem a b tombben: -18
A legkisebb elem a c tombben: -18
Az a tomb osszege: 51
A b tomb osszege: 32
A c tomb osszege: 15
Az a tomb atlaga: 5.1
A b tomb atlaga: 2.90909
A c tomb atlaga: 0.75
Az a tombnek 10 eleme van.
A b tombnek 11 eleme van.
A c tombnek 20 eleme van.
A 4, 7, 2 szamok osszege: 13
A 4, 7 es 2 szamok atlaga: 4
A 3.14 es 2.71 szamok atfogoja: 4.14773
A 3.14 es 1.41 szamok atfogoja: 3.44205
A 2.71 es 1.41 szamok atfogoja: 3.05486
A tomb atlagon aluli elemeibol 5 darab van, ezek: 1 3 4 5 0
A tomb atlagon aluli elemeibol 5 darab van, ezek: -16 2 -18 1 -6
A tomb atlagon aluli elemeibol 10 darab van, ezek: -1 -17 -8 -10 -17 -13 -10 -2 -18 -2
Az a, b es c tombok osszege: 27 -14 -7 7 2 2 5 21 8 19 0 -10 17 -2 -18 -2 12 10 1 20
```
---
`main.cpp:`

```cpp
#include <stdio.h>
#include <iostream>
#include <string>
#include <fstream>
#include <cmath>


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
    //ifstream f("vegjel.txt");
    // ifstream f("teljes.txt");
    ifstream f("keves.txt");

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

    int x1 = 4;
    int y1 = 7;
    int z1 = 2;

    double x2 = 3.14;  //pi
    double y2 = 2.71;  //euler
    double z2 = 1.41;  //gyok 2

    cout << "Az a tomb (cin): ";
    kiir(a, indA);

    cout << "A b tomb (file): ";
    kiir(b, indB);

    cout << "A c tomb (rand): ";
    kiir(c, indC);

    cout << "A legkisebb elem az a tombben: " << legkisebb(a, indA) << endl;
    cout << "A legkisebb elem a b tombben: " << legkisebb(b, indB) << endl;
    cout << "A legkisebb elem a c tombben: " << legkisebb(c, indC) << endl;

    cout << "Az a tomb osszege: " << tombOsszeg(a, indA) << endl;
    cout << "A b tomb osszege: " << tombOsszeg(b, indB) << endl;
    cout << "A c tomb osszege: " << tombOsszeg(c, indC) << endl;

    cout << "Az a tomb atlaga: " << tombAtlag(a, indA) << endl;
    cout << "A b tomb atlaga: " << tombAtlag(b, indB) << endl;
    cout << "A c tomb atlaga: " << tombAtlag(c, indC) << endl;

    cout << osszefuz("Az a tombnek ", indA, " eleme van.") << endl;
    cout << osszefuz("A b tombnek ", indB, " eleme van.") << endl;
    cout << osszefuz("A c tombnek ", indC, " eleme van.") << endl;

    cout << "A " << x1 << ", " << y1 << ", " << z1 << " szamok osszege: " << szamOsszeg(x1, y1, z1) << endl;
    cout << "A " << x1 << ", " << y1 << " es " << z1 << " szamok atlaga: " << szamAtlag(x1, y1, z1) << endl;

    cout << "A " << x2 << " es " << y2 << " szamok atfogoja: " << atfogo(x2, y2) << endl;
    cout << "A " << x2 << " es " << z2 << " szamok atfogoja: " << atfogo(x2, z2) << endl;
    cout << "A " << y2 << " es " << z2 << " szamok atfogoja: " << atfogo(y2, z2) << endl;

    cout << tombMondat(a, indA) << endl;
    cout << tombMondat(b, indB) << endl;
    cout << tombMondat(c, indC) << endl;

    int* d = tombokOsszege(a, indA, b, indB, c, indC);
    int indD = max(max(indA, indB), indC);
    cout << "Az a, b es c tombok osszege: ";
    kiir(d, indD);

}
```

</details>