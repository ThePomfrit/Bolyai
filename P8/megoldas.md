# Gyakorló feladatok egész féléves anyagból

## TÖMBÖK

### A feladat

<details> <summary>1. Deklarálj egy 10 elemű tömböt, ami egész számokból áll </summary>

```c++
int a[10];
```

</details>

<details> <summary>2. Töltsd fel véletlen számokkal az [5,15] intervallumból! </summary>

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
cout << "Legkisebb elem: " << legkisebb << " indexe: " << indkis <<endl;
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









### C feladat

<details> <summary> 1. Deklarálj egy 10 elemű tömböt, ami egész számokból áll
 </summary>

```c++
int a[10];
```

</details>


<details> <summary> 2. Generálj véletlen számokat -5 és 10 között, és helyezd el őket a tömbben
 </summary>

```c++
cout << "A tömb elemei: ";
srand(time(0));
for (int i = 0; i < 10; i++) {
    a[i] = rand() % 16 - 5;
    cout << a[i] << " ";
}
cout << endl;
```

</details>


<details> <summary> 3. Számítsd ki a tömb páros elemeinek összegét, és írasd ki!
 </summary>

```c++
int osszeg = 0;
for(int i = 0; i < 10; i++) {
    if(a[i] % 2 == 0){
        osszeg += a[i];
    }
}
cout << "A páros elemek összege: " << osszeg <<endl;
```

</details>


<details> <summary> 4. Keresd meg a legnagyobb elemet, és a legkisebb elemet is! Írasd ki őket!
 </summary>

```c++
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
```

</details>

<details> <summary> 5. Számítsd ki a legkisebb és a legnagyobb elem átlagát!
 </summary>

```c++
double atlag = (legnagyobb + legkisebb) / 2.0;
cout << "A legnagyobb és legkisebb elem átlaga: " << atlag << endl;
```

</details>

<details> <summary> 6. Számold meg, hogy a tömbben hány elem kisebb ennél az átlagnál! Írasd ki az eredményt!
 </summary>

```c++
cout << "A tömb elemei, amelyek kisebbek az átlagnál: ";
for(int i = 0; i < 10; i++) {
    if (a[i] < atlag) {
        cout << a[i] << " ";
    }
}
```

</details>









### D feladat

Egy cipőboltban, ha valaki egyszerre legalább 4 pár lábbelit vásárol, akkor a legolcsóbbat 1 dináros áron számlázzák le neki. Írj programot, ami:

<details> <summary> 1. A felhasználótól bekéri a vásárolt cipők számát, majd létrehoz a számukra egy megfelelő méretű tömböt (a cipő ára tizedes szám is lehet).
 </summary>

```c++
int cipokSzama;
cout << "Add meg a vásárolt cipők számát: ";
cin >> cipokSzama;
double cipok[cipokSzama];
```

</details>

<details> <summary> 2. Generálj árakat véletlenszám-generátor segítségével, és töltsd fel velük a tömböt! (az árak legyenek 500 dinár és 12000 dinár között).
 </summary>

```c++
cout << "A cipők árai: ";
srand(time(0));
for(int i = 0; i < cipokSzama; i++) {
    cipok[i] = rand() % 11501 + 500;
    cout << cipok[i] << " ";
}
cout << endl;
```

</details>

<details> <summary> 3. Keresd ki az árak közül a legalacsonyabbat!
 </summary>

```c++
double legkisebb = cipok[0];
int kisInd = 0;
for(int i = 1; i < cipokSzama; i++) {
    if(cipok[i] < legkisebb){
        legkisebb = cipok[i];
        kisInd = i;
    }
}
cout << "A legolcsóbb cipő ára: " << legkisebb << endl;

```

</details>

<details> <summary> 4. Számítsd ki, hogy mennyit kell fizetni a lábbelikért összesen!
 </summary>

```c++
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
```

</details>

### E feladat

<details> <summary> 1. Deklarálj egy 15  elemű  tömböt, betűk (karakterek) tárolására.
 </summary>

```c++
char a[15];
```

</details>

<details> <summary> 2. Generálj nagybetűket, és helyezd el őket a tömbben!
 </summary>

```c++
cout << "A tömb elemei: ";
srand(time(0));
// A ascii kodja 65
// Z ascii kodja 90
for(int i = 0; i < 15; i++) {
    a[i] = rand() % 26 + 65;
    //itt a feladat nem keri
    //hogy kiirjunk, hanem majd az 5. alfeladatban
    //ezert itt csak onellenorzesre iratok ki
    cout << a[i] << " ";
}
cout << endl;
```

</details>


<details> <summary> 3. Ha C betű vagy R betű generálódik, azt hagyd ki, ne kerüljön be a tömbbe!
 </summary>
