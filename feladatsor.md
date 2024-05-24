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
Ezen kívül hozz létre egész szám tárolására `a`, `b` és `c` változókat, és tizedes szám tárolására `x`, `y` és `z` változókat. Mindnek adj változatos kezdőértékeket.

    **a.** Ha cin-t választod, akkor próbáld ki, hogy mi történik, ha a 0-t adsz neki (tényleg leáll-e), ha pedig beírod mind a 20 számot, akkor ezután leáll-e. Így tudod ellenőrizni, hogy jól működik az adatbeviteled. Ne felejts el negatív számokat is adni!

    **b.** Ha file-ból olvasol, olvashatsz `<<` vagy `getline` segítségével is. Három file-t hozz létre: `vegjel.txt`, `teljes.txt` és `keves.txt`. Az első kettőben legyen `30` darab szám (köztük negatívak is), de az elsőben valahol szerepeljen a `0`, a másodikban ne. A harmadikban kevesebb, mint `20` elem legyen, de `0` ne. Így le tudod ellenőrizni, hogy jól írtad e meg a ciklusfeltételed:
    * Ha végjelbe ütközik, akkor nem olvas tovább.
    * Ha eléri a `20` elemet, akkor nem olvas tovább.
    * Ha vége a file-nak, akkor nem próbál tovább olvasni

    **c.** Ha random szeretnéd feltölteni, akkor a `[-20,20]` intervallumból töltsd fel számokkal. Addig futtasd újra a programod, amíg egyszer generál `0`-t egy futásban (így meglátod, hogy végjelnek megáll-e), és egyszer **nem** generál `0`-t egy másik futásban (így meglátod, hogy ha a tömb végére ér, leáll-e)

2. Írj egy függvényt, ami kiírja a tömb elemeit üreshelyekkel (space, " ") elválasztva, a legvégén egy új sorral.
    <details> <summary> A függvény fejléce </summary> 
    
    `void kiir(int* a, int n)`

    </details>
3. Készíts függvényt, ami kikeresi a tömb legkisebb elemét.
    <details> <summary> A függvény fejléce </summary> 

    `void legkisebb(int* a, int n)`

    </details>
4. Készíts függvényt, amely kiszámolja a tömb elemeinek összegét.
    <details> <summary> A függvény fejléce </summary> 

    `int tombOsszeg(int* a, int n)`

    </details>
5. Készíts függvényt, ami kiszámolja a tömb elemeinek átlagát.
    <details> <summary> A függvény fejléce </summary>

    `double tombAtlag(int* a, int n)`

    </details>
6. Készíts függvényt, ami két string és egy számból csinál string-et, a következő módon:
    > A tömbnek 30 eleme van.

    Itt az első string `A tömbnek `, a szám `30`, a második string ` eleme van.`

    <details> <summary> A függvény fejléce </summary> 

    `string osszefuz(string kezd, int szam, string veg)`
7. Készíts függvényt, ami kap 3 (nem egész) számot, és kiszámolja az átlagukat.
    <details> <summary> A függvény fejléce </summary> 

    `double szamAtlag(double a, double b, double c)`

    </details>
8. Készíts függvényt, ami megkapja a háromszög két befogóját, és kiszámolja az átfogót.
    <details> <summary> A függvény fejléce </summary> 

    `double atfogo(int a, int b)`

    </details>

9. Készíts függvényt, ami visszaad egy ehez hasonló, igaz mondatot:
    > A tömb átlagoni aluli elemeiből 10 darab van, ezek: 3,1,6,2,5,4,1,0,6,-1

    <details> <summary> A függvény fejléce </summary> 

    `string tombMondat(int* a, int n)`

    </details>

10. (**NEHÉZ**) Készítsd el a másik két módon is a tömböket. Írj függvényt, ami megkapja mindhárom tömböt, és visszaad egy negyediket, amiben minden elem az eredeti háromból az elemek összege. A főprogramban állapítsd meg, hogy mekkora az "értékes" része a tömbnek.
    > Pl.  
    eredmeny[0] = a[0] + b[0] + c[0]  
    eredmeny[1] = a[1] + b[1] + c[1]  
    ...  
    Ha elfogy valamelyik tömb (végjelbe ütközik), akkor abból tovább ne vegye az elemeket  
    *tipp: Ha még feltöltés előtt lenullázod a tömböket, akkor itt hiába fogynak el az elemek, mivel 0-kat bármikor hozzáadhatunk a még elemeket tartalmazó tömbökhöz.*
    <details> <summary> A függvény fejléce </summary> 

    `int* tombokOsszege(int* a, int n, int* b, int m, int* c, int k)`

    </details>

