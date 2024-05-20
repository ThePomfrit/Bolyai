# Gyakorló feladatok egész féléves anyagból

## TÖMBÖK

### A feladat

<details> <summary>1. Deklarálj egy 10 elemű tömböt, ami egész számokból áll </summary>

```c++
    int a[10];
``` 
</details>

<details> <summary>2. Töltsd fel véletlen számokkal az `[5,15]` intervallumból! </summary>

```c++
    srand(time(0));
    for (int i = 0; i < 10; i++) {
        a[i] = 5 + rand() % 11;
        cout << a[i] << " ";
    }
    cout << endl;

```
</details>

<details> <summary>3. Állapítsd meg a tömb legnagyobb elemét, és írasd ki!</summary>

```c++
    int legnagyobb = a[0];
    for (int i = 1; i < 10; i++) {
        if (a[i] > legnagyobb) {
            legnagyobb = a[i];
        }
    }
    cout << "Legnagyobb elem: " << legnagyobb << endl;
```
</details>

<details> <summary>4. Állapítsd meg a legkisebb elemet, és írasd ki a számot és az indexét is! </summary>

```c++
    int legkisebb = a[0];
    int indkis = 0;
    for (int i = 1; i < 10; i++) {
        if (a[i] < legkisebb) {
            legkisebb = a[i];
            indkis = i;
        }
    }
    cout << "Legkisebb elem: " << legkisebb << " indexe: " << indkis << endl;
```
</details>

<details> <summary> 5. Számold meg, hogy hány páros eleme van a tömbnek! Írasd ki!
</summary>

```c++
int szamlalo = 0;
    for(int i = 0; i < 10; i++) {
        if (a[i] % 2 == 0) {
            szamlalo++;
        }
    }

    cout << "Paros elemek száma: " << szamlalo << endl;
```
</details>

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

<details> <summary> 1. Deklarálj egy 5 elemű tömböt, ami egész számokból áll
 </summary>

```c++
    int a[5];
```

</details>

<details> <summary> 2. A felhasználó vigyen be bármilyen egész számokat! (5 db) 
 </summary>

```c++
    cout << "Kérek 5 számot: ";
    for (int i = 0; i < 5; i++) {
        cin >> a[i];
    }
```

</details>

<details> <summary> 3. Számítsd ki a bevitt számok összegét, és írasd ki!
 </summary>

```c++
int osszeg = 0;
    for(int i = 0; i < 5; i++) {
        osszeg += a[i];
    }
    cout << "A tömb elemeinek összege: " << osszeg << endl;
```

</details>

<details> <summary> 4. Számítsd ki a bevitt számok átlagát és írasd ki!
 </summary>

```c++
    double atlag = (double)osszeg / 5;
    cout << "A tömb elemeinek átlaga: " << atlag << endl;
```

</details>

<details> <summary> 5. Írasd ki a tömbnek azokat az elemeit, amik nagyobbak az átlagnál!
 </summary>

```c++
    cout << "A tömb elemei, amelyek nagyobbak az átlagnál: ";
    for(int i = 0; i < 5; i++) {
        if (a[i] > atlag) {
            cout << a[i] << " ";
        }
    }
    cout << endl;
```

</details>

<details> <summary> 6.	Számold meg, hogy hány negatív szám van az elemek között, és írasd ki!
 </summary>

```c++
    cout << "A tömb negatív elemei: ";
    for(int i = 0; i < 5; i++) {
        if (a[i] < 0) {
            cout << a[i] << " ";
        }
    }
    cout << endl;
```

</details>

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

<details> <summary> 1. Deklarálj egy 10 elemű tömböt, ami egész számokból áll
 </summary>

```c++

```

</details>


<details> <summary> 2. Generálj véletlen számokat `-5` és `10` között, és helyezd el őket a tömbben
 </summary>

```c++

```

</details>


<details> <summary> 3. Számítsd ki a tömb páros elemeinek összegét, és írasd ki!
 </summary>

```c++

```

</details>


<details> <summary> 4. Keresd meg a legnagyobb elemet, és a legkisebb elemet is! Írasd ki őket!
 </summary>

```c++

```

</details>

<details> <summary> 5. Számítsd ki a legkisebb és a legnagyobb elem átlagát!
 </summary>

```c++

```

</details>

<details> <summary> 6. Számold meg, hogy a tömbben hány elem kisebb ennél az átlagnál! Írasd ki az eredményt!
 </summary>

```c++

```

</details>


### D feladat

Egy cipőboltban, ha valaki egyszerre legalább 4 pár lábbelit vásárol, akkor a legolcsóbbat 1 dináros áron számlázzák le neki. Írj programot, ami:

1. A felhasználótól bekéri a vásárolt cipők számát, majd létrehoz a számukra egy megfelelő méretű tömböt (a cipő ára tizedes szám is lehet).
2. Generálj árakat véletlenszám-generátor segítségével, és töltsd fel velük a tömböt! (az árak legyenek `500` dinár és `12000` dinár között).
3. Keresd ki az árak közül a legalacsonyabbat!
4. Számítsd ki, hogy mennyit kell fizetni a lábbelikért összesen!

### E feladat

1. Deklarálj egy 15  elemű  tömböt, betűk (karakterek) tárolására.
2. Generálj nagybetűket, és helyezd el őket a tömbben!
3. Ha `C` betű vagy `R` betű generálódik, azt hagyd ki, ne kerüljön be a tömbbe!
4. Számold meg, hogy hány magánhangzó van a tömbben lévő betűk között!
5. Írasd ki a tömb elemeit külön sorokba úgy, hogy minden elem mellé kerüljön oda a kisbetűs párja.
6. Írasd ki a tömb elemeit úgy, hogy minden betű mellé kerüljön az angol ábécében őt megelőző, majd az őt követő karakter!

>Minta 5.-re:
A a
X x
S s
Minta 6.-ra:
D C E
B A C
Q P R

<details> 

### F feladat

Egy tizedes számokból álló tömb kezdőértéke legyen a következő: `{5.2, 3.4, 11, 21.3, 31.1, 0, 19.1, 10.3}`.

1. Írasd ki a tömb elemeit 2 tizedes pontossággal, egymás alá!
2. Készíts táblázatot! A fejlécében legyen:  `x x+3 x/4 1/x`
3. A fejlécet húzd alá!
4. A táblázatban jelenjen meg a tömb minden eleme, és oszlopokba rendezve a számítások eredményei.
5. Az `1/x` oszlopnál ügyelj a `0`-val végzett osztásra!
6. A táblázat utolsó sorát szintén húzd alá!
7. Minden oszlop alatt jelenjen meg a benne lévő számok összege, az alatta lévő sorban pedig az átlaguk!

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
