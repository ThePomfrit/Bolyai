# Gyakorló feladatok egész féléves anyagból

## TÖMBÖK

### A feladat

1. Deklarálj egy 10 elemű tömböt, ami egész számokból áll
2. Töltsd fel véletlen számokkal az `[5,15]` intervallumból! </summary>
3. Állapítsd meg a tömb legnagyobb elemét, és írasd ki!</summary>
4. Állapítsd meg a legkisebb elemet, és írasd ki a számot és az indexét is!
5. Számold meg, hogy hány páros eleme van a tömbnek! Írasd ki!

<details> <summary> Teljes megoldás </summary>

```c++
#include <stdio.h>
#include <iostream>
#include <ctime>

using namespace std;

int main() {
    int a[10];
    
    srand(time(0));
    for (int i = 0; i < 10; i++) {
        a[i] = 5 + rand() % 11;
        cout << a[i] << " ";
    }
    cout << endl;

    int legnagyobb = a[0];
    int indnagy = 0;
    for (int i = 1; i < 10; i++) {
        if (a[i] > legnagyobb) {
            legnagyobb = a[i];
            indnagy = i;
        }
    }
    cout << "Legnagyobb elem: " << legnagyobb << " indexe: " << indnagy << endl;

    int legkisebb = a[0];
    int indkis = 0;
    for (int i = 1; i < 10; i++) {
        if (a[i] < legkisebb) {
            legkisebb = a[i];
            indkis = i;
        }
    }
    cout << "Legkisebb elem: " << legkisebb << " indexe: " << indkis << endl;

    int szamlalo = 0;
    for(int i = 0; i < 10; i++) {
        if (a[i] % 2 == 0) {
            szamlalo++;
        }
    }

    cout << "Paros elemek száma: " << szamlalo << endl;
    return 0;
}
```

</details>

### B feladat

1. Deklarálj egy 5 elemű tömböt, ami egész számokból áll
2. A felhasználó vigyen be bármilyen egész számokat! (5 db)
3. Számítsd ki a bevitt számok összegét, és írasd ki!
4. Számítsd ki a bevitt számok átlagát és írasd ki!
5. Írasd ki a tömbnek azokat az elemeit, amik nagyobbak az átlagnál!
6. Számold meg, hogy hány negatív szám van az elemek között, és írasd ki!

<details> <summary> Teljes megoldás </summary>

```c++
#include <stdio.h>
#include <iostream>

using namespace std;

int main() {
    int a[5];

    cout << "Kérek 5 számot: ";
    for (int i = 0; i < 5; i++) {
        cin >> a[i];
    }

    int osszeg = 0;
    for(int i = 0; i < 5; i++) {
        osszeg += a[i];
    }
    cout << "A tömb elemeinek összege: " << osszeg << endl;
        
    double atlag = (double)osszeg / 5;
    cout << "A tömb elemeinek átlaga: " << atlag << endl;

    cout << "A tömb elemei, amelyek nagyobbak az átlagnál: ";
    for(int i = 0; i < 5; i++) {
        if (a[i] > atlag) {
            cout << a[i] << " ";
        }
    }
    cout << endl;

    cout << "A tömb negatív elemei: ";
    for(int i = 0; i < 5; i++) {
        if (a[i] < 0) {
            cout << a[i] << " ";
        }
    }
    cout << endl;

}
```

</details>

### C feladat

1. Deklarálj egy 10 elemű tömböt, ami egész számokból áll
2. Generálj véletlen számokat `-5` és `10` között, és helyezd el őket a tömbben
3. Számítsd ki a tömb páros elemeinek összegét, és írasd ki!
4. Keresd meg a legnagyobb elemet, és a legkisebb elemet is! Írasd ki őket!
5. Számítsd ki a legkisebb és a legnagyobb elem átlagát!
6. Számold meg, hogy a tömbben hány elem kisebb ennél az átlagnál! Írasd ki az eredményt!

<details> <summary> Teljes megoldás: </summary>

```c++
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
```

</details>

### D feladat

Egy cipőboltban, ha valaki egyszerre legalább 4 pár lábbelit vásárol, akkor a legolcsóbbat 1 dináros áron számlázzák le neki. Írj programot, ami:

1. A felhasználótól bekéri a vásárolt cipők számát, majd létrehoz a számukra egy megfelelő méretű tömböt (a cipő ára tizedes szám is lehet).
2. Generálj árakat véletlenszám-generátor segítségével, és töltsd fel velük a tömböt! (az árak legyenek `500` dinár és `12000` dinár között).
3. Keresd ki az árak közül a legalacsonyabbat!
4. Számítsd ki, hogy mennyit kell fizetni a lábbelikért összesen!

<details> <summary> Teljes megoldás: </summary>

