# C feladat
Misi kedvenc „étele” a madártej. Kell hozzá 
* 0,8 liter tej
* 5 tojás
* 0,3 kg cukor 
* 2 csomag vaníliás puding

Ebből 2 adag lesz. 
A hozzávalók boltonként más-más áron kerülnek a polcra, ezért írjunk programot arra, hogy kiszámítsuk egy adag árát.

**1. Hozz létre** struktúrát:
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
Az árak egész számok. <br>
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
`console output:`
```txt
Nev     Tej     Tojas   Cukor   Puding
----------------------------------------
bolt1   100     20      70      30
bolt2   125     22      65      40
bolt3   140     20      58      30
```