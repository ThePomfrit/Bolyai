# Feladatsor

## A feladat

Hozz létre egy struktúra –típust:

```cpp
typedef struct {
    int ora;
    int perc;
} Idopont;
```

1. Deklarálj két Idopont típusú változót.
2. Az egyikbe egy véletlen időpont kerüljön 8:00 és 9:59 között!
3. A másikba a felhasználótól kérj egy időpontot!
4. Írasd ki mindkét időpontot oo:pp formátumban! Írhatsz erre függvényt is!
5. Állapítsd meg, hogy a véletlen időpont korábbi, későbbi, vagy egybeesik a felhasználó által bevitt időponttal! Számítsd ki az eltérést is, és írd ki üzenet formájában: “A felhasználó időpontja hh óra pp perccel korábbi/későbbi mint a véletlen időpont ”, vagy “A két időpont egybeesik”. 
6. Hozz létre egy `20` elemű `Idopont` típusú tömböt és töltsd fel 8:00 és 14:59 közötti időpontokkal.
7. Írasd ki a tömb elemeit egymás alá oo:pp formátumban
8. Válaszd ki a legkorábbi és a  legkésőbbi időpontot, és számítsd ki, hogy hány perc az eltérés közözttük, majd írd ki az eltérést oo:pp formátumban is.

## B feladat

Írj programot, ami síkbeli pontok tárolására létrehoz egy típust (struktúrát) és tartalmazza a következő függvényeket:
1. Pont beírása *(függvény bemenő paraméter nélkül, kijön belőle egy pont)*
2. Pont kiírása *(függvény-void)*
3. Megállapítani, hogy két pont vízszintes szakaszt alkot-e? A függvény kimenete legyen 1 ha vízszintes, és 0 ha nem. *(függvény)*
4. Kiszámítani a szakasz hosszát (ehhez is két pont kell) *(függvény)*
ha `A(x1,y1)` és `B(x2,y2)`, akkor $ |AB|=\sqrt{(x_2-x_1)^2+(y_2-y_1)^2} $
5. Megállapítani, hogy a pont melyik negyedhez tartozik *(függvény, 1, 2, 3 vagy 4 értéket adjon vissza)*
	**FŐPROGRAM**
6. A főprogramban kérj be `3` pontot (`m`, `n`, `p`) a felhasználótól amik egy háromszög csúcsai! *(ciklus, függvényhívás)*
7. Számítsd ki az oldalak hosszát (mn, np, mp)! *(ciklus, függvényhívás)*
8. Számítsd ki a háromszög kerületét, írd ki! 
9. Számítsd ki a területét is *(Heron képlettel)*
$ Ha a háromszög oldalainak hossza a, b és c-vel van jelölve, akkor
 T=\sqrt{s*(s-a)*(s-b)*(s-c)} , ahol s=\frac{a+b+c}{2} $
10. Állapítsd meg, hogy van-e a háromszögnek vízszintes oldala, és írj róla üzenetet! Használd a megírt függvényt!
11. Metszi-e a háromszöget az y tengely? Állapítsd meg, és írd ki a választ!
12.	És az x tengely? Állapítsd meg, és írd ki a választ!


## C feladat
Misi kedvenc „étele” a madártej. Kell hozzá 
* 0,8 liter tej
* 5 tojás
* 0,3 kg cukor 
* 2 csomag vaníliás puding

Ebből 2 adag lesz. 
A hozzávalók boltonként más-más áron kerülnek a polcra, ezért írjunk programot arra, hogy kiszámítsuk egy adag árát.

1. Hozz létre struktúrát:
    * bolt neve
    * tej ára (din/liter)
    * tojás ára (din/db)
    * cukor ára (din/kg)
    * vaníliás puding  (din/csomag)

    ```c++
    typedef struct {
        string nev;
        int tejAr;
        int tojasAr;
        int cukorAr;
        int pudingAr;
    }
    ```
    Az árak egész számok.

**2. Vigyük be** 3 boltból a termékek árait, tároljuk őket fileban!
pl. 

    ```txt
    bolt1 100 20 70	30
    bolt2 125 22 65 40
    bolt3 140 20 58 30
    bolt4 135 19 88 42
    ```

**3. Olvassuk vissza** a fileból az adatokat, listázzuk ki a képernyőre táblázatos formában. 
```c++
    while (!fI.eof()) {
        string line;
        getline(fI, line);
        bolt.nev = line.substr(0, line.find(" "));
        line = line.substr(line.find(" ") + 1);
        bolt.tejAr = stoi(line.substr(0, line.find(" ")));
        line = line.substr(line.find(" ") + 1);
        bolt.tojasAr = stoi(line.substr(0, line.find(" ")));
        line = line.substr(line.find(" ") + 1);
        bolt.cukorAr = stoi(line.substr(0, line.find(" ")));
        line = line.substr(line.find(" ") + 1);
        bolt.pudingAr = stoi(line.substr(0, line.find(" ")));
    }  
//Modositani arra, hogy ne csak egy boltot taroljunk, hanem egy tombben legyenek
//Max 3 bolt adatait olvassuk be
//Mindenhol boltok -> boltok[i]
//a vegere egy i++;
//elotte ne felejtsuk el letrehozni i-t es a tombot

    cout << "Nev\tTej\tTojas\tCukor\tPuding" << endl;
    cout << "----------------------------------------" << endl;
    for(int j = 0 ; j < i; j++) {
        cout << bolt[j].nev << "\t";
        cout << bolt[j].tejAr << "\t";
        cout << bolt[j].cukorAr << "\t";
        cout << bolt[j].pudingAr << "\n";
    }
```
**4. Számítsuk ki** mindegyik esetben, hogy mennyibe kerül egy adag madártej alapanyaga. 
```c++
int ar = 0;
for(int i = 0; i < 3; i++) {
    ar += bolt[i].tejAr * 0.8;
    ar += bolt[i].tojasAr * 5;
    ar += bolt[i].cukorAr * 0.3;
    ar += bolt[i].pudingAr * 2;
}
```

**5. A munkadíj** és egyéb költségek címén az eddig kiszámított összeg 70%-át számoljuk még el. 
Egy másik fileba írjuk ki: a bolt nevét és egy adag költségét anyagi és tobábbi költségekre bontva.
Pl. `bolt1	261 + 182.7 = 443.7`

```c++
    ofstream fO;
    fO.open("out.txt");
    
    for(int i = 0; i < 3; i++) {
        fO << bolt[i].nev << "\t" << ar[i] << " + " << ar[i] * 0.7 << " = " << ar[i] * 1.7 << endl;
    }
```

---
`in.txt:`
```txt
bolt1 100 20 70 30
bolt2 125 22 65 40
bolt3 140 20 58 30
bolt4 135 19 88 42
```
---
`out.txt:`
```txt
bolt1	261 + 182.7 = 443.7
bolt2	309 + 216.3 = 525.3
bolt3	289 + 202.3 = 491.3
```
---
`console:`
```txt
Nev     Tej     Tojas   Cukor   Puding
----------------------------------------
bolt1   100     20      70      30
bolt2   125     22      65      40
bolt3   140     20      58      30
```