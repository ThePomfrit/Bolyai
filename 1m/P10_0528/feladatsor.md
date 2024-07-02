# Felkészülés a dolgozatra

## A feladat
A `vizsgak.txt` file matek és magyar tesztek pontszámait tartalmazza a következő formában: `tanulo neve szóköz matekpont szóköz magyarpont újsor`
Minden tanuló több tesztpárt is kitölthetett. 
1. Hozz létre struktúrát az adatok tárolására
2. Hozz létre tömböt a struktúrákból
3. A fileban lévő adatokat olvasd be a tömbbe.
4. Írj `void` függvényt a tömb adatainak kiírására! Írasd ki az adatokat! 
5. Készítsd másolatot  a tömbről, hogy megmaradjon az eredeti sorrend
6. Rendezd a tömböt név szerint ABC sorrendbe! Ehhez írj `bool` típusú függvényt!
7. Írasd ki a tömböt!
8. Rendezd a tömböt név szerint ABC sorrendbe úgy, hogy ha ugyanazt a személyt látjuk, akkor a legjobb matek tesztje legyen az első helyen! (újabb `bool` függvény)
9. Mutasd meg a tömb elemeit! 
10. Rendezd a tömböt a magyar teszt eredmények szerint csökkenő sorrendbe! (újabb `bool` függvény)
11. Mutasd meg a tömböt!
12. Rendezd  a tömböt név szerint úgy, hogy ha a név megegyezik, akkor a magyar teszt pontszámai legyenek növekvő sorrendben! (újabb `bool` függvény)
13. Mutasd meg a tömböt!
14. Számítsd ki, hogy mennyi az átlagos pontszám matekból! Írasd ki!
15. Számold meg, hogy hány olyan tesztelés volt, ahol legalább az egyik pontszám 150 feletti
16. Listázd ki azoknak a nevét és a matek pontszámát, akik a matek tesztet átlagon felülire írták meg
17. Keresd meg, hogy kinek van a legtöbb pontja magyarból. Írasd ki a nevét és a magyar pontszámát
18. ** Hozz létre a struktúrában egy új mezőt az összpontszám tárolására, majd írd bele az össz pontszámokat!
19. ** Rendezd a tömb elemeit csökkenő sorrendbe az összpontszám szerint! Mutasd meg a tömböt!
20. ** Rendezd a tömböt név szerint úgy, hogy ha megegyezik a név, akkor az össz pontszámok közül a legnagyobb kerüljön előre! (mutasd a tömböt)
21. ** Akinek az össz pontszáma kevesebb mint 200, azok nem tették le a vizsgát. hányan vannak? 
22. ** Hozz létre egy új tömböt! Ide írd át mindegyik személyt a legjobb osszpontszámú teszt eredményeivel együtt! Írasd ki az új tömb elemeit!  

```txt
# Vizsgak.txt

Manci 120 111
Nandi 100 120
Viola 205 200
Jancsi 23 70
Manci 110 180
Rezso 200 100
Nandi 100 45
Nandi 300 100 
Viola 210 120
Rezso 110 140
Manci 120 90
Jancsi 110 157
```

<details> <summary> Megoldás </summary> 