Az előző alpont megoldását bővítve:

```c++
cout << "A tömb elemei: ";
srand(time(0));
// A ascii kodja 65
// Z ascii kodja 90
for(int i = 0; i < 15; i++) {
    a[i] = rand() % 26 + 65;
//uj resz: ----------v------------
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
//uj resz: ----------^------------
    else {
        cout << a[i] << " ";
    }
}
cout << endl;
```

</details>

<details> <summary> 4. Számold meg, hogy hány magánhangzó van a tömbben lévő betűk között!
 </summary>

```c++
int maganDB = 0;
for(int i = 0; i < 15; i++) {
    if(a[i] == 'A' || a[i] == 'E' || a[i] == 'I' || a[i] == 'O' || a[i] == 'U') {
        maganDB++;
    }
}
cout << "Maganhangzok szama: " << maganDB << endl;
```

</details>

<details> <summary> 5. Írasd ki a tömb elemeit külön sorokba úgy, hogy minden elem mellé kerüljön oda a kisbetűs párja.
 </summary>

```c++
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
```

</details>

<details> <summary> 6. Írasd ki a tömb elemeit úgy, hogy minden betű mellé kerüljön az angol ábécében őt megelőző, majd az őt követő karakter!
 </summary>

```c++
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
```

</details>


>Minta 5.-re:  
A a  
X x  
S s  
Minta 6.-ra:  
D C E  
B A C  
Q P R  

### F feladat

<details> <summary> 1. Egy tizedes számokból álló tömb kezdőértéke legyen a következő: `{5.2, 3.4, 11, 21.3, 31.1, 0, 19.1, 10.3}`.
 </summary>

```c++
double a[8] = {5.2, 3.4, 11, 21.3, 31.1, 0, 19.1, 10.3};

```

</details>

<details> <summary> 2. Írasd ki a tömb elemeit 2 tizedes pontossággal, egymás alá!
 </summary>

```c++
cout << fixed << showpoint;
cout.precision(2);
for(int i = 0; i < 8; i++) {
    cout << a[i] << endl;
}
```

</details>

<details> <summary> 3. Készíts táblázatot! A fejlécében legyen:  x x+3 x/4 1/x
 </summary>

```c++
cout << "x\tx+3\tx/4\t1/x" << endl;
```

</details>

<details> <summary> 4. A fejlécet húzd alá!
 </summary>

```c++
cout << "-----------------------------" << endl;
```

</details>

<details> <summary> 5. A táblázatban jelenjen meg a tömb minden eleme, és oszlopokba rendezve a számítások eredményei.
 </summary>

```c++
for(int i = 0; i < 8; i++) {
    cout << a[i] << "\t" << a[i] + 3 << "\t" << a[i] / 4 << "\t" << 1 / a[i] << endl;
}
```

</details>

<details> <summary> 6. Az `1/x` oszlopnál ügyelj a `0`-val végzett osztásra!
 </summary>
Ami eddig a for-ban volt, most if-be is kerül, és szétágazunk: if-else. Az else ágban van az új rész.

```c++
for(int i = 0; i < 8; i++) {
    if(a[i] != 0) {
        cout << a[i] << "\t" << a[i] + 3 << "\t" << a[i] / 4 << "\t" << 1 / a[i] << endl;
    }
    else {
        cout << a[i] << "\t" << a[i] + 3 << "\t" << a[i] / 4 << "\t" << "Hiba!" << endl;
    }
}
```

</details>

<details> <summary> 7. A táblázat utolsó sorát szintén húzd alá!
 </summary>

```c++
cout << "-----------------------------" << endl;
```

</details>

<details> <summary> 8. Minden oszlop alatt jelenjen meg a benne lévő számok összege, az alatta lévő sorban pedig az átlaguk!
 </summary>

```c++
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

cout << osszeg << "\t" << plusz3Osszeg << "\t" << per4Osszeg << "\t" << egyPerOsszeg << endl;

double atlag = osszeg / 8;
double plusz3Atlag = plusz3Osszeg / 8;
double per4Atlag = per4Osszeg / 8;
double egyPerAtlag = egyPerOsszeg / egyPerDB;

cout << atlag << "\t" << plusz3Atlag << "\t" << per4Atlag << "\t" << egyPerAtlag << endl;

```

</details>

### G feladat

<details> <summary> 1. Deklarálj egy egész számokból álló, 40 elemű tömböt!
 </summary>

```c++

```

</details>

<details> <summary> 2. Generálj véletlen egész számokat a [10,40] intervallumból, és írd bele őket a tömbbe, amíg nem kerül sorra a 17-es szám.
 </summary>

```c++

```

</details>

<details> <summary> 3. Amikor 17-es szám kerülne a tömbbe lépj ki a ciklusból! (nem biztos, hogy mind a 40 elem kap értéket!)
 </summary>

```c++

```

</details>

<details> <summary> 4. Írasd ki a tömbben lévő „hasznos” elemek számát!
 </summary>

```c++

```

</details>

<details> <summary> 5. Írasd ki a tömb elemeit 8 oszlopba! Figyeld a változást!
 </summary>

```c++

```

</details>

<details> <summary> 6. Cseréld fel a tömb `0`-ás és `10`-es indexű elemét!
 </summary>

```c++

```

</details>

<details> <summary> 7. Írasd ki a tömb elemeit 8 oszlopba! Figyeld a változást!
 </summary>

```c++

```

</details>

<details> <summary> 8. A tömb páros elemeit felezd el!
 </summary>

```c++

```

</details>

<details> <summary> 9. Írasd ki a tömb elemeit 8 oszlopba! Figyeld a változást!
 </summary>

```c++

```

</details>

<details> <summary> 10. A páratlan indexű elemekhez adj `10`-et!
 </summary>

```c++

```

</details>

<details> <summary> 11. Írasd ki a tömb elemeit 5 oszlopba! Figyeld a változást!
 </summary>

```c++

```

</details>

<details> <summary> 12. A `0`-ra végződő számokból vonj ki `7`-et!
 </summary>

```c++

```

</details>

<details> <summary> 13. Írasd ki a tömb elemeit 4 oszlopba! Figyeld a változást!
 </summary>

```c++

```

</details>

<details> <summary> 14. Számítsd ki a páratlan elemek összegét és átlagát, majd írasd ki az eredményt!
 </summary>

```c++

```

</details>

<details> <summary> 15. Keresd meg a tömb legkisebb és legnagyobb elemét, és írasd ki őket!
 </summary>

```c++

```

</details>


---

## FÜGGVÉNYEK

<details> <summary> 1. Hozz létre egy 40 elemű tömböt és töltsd fel véletlen egész számokkal a [0,100] intervallumból, 0 végjelig!  Jegyezd meg egy változóban az elemek számát!
 </summary>

```c++

```

</details>

<details> <summary> 2. Hozz létre egy 25 elemű tömböt és töltsd fel véletlen egész számokkal a [10,40] intervallumból, 30 végjelig! Jegyezd meg egy változóban az elemek számát!  
 </summary>

```c++

```

</details>

<details> <summary> 3. Írj függvényt, ami a tömb elemeit kiírja egymás alá!

 </summary>
 

```c++

```

</details>

<details> <summary> 4. Írasd ki mindkét tömböt az új függvénnyel!
 </summary>

```c++

```

</details>

<details> <summary> 5. Írj függvényt, ami az elemeket egymás mellé írja ki, szóközzel elválasztva!
 </summary>

```c++

```

</details>

<details> <summary> 6. Írasd ki mindkét tömböt ezzel a függvénnyel is!
 </summary>

```c++

```

</details>

<details> <summary> 7. Írj függvényt, ami 5 oszlopba írja ki egy tömb elemeit!
 </summary>

```c++

```

</details>

<details> <summary> 8. Írasd ki mindkét tömböt ezzel a függvénnyel is!
 </summary>

```c++

```

</details>

<details> <summary> 9. Állapítsd meg, hogy melyik tömbben van kevesebb elem, és írasd ki, hogy mennyi!
 </summary>

```c++

```

</details>

<details> <summary> 10. Hozz létre egy új, 40 elemű tömböt!
 </summary>

```c++

```

</details>

<details> <summary> 11. Ebbe az új tömbbe helyezd el a számok összegét a két eredeti tömbből! Ha az egyik tömbből kifogytak az elemek, akkor már csak másold át az elemeket!
 </summary>

```c++

```

</details>

<details> <summary> 12. Írasd ki az új tömb elemeit függvénnyel 5 oszlopba!
 </summary>

```c++

```

</details>

<details> <summary> 13. Írj függvényt, ami kiválasztja a tömb legkisebb elemét!
 </summary>

```c++

```

</details>

<details> <summary> 14. A főprogramból hívd meg ezt a függvényt, és írasd ki a legkisebb elem értékét, mindhárom tömbből! A függvényhívások eredményét helyezd változóba!
 </summary>

```c++

```

</details>

<details> <summary> 15. Írj függvényt, ami kiszámítja a tömbben lévő számok összegét!
 </summary>

```c++

```

</details>

<details> <summary> 16. A főprogramból hívd meg a függvényt és írasd ki mindhárom tömb alapján az elemek összegét! A függvényhívások eredményét helyezd változóba!
 </summary>

```c++

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