```c++
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
```

</details>

### E feladat

1. Deklarálj egy 15  elemű  tömböt, betűk (karakterek) tárolására.
2. Generálj nagybetűket, és helyezd el őket a tömbben!
3. Ha `C` betű vagy `R` betű generálódik, azt hagyd ki, ne kerüljön be a tömbbe!
4. Számold meg, hogy hány magánhangzó van a tömbben lévő betűk között!
5. Írasd ki a tömb elemeit külön sorokba úgy, hogy minden elem mellé kerüljön oda a kisbetűs párja.
6. Írasd ki a tömb elemeit úgy, hogy minden betű mellé kerüljön az angol ábécében őt megelőző, majd az őt követő karakter!

>Minta 5.-re:
>A a
>X x
>S s
>Minta 6.-ra:
>D C E
>B A C
>Q P R

<details> <summary> Teljes megoldás: </summary>

```c++
#include <stdio.h>
#include <iostream>

using namespace std;

int main() {
    char a[15];

    cout << endl;
    cout << "A tömb elemei: ";
    srand(time(0));
    // A ascii kodja 65
    // Z ascii kodja 90
    for(int i = 0; i < 15; i++) {
        a[i] = rand() % 26 + 65;

        // ha visszacsokkentjuk az indexet,
        // akkor az elozo helyre probal irni.
        // (viszont aztan a for novel egyet,
        // igy visszakerulunk ugyanoda, ahol most vagyunk)
        // mivel tudjuk, hogy a jelenlegi helyen olyan van,
        // amit nem fogadhatunk el,
        // ezert vissza kell csokkenteni,
        // hogy ugyanoda megegyszer probaljon irni.
        if(a[i] == 'C' || a[i] == 'R') {
            i--;
        }
        else {
            cout << a[i] << " ";
        }

    }
    cout << endl;

    int maganDB = 0;
    for(int i = 0; i < 15; i++) {
        if(a[i] == 'A' || a[i] == 'E' || a[i] == 'I' || a[i] == 'O' || a[i] == 'U') {
            maganDB++;
        }
    }
    cout << "Maganhangzok szama: " << maganDB << endl;

    for(int i = 0; i < 15; i++) {
        cout << a[i] << " ";
        // A ascii kodja 65, a ascii kodja 97, azaz 97-65 = 32
        // B ascii kodja 66, b ascii kodja 98, azaz 98-66 = 32
        // C ascii kodja 67, c ascii kodja 99, azaz 99-67 = 32
        // ...
        // tehat a kisbetu es nagybetu kozott 32 a kulonbseg
        cout << (char)(a[i] + 32) << endl;
    }

    cout << endl;

    for(int i = 0; i < 15; i++) {
        //ne felejtsunk el kiterni a szelsoseges esetekre (A, Z)
        //itt ketertelmu a feladat, ilyenkor megkerdezhetitek a tanarnot
        //vagy megcsinaljatok ahogy ti gondolatok

        //en ugy gondoltam, hogy ha A-t vagy Z-t talalunk, 
        //akkor ugy vesszuk, mintha az ABD folytonosan ismetlodne, 
        //tehat az A elott Z van, a Z utan pedig A

        //masik megoldas lenne, hogy ha ilyen szelsosegest talalunk, 
        //akkor kihagyjuk a szomszedos betut, es csak 2 betut irunk ki, 
        //tehat A B, vagy Y Z

        if(a[i] == 'A') {
            cout << "Z A B" << endl;
        } else if (a[i] == 'Z') {
            cout << "Y Z A" << endl;
        } else {
            cout << (char)(a[i] - 1) << " " << a[i] << " " << (char)(a[i] + 1) << endl;
        }
    }

}
```

</details>

### F feladat

1. Egy tizedes számokból álló tömb kezdőértéke legyen a következő: `{5.2, 3.4, 11, 21.3, 31.1, 0, 19.1, 10.3}`.
2. Írasd ki a tömb elemeit 2 tizedes pontossággal, egymás alá!
3. Készíts táblázatot! A fejlécében legyen:  `x x+3 x/4 1/x`
4. A fejlécet húzd alá!
5. A táblázatban jelenjen meg a tömb minden eleme, és oszlopokba rendezve a számítások eredményei.
6. Az `1/x` oszlopnál ügyelj a `0`-val végzett osztásra!
7. A táblázat utolsó sorát szintén húzd alá!
8. Minden oszlop alatt jelenjen meg a benne lévő számok összege, az alatta lévő sorban pedig az átlaguk!

<details> <summary> Teljes megoldás </summary>

```c++
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
    
    // Minden oszlop alatt jelenjen meg a benne lévő számok összege, az alatta lévő sorban pedig az átlaguk!
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

    double atlag = osszeg / 8;
    double plusz3Atlag = plusz3Osszeg / 8;
    double per4Atlag = per4Osszeg / 8;
    double egyPerAtlag = egyPerOsszeg / egyPerDB;

    cout << osszeg << "\t" << plusz3Osszeg << "\t" << per4Osszeg << "\t" << egyPerOsszeg << endl;
    cout << atlag << "\t" << plusz3Atlag << "\t" << per4Atlag << "\t" << egyPerAtlag << endl;
}
```

</details>

### G feladat

1. Deklarálj egy egész számokból álló, `40` elemű tömböt!
2. Generálj véletlen egész számokat a `[10,40]` intervallumból, és írd bele őket a tömbbe, amíg nem kerül sorra a `17`-es szám.
3. Amikor 17-es szám kerülne a tömbbe lépj ki a ciklusból! (nem biztos, hogy mind a 40 elem kap értéket!)
4. Írasd ki a tömbben lévő „hasznos” elemek számát!
5. Írasd ki a tömb elemeit 8 oszlopba! Figyeld a változást!
6. Cseréld fel a tömb `0`-ás és `10`-es indexű elemét!
7. Írasd ki a tömb elemeit 8 oszlopba! Figyeld a változást!
8. A tömb páros elemeit felezd el!
9. Írasd ki a tömb elemeit 8 oszlopba! Figyeld a változást!
10. A páratlan indexű elemekhez adj `10`-et!
11. Írasd ki a tömb elemeit 5 oszlopba! Figyeld a változást!
12. A `0`-ra végződő számokból vonj ki `7`-et!
13. Írasd ki a tömb elemeit 4 oszlopba! Figyeld a változást!
14. Számítsd ki a páratlan elemek összegét és átlagát, majd írasd ki az eredményt!
15. Keresd meg a tömb legkisebb és legnagyobb elemét, és írasd ki őket!

<details> <summary> Teljes megoldás </summary>

```c++
#include <stdio.h>
#include <iostream>

using namespace std;

int main() {
    int a[40];

    int ind = 0;
    srand(time(0));
    do {
        a[ind] = rand() % 31 + 10;
        ind++;
    } while (a[ind - 1] != 17 && ind < 40);

    // A feladatbol ugy ertem, hogy a 17 mar ne szamitson "hasznosnak".
    // Igy a 17 valojaban benne van a tombben, de nem szamit a hasznosok hoze.
    if(a[ind - 1] == 17) {
        ind--;
    }
    cout << "A tombben " << ind << " hasznos elem van." << endl;

    cout << endl;
    for(int i = 0; i < ind; i++) {
        cout << a[i] << " ";
        if(i % 8 == 7) {
            cout << endl;
        }
    }
    cout << endl;

    //a 10es indexu mar a 11. elem
    if(ind >= 11) {
        int csere = a[10];
        a[10] = a[0];
        a[0] = csere;
    }

    cout << endl;
    for(int i = 0; i < ind; i++) {
        cout << a[i] << " ";
        if(i % 8 == 7) {
            cout << endl;
        }
    }
    cout << endl;

    for(int i = 0; i < ind; i++) {
        if(a[i] % 2 == 0) {
            a[i] /= 2;
        }
    }

    cout << endl;
    for(int i = 0; i < ind; i++) {
        cout << a[i] << " ";
        if(i % 8 == 7) {
            cout << endl;
        }
    }
    cout << endl;

    for(int i = 0; i < ind; i++) {
        if(i % 2 == 1) {
            a[i] += 10;
        }
    }

    cout << endl;
    for(int i = 0; i < ind; i++) {
        cout << a[i] << " ";
        if(i % 5 == 4) {
            cout << endl;
        }
    }
    cout << endl;

    for (int i = 0; i < ind; i++) {
        if(a[i] % 10 == 0) {
            a[i] -= 7;
        }
    }

    cout << endl;
    for(int i = 0; i < ind; i++) {
        cout << a[i] << " ";
        if(i % 4 == 3) {
            cout << endl;
        }
    }
    cout << endl;

    int paratlanOsszeg = 0;
    int paratlanDB = 0;
    for(int i = 0; i < ind; i++) {
        if(a[i] % 2 == 1) {
            paratlanOsszeg += a[i];
            paratlanDB++;
        }
    }
    double paratlanAtlag = paratlanOsszeg * 1.00 / paratlanDB;
    cout << "A paratlan szamok atlaga: " << paratlanAtlag << endl;

    int legkisebb = a[0];
    int legnagyobb = a[0];
    for(int i = 1; i < ind; i++) {
        if(a[i] < legkisebb) {
            legkisebb = a[i];
        }
        if(a[i] > legnagyobb) {
            legnagyobb = a[i];
        }
    }
    cout << "A legkisebb elem: " << legkisebb << endl;
    cout << "A legnagyobb elem: " << legnagyobb << endl;

}
```

</details>

---

## FÜGGVÉNYEK

1. Hozz létre egy `40` elemű tömböt és töltsd fel véletlen egész számokkal a `[0,100]` intervallumból, `0` végjelig!  Jegyezd meg egy változóban az elemek számát!
2. Hozz létre egy `25` elemű tömböt és töltsd fel véletlen egész számokkal a `[10,40]` intervallumból, `30` végjelig! Jegyezd meg egy változóban az elemek számát!  
3. Írj függvényt, ami a tömb elemeit kiírja egymás alá!
`void kiir1(int *a, int n)`
4. Írasd ki mindkét tömböt az új függvénnyel!
5. Írj függvényt, ami az elemeket egymás mellé írja ki, szóközzel elválasztva!
`void kiir2(int *a, int n)`
6. Írasd ki mindkét tömböt ezzel a függvénnyel is!
7. Írj függvényt, ami 5 oszlopba írja ki egy tömb elemeit!
`void kiir3(int *a, int n)`
8. Írasd ki mindkét tömböt ezzel a függvénnyel is!
9. Állapítsd meg, hogy melyik tömbben van kevesebb elem, és írasd ki, hogy mennyi!
10. Hozz létre egy új, `40` elemű tömböt!
11. Ebbe az új tömbbe helyezd el a számok összegét a két eredeti tömbből! Ha az egyik tömbből kifogytak az elemek, akkor már csak másold át az elemeket!
12. Írasd ki az új tömb elemeit függvénnyel 5 oszlopba!
13. Írj függvényt, ami kiválasztja a tömb legkisebb elemét!
`int kis(int *a, int n)`
14. A főprogramból hívd meg ezt a függvényt, és írasd ki a legkisebb elem értékét, mindhárom tömbből! A függvényhívások eredményét helyezd változóba!
15. Írj függvényt, ami kiszámítja a tömbben lévő számok összegét!
`int osszeg (int *a, int n)`
16. A főprogramból hívd meg a függvényt és írasd ki mindhárom tömb alapján az elemek összegét! A függvényhívások eredményét helyezd változóba!

<details> <summary> Teljes megoldás </summary>

```c++
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

    return 0;
}
```

</details>

---

## SZTRING, STRUKTÚRA, FILE

### A feladat

1. Hozz létre struktúrát időpont tárolására (`ora` `perc`)!
2. Írj függvényt az időpont bekérésére!
3. Kérj be a felhasználótól 2 időpontot, tárold őket külön-külön változókban!
4. Számítsd ki a két időpont között eltelt időt, percekben!
5. A `valasz.txt` fileba írd ki az eredményt!
6. A file második sorába írd a következő üznetek egyikét: „az első időpont a korábbi” vagy „a második időpont a korábbi”.
7. Zárd be a filet!

### B feladat

1. Az `idopontok.txt` file minden sora időpontokat tartalmaz. Minden sorban 2 szám van: az első az órát a második a percet jelenti. A számokat szóköz választja el egymástól. Nyisd meg olvasásra a filet!
2. Készíts elő írásra egy `uj.txt` filet.
3. Hozz létre struktúra típust időpontok tárolására! A típus neve legyen `OraPerc`.
4. A fileból olvasd be soronként az időpontokat, amíg a file végére nem érsz:
• használd  a `getline` függvényt!
• a beolvasott időpontot helyezd el `OraPerc` típusú változóban!
• írd ki az időpontot a képernyőre `oo : pp` formában!
• Számítsd ki, hogy hány óra lesz beolvasott időponttól számított `111` perc múlva!
• Az eredményt írd ki a képernyőre!
• Az eredményt írd az `uj.txt` fileba is!
5. Zárd be a fileokat!

### C feladat

1. Az `aruk.txt` fileben árucikkek és az áraik szerepelnek. Nyisd meg a filet olvasásra!
2. Hozz létre struktúra típust, ami megfelel a fileban szereplő adatok tárolására! Az új típus neve legyen `Aru`.
3. Olvasd be a file tartalmát soronként (`getline`)
4. A beolvasott sor tartalmát bontsd elemeire, és helyezd el egy `Aru` típusú változóban!
5. Hozz létre két új filet: `olcsok.txt` és `dragak.txt`.
6. Mindegyik árucikkről állapítsd meg, hogy olcsó (kevesebb mint 100 az ára) vagy drága (legalább 100 az ára). Az olcsó árucikkek nevét írd az `olcsok.txt`-be, szóközzel elválasztva, a drágák neveit a `dragak.txt`-be írd.