```cpp
#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <fstream>

using namespace std;

typedef struct {
    string nev;
    int matek;
    int magyar;
    //18. feladat
    int osszPont;
} Tanulo;

void kiir(Tanulo *tanulok) {
    cout << "  Név\tMatek\tMagyar" << endl;
    for (int i = 0; i < 12; i++) {
        cout << "  " << tanulok[i].nev << "\t" << tanulok[i].matek << "\t" << tanulok[i].magyar << endl;
    }
    cout << "----------------------" << endl;

}

bool ABC(Tanulo a, Tanulo b) {
    return a.nev < b.nev;
}

bool ABCMatek(Tanulo a, Tanulo b) {
    if(a.nev == b.nev) {
        return a.matek > b.matek;
    }
    return a.nev < b.nev;
}

bool magyarCsokkeno(Tanulo a, Tanulo b) {
    return a.magyar > b.magyar;
}

bool ABCMagyar(Tanulo a, Tanulo b) {
    if(a.nev == b.nev) {
        return a.magyar < b.magyar;
    }
    return a.nev < b.nev;
}

bool osszPontCsokkeno(Tanulo a, Tanulo b) {
    return a.osszPont > b.osszPont;
}

bool ABCOsszPontLegnagyobb(Tanulo a, Tanulo b) {
    if(a.nev == b.nev) {
        return a.osszPont > b.osszPont;
    }
    return a.nev < b.nev;
}



int main() {
    ifstream f("vizsgak.txt");
    //tanulo neve szóköz matekpont szóköz magyarpont újsor

    Tanulo tanulok[12];
    Tanulo olvaso;
    for (int i = 0; i < 12; i++) {
        f >> olvaso.nev >> olvaso.matek >> olvaso.magyar;
        tanulok[i] = olvaso;
    }

    kiir(tanulok);

    Tanulo tanulokMasol[12];
    for (int i = 0; i < 12; i++) {
        tanulokMasol[i] = tanulok[i];
    }

    sort(tanulokMasol, tanulokMasol + 12, ABC);
    cout << "ABC rendezés után:" << endl;
    kiir(tanulokMasol);

    sort(tanulokMasol, tanulokMasol + 12, ABCMatek);
    cout << "ABC, matek szerint rendezés után:" << endl;
    kiir(tanulokMasol);

    sort(tanulokMasol, tanulokMasol + 12, magyarCsokkeno);
    cout << "Magyar szerint csokkeno rendezes utan:" << endl;
    kiir(tanulokMasol);

    sort(tanulokMasol, tanulokMasol + 12, ABCMagyar);
    cout << "ABC, magyar szerint rendezés után:" << endl;
    kiir(tanulokMasol);

    int ossz = 0;
    for (int i = 0; i < 12; i++) {
        ossz += tanulok[i].matek;
    }
    double atlag = (double)ossz / 12;
    cout << "Átlag matek: " << atlag << endl;

    int nagy150 = 0;
    for (int i = 0; i < 12; i++) {
        if(tanulok[i].magyar > 150 || tanulok[i].matek > 150) {
            nagy150++;
        }
    }
    cout << "150 feletti matek vagy magyar: " << nagy150 << endl;

    cout << "Atlagon feluli matek: \n";
    for(int i = 0; i < 12; i++) {
        if(tanulok[i].matek > atlag) {
            cout << tanulok[i].nev << "\t" << tanulok[i].matek << endl; 
        }
    }

    int legjobbMagyar = tanulok[0].magyar;
    int legMagyInd = 0;
    for(int i = 1; i < 12; i++) {
        if(tanulok[i].magyar > legjobbMagyar) {
            legjobbMagyar = tanulok[i].magyar;
            legMagyInd = i;
        }
    }

    cout << "Legjobb magyar: " << tanulok[legMagyInd].nev << "\t" << tanulok[legMagyInd].magyar << endl;

    for(int i = 0; i < 12; i++) {
        tanulok[i].osszPont = tanulok[i].matek + tanulok[i].magyar;
    }

    sort(tanulok, tanulok + 12, osszPontCsokkeno);
    cout << "Összpont szerint rendezve:" << endl;
    kiir(tanulok);

    sort(tanulok, tanulok + 12, ABCOsszPontLegnagyobb);
    cout << "ABC, összpont szerint rendezve:" << endl;
    kiir(tanulok);

    int nemTettekLe = 0;
    for(int i = 0; i < 12; i++) {
        if(tanulok[i].osszPont < 200) {
            nemTettekLe++;
        }
    }
    cout << "Ennyien nem tettek le: " << nemTettekLe << endl;

    return 0;

}

```

</details>

## B feladat

1. Adott a rendezett tömb: `int a[20]={-20, -11, -1, 0, 12, 45, 56, 58, 59, 100, 115, 458 }`, és az elemszámot jelölő `int n=12` változó.
2. Írasd ki a tömb elemeit a képernyőre egy sorban!
3. Kérj a felhasználótól egy sorszámot és írasd ki a tömbnek azt az elemét (pl ha 5-öt ír be, akkor 12-t írj ki)
4. Kérj a felhasználótól egy számot, és helyezd el a tömbben a megfelelő helyre! Nem használhatod a sort függvényt! Vedd figyelembe, hogy adhat az első elemnél kisebbet, vagy az utolsónaál nagyobbat, vagy olyat ami valahová a tömb belsejébe való! Ha már van ilyen szám a tömbben, akkor ismétlődő elemként fog megjelenni. 
5. Mutasd meg a tömb elemeit egy sorban! 
6. Kérj a felhasználótól egy számot, és töröld ki a tömbből! Ha olyan számot ad meg, ami nincs a tömbben, akkor írj ki róla üzenetet! 
7. Írasd ki a tömb elemeit egy sorba!

<details> <summary> Megoldás </summary> 

```cpp
#include <stdio.h>
#include <iostream>
#include <algorithm>

using namespace std;

void kiir(int *a, int n) {
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main() {
    int a[20] = {-20, -11, -1, 0, 12, 45, 56, 58, 59, 100, 115, 458};
    int n = 12;

    kiir(a, n);
    
    int sorszam = 0;
    cout << "Hanyadik szam: ";
    cin >> sorszam;
    cout << "A(z) " << sorszam << ". szam: " << a[sorszam - 1] << endl;

    int beszur = 0;
    cout << "Melyik szamot szurjam be: ";
    cin >> beszur;

    if(n + 1 > 20) {
        cout << "Nincs eleg hely a tombben!" << endl;
    } else {
        int ind = 0;
        while (ind < n && a[ind] < beszur) {
            ind++;
        }
        for (int i = n; i > ind; i--) {
            a[i] = a[i - 1];
        }
        a[ind] = beszur;
        n++;
    }

    kiir(a, n);

    int torol = 0;
    cout << "Melyik szamot toroljem: ";
    cin >> torol;

    int ind = 0;
    while (ind < n && a[ind] < torol) {
        ind++;
    }
    if(ind == n) {
        cout << "Nincs ilyen szam a tombben!" << endl;
    } else {
        for (int i = ind; i < n - 1; i++) {
            a[i] = a[i + 1];
        }
        n--;
    }

    kiir(a, n);

}
```

</details>