# Pótórák feladatai és megoldásai

## 1. Pótóra (2024. Márcuis 05.)

### A feladat (hátultesztelő)

1. Kérj a felhasználótól egy 3 jegyű egész számot.
2. Ha nem ilyet ír be, kérd újra.
3. Ha megfelelő számot írt be, alkoss az utolsó számjegyéből egy kétjegyű számot, ami a 11 többszöröse, és az annál  7-tel nagyobbat.  `PL 635 -> 55 és 62`
    <details> <summary> Megoldás </summary>

    ```c++
        #include <iostream>
        
        using namespace std;
        
        int main() {
            int sz;
        
            /*2. Ha nem ilyet ír be, kérd újra.*/
            // azt kell átgondolni, hogy egyszer megengedhetjük-e, 
            // hogy lefusson a do ciklus
            do {
                /*1. Kérj a felhasználótól egy 3 jegyű egész számot.*/
                cout << "Kérek egy háromjegyű számot! " << endl;
                cin >> sz;
            } while (sz < 100 || sz > 999);
        
            // ugyenezt elérhetnénk a következő módon is:
            /*
            cout << "Kérek egy háromjegyű számot! " << endl;
            cin >> number;
            while (number < 100 || number > 999) {
                cout << "Kérek egy háromjegyű számot! " << endl;
                cin >> number;
            }
            */
           // ugyanazt értük el, viszont több sorban kellett leírnunk.
           // mivel egyszer mindenképp lefut az adatbekérés (16-17. sor) (bármilyen feltétel nélkül), ezért a do ciklus használata itt indokolt.
        

            /*3. Ha megfelelő számot írt be, alkoss az utolsó számjegyéből egy kétjegyű számot, 
            ami a 11 többszöröse, és az annál  7-tel nagyobbat.  PL 635 -> 55 és 62*/

            // A feladat hátralevő része már cikluson kívül oldható meg,
            // mivel nem kell minden megadott adatra elvégezni a műveleteket.
            // Ha ez is a ciklusokon belül lenne, 
            //akkor feleslegesen végeznénk el ezeket a műveleteket, 
            //nekünk nem megfelelő számokra.
            // Például:
            // Ha szeretnél egy almát felvágni négybe, és sorba adogatnak a kezedbe más gyümölcsöket, 
            //akkor ezeket nem fogod felvágni, mert nem almák.
            // Inkább kérsz egy másik gyümölcsöt, mindaddig, amíg az nem alma. 
            //Ekkor nem kérsz több gyümölcsöt, hanem felvágod az almát.

            int tizenegyszer = number % 10 * 10 + number % 10;
            int pluszHet = tizenegyszer + 7;
        
            cout << "Az utolsó számjegyből alkotott 11 többszöröse " << tizenegyszer << ", és az annál 7-tel nagyobb szám " << pluszHet << endl;
            return 0;
        }
        
    ```

</details>

### B feladat (hátultesztelő)

1. Kérj a felhasználótól egy kisbetűt!
2. Ha nem kisbetűt ír be, akkor kérd újra!
3. Ha kisbetűt írt be, akkor írjuk ki a nagybetűs párját, háromszor egymás alá, úgy hogy legyen közöttük üres sor!
    <details> <summary> Megoldás </summary>

    ```c++
        #include <iostream>
        
        using namespace std;
        
        int main() {
            char betu;
            /*2. Ha nem kisbetűt ír be, akkor kérd újra!*/
            do {
                /*1. Kérj a felhasználótól egy kisbetűt!*/
                cout << "Kérek egy kisbetűt! " << endl;
                cin >> betu;
            } while (betu < 97 || betu > 122);
            // ascii táblázatból láthatjuk, hogy a kisbetűk kódjai 97 és 122 között vannak
            // Az első feladathoz hasonlóan a do ciklus használata itt indokolt, 
            // mivel egyszer mindenképp lefut az adatbekérés.
        

            /*3. Ha kisbetűt írt be, akkor írjuk ki a nagybetűs párját, 
            háromszor egymás alá, úgy hogy legyen közöttük üres sor!*/

            // Ahhoz, hogy a kis a-ból nagy A legyen, meg kell keresnünk, 
            // hogy mekkora a kettő közt a távolság.
            // A kis a kódja 97, a nagy A kódja 65, tehát 32 a különbség.
            // Mivel párhuzmosan nővekednek a számok, 
            // ezért ez a különbség nem csak az a-ra igaz,
            // hanem minden betűre.
            char nagyBetu = betu - 32;
        
            //mivel háromszor kell kiírni, kell egy for ciklus, ami háromszor fut le.
            for (int i = 0; i < 3; i++) {
                cout << nagyBetu << endl;
                // A feladat kér közéjük egy-egy üres sort is, 
                // ezért nem elég egy endl, kettő kell.
                cout << endl;
            }
        
            return 0;
        }
    ```

</details>

### C feladat (elöltesztelő)

1. Kérj a felhasználótól egy egyjegyű számot, és őrizd meg az `n` változóban!
2. Amíg a szám kisebb mint `100`, adj hozzá véletlen számokat a `[10,50]` intervallumból.
3. Ha az `n` eléri a 100-at, lépj ki a ciklusból!
4. Menet közben írasd ki a generált számokat (nem az összeget) egymás mellé, szóközzel elválasztva
5. Menet közben számold meg, hány számot generáltál ki
6. Menet közben számítsd ki a generált számok összegét
7. Menet közben számold meg, hány `1`-gyel kezdődő számot generáltál
8. Írj üzenetet az eredményekről
9. Számítsd ki és írd ki a generált számok átlagát!

    <details> <summary> Megoldás </summary>

    ```cpp
        #include <iostream>
        
        using namespace std;
        
        int main() {
            srand(time(0));
            /*1. Kérj a felhasználótól egy egyjegyű számot, és őrizd meg az `n` változóban!*/
            cout << "Kérek egy egyjegyű számot! " << endl;
            int n;
            cin >> n;
            int szamlal = 0;
            int sum = 0;
            int szamlalEgyes = 0;
        
            // Mivel a feladat nem kéri, hogy ellenőrizzük a megadott számot, 
            // ezért nem garantált, hogy az tényleg egyjegyű lesz.
            // Ezért ha a felhasználó nem fogad szót, 
            // és rögtön 100-nál nagyobb számot ad meg, 
            // akkor egyszer sem adhatunk hozzá véletlen számot.
            // Emiatt, ha do ciklust használnánk, akkor nem teljesítenénk a feladatot
            /*
            do {
                int random = rand() % 41 + 10;
                szamlal++;
                sum += random;
                if (random / 10 == 1) {
                    szamlalEgyes++;
                }
                cout << random << " ";
                n += random;
            } while (n < 100);
            */
            // Így még ha 100-nál nagyobb számot kapunk, akkor is adtunk hozzá véletlen számot
            // (pedig nem kellett volna), mivel a do ciklus legalább egyszer lefut.
        

            /*2. Amíg a szám kisebb mint `100`, adj hozzá véletlen számokat a `[10,50]` intervallumból.*/

            // Ezért inkább while ciklust használunk, 
            // mivel a feltétel nem garantáltan teljesül a ciklus első futásakor.
            /*3. Ha az `n` eléri a 100-at, lépj ki a ciklusból!*/
            while (n < 100) {
                int random = rand() % 41 + 10;
                /*Menet közben számold meg, hány számot generáltál ki*/
                counter++;
                /*Menet közben számítsd ki a generált számok összegét*/
                sum += random;
                /*Menet közben számold meg, hány 1-gyel kezdődő számot generáltál*/
                if (random / 10 == 1) {
                    szamlalEgyes++;
                }
                /*Menet közben írasd ki a generált számokat (nem az összeget) egymás mellé, szóközzel elválasztva*/
                cout << random << " ";
                n += random;
            }
        
            cout << endl;
            /*Írj üzenetet az eredményekről*/
            cout << "Generált számok száma: " << szamlal << endl;
            cout << "Generált számok összege: " << sum << endl;
            cout << "1-gyel kezdődő számok száma: " << szamlalEgyes << endl;
            /*Számítsd ki és írd ki a generált számok átlagát!*/
            double avg = (double)sum / counter;
            cout << "Generált számok átlaga: " << avg << endl;
        
            return 0;
        }
    ```

</details>

### D feladat

1. Írj függvényt, ami a kocka megadott élhosszából (cm) kiszámítja egy kocka térfogatát, (cm)!
    `int kocka (int a)`
2. A főprogramban kérd be a felhasználótól a kocka élhosszát cm-ben!
3. Hívd meg a térfogat számítására szolgáló függvényt!
4. Írasd ki, hogy hány köbcentiméter a kocka térfogata!
    <details> <summary> Megoldás </summary>

    ```cpp
        #include <iostream>
        
        using namespace std;
        
        /*Írj függvényt, ami a kocka megadott élhosszából (cm) kiszámítja egy kocka térfogatát, (cm)!*/
        int kocka (int a) {
            int terf = a * a * a;
            return terf;
        }
        
        int main() {
            /*A főprogramban kérd be a felhasználótól a kocka élhosszát cm-ben!*/
            cout << "Kérem a kocka élének hosszát! " << endl;
            int elhossz;
            cin >> elhossz;
            /*Hívd meg a térfogat számítására szolgáló függvényt!*/
            int terfogat = kocka(elhossz);
            /*Írasd ki, hogy hány köbcentiméter a kocka térfogata!*/
            cout << "A kocka térfogata " << terfogat << endl;
            return 0;
        }
        
    ```

</details>

### E feladat

1. Írj függvényt ami egy derékszögű háromszög két befogójából kiszámítja az átfogót!
    `double atfogo (double a, double b)`
2. A főprogramban kérd be a felhasználótól a befogók hosszát, tizedes számok is lehetnek!
3. Hívd meg a függvényt, és írd ki az eredményt!
    <details> <summary> Megoldás </summary>

    ```cpp
        #include <iostream>
        #include <cmath>
        
        using namespace std;
        
        /*Írj függvényt ami egy derékszögű háromszög két befogójából kiszámítja az átfogót!*/
        double atfogo (double a, double b) {
            double atfogo = sqrt(a * a + b * b);
            return atfogo;
        }
        
        int main() {
            /*A főprogramban kérd be a felhasználótól a befogók hosszát, tizedes számok is lehetnek!*/
            cout << "Kérem a befogók hosszait! " << endl;
            double befogo1, befogo2;
            cin >> befogo1 >> befogo2;
            /*Hívd meg a függvényt, és írd ki az eredményt!*/
            double atfogoHossz = atfogo(befogo1, befogo2);
            cout << "Az átfogó hossza " << atfogoHossz << endl;
            return 0;
        }
    ```

    </details>

## 2. Pótóra (2024. Március 12.)

### A feladat

1. Az `a` tömb elemeinek add kezdőértékként: `{2, -10, 8, 3, 11, 20, 7}`
2. Írj függvényt, ami kiírja a tömb minden elemét egy sorba, szóközzel elválasztva! Az utolsó elem után kövekezzen 2 üres sor!
`void kiirsorba(int *a, int n)`
`a` - a tömb neve, `n` - az elemeinek a száma
3. A főprogramból hívd meg a függvényt és mutasd meg a tömb elemeit!
4. Deklarálj egy új tömböt, aminek a neve `haromszoros` legyen! (gondolkodj el, milyen típusú adatok kerülnek majd bele).
5. Az új tömbbe az a tömb elemeinek háromszorosa kerüljön!
6. Írasd ki a haromszoros tömb elemeit is a kész függvénnyel!
7. Írj függvényt, ami a összeadja egy tömb páros indexű elemeit!
`int pindossz(int *a, int n)`
`a` - a tömb neve, `n` - az elemeinek a száma
8. Hívd meg a függvényt a főprogramból és írasd ki mindkét tömb páros indexű elemeinek az összegét, üzenetek kíséretében!
9. Számítsd ki az eredeti tömb páros indexű elemeinek az átlagát is, és írasd ki!
    <details> <summary> Megoldás </summary>

    ```cpp
    #include <iostream>
    
    using namespace std;
    /*Írj függvényt, ami kiírja a tömb minden elemét egy sorba, szóközzel elválasztva! 
    Az utolsó elem után kövekezzen 2 üres sor!*/
    void kiirsorba(int *a, int n) {
        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        cout << endl;  //ez az endl meg a kiiras veget jelzi
        cout << endl;
        coud << endl;
    }
    
    /*Írj függvényt, ami a összeadja egy tömb páros indexű elemeit!*/
    int pindossz(int *a, int n) {
        int sum = 0;
        for(int i = 0; i < n; i += 2) {
            sum += a[i];
        }
        return sum;
    }
    
    int main() {
        /*Az a tömb elemeinek add kezdőértékként: {2, -10, 8, 3, 11, 20, 7}*/
        int a[7] = {2, -10, 8, 3, 11, 20, 7};
    
        /*A főprogramból hívd meg a függvényt és mutasd meg a tömb elemeit!*/
        kiirsorba(a, 7);
    
        /*Deklarálj egy új tömböt, aminek a neve haromszoros legyen! 
        (gondolkodj el, milyen típusú adatok kerülnek majd bele).*/
        int haromszoros[7];
        /*Az új tömbbe az a tömb elemeinek háromszorosa kerüljön!*/
        for (int i = 0; i < 7; i++) {
            haromszoros[i] = a[i] * 3;
        }
    
        /*Írasd ki a haromszoros tömb elemeit is a kész függvénnyel!*/
        kiirsorba(haromszoros, 7);
    
        /*Hívd meg a függvényt a főprogramból 
        és írasd ki mindkét tömb páros indexű elemeinek az összegét, 
        üzenetek kíséretében!*/
        cout << "Páros indexű elemek összege a tombben: " << pindossz(a, 7) << endl;
        cout << "Páros indexű elemek összege a haromszoros tombben: " << pindossz(haromszoros, 7) << endl;

        /*Számítsd ki az eredeti tömb páros indexű elemeinek az átlagát is, és írasd ki!*/
        cout << "Paros indexu elemek atlaga az a tombben: " << (float)pindossz(a, 7) / 4 << endl;
    
        return 0;
    }
    ```

</details>

### B feladat

1. Deklarálj tömböt 10 egész szám tárolására!
2. Töltsd fel véletlen számokkal az `[10,205]` intervallumból! Addig végezd a feltöltést, míg a tömb tele nem lesz, vagy az első 100-asig. Tehát lehet ilyen tömböd: `{56, 200, 100}` vagy `{10,20,30,40, 60, 80, 90, 200, 199, 198}`, de nem lehet `{10,20,30,40, 60, 80, 90, 100, 199, 198}`. A ciklus típusát magad válaszd meg!
3. Számold meg, hogy hány elemet vittél be a tömbbe! Írasd is ki, miután kiléptél a ciklusból!
4. Írj függvényt, ami kiírja a képernyőre a tömb elemeit 3 oszlopba!
`void kiir(int *a, int n)`
`a` - a tömb neve, `n` - az elemeinek a száma
Ügyelj arra, hogy a tomb végén lévő szemetet ne írasd ki, ha kevesebb mint 10 elem van!
5. Írj függvényt, ami megszámolja, hogy a tömbben hány kétjegyű szám van! A függvényt hívd meg helyesen a főprogramból, és írasd ki az eredményt!
`int ketj(int *a, int n)`
`a` - a tömb neve, `n` - az elemeinek a száma
A főprogramból hívd meg a függvényt, írasd ki a kétjegyűek számát!
6. A főprogramban végezd a következő műveletet: a tömb minden páros elemét oszd el 2-vel! A páratlanokat ne változtasd!
7. Írasd ki a tömb elemeit, a már kész függvénnyel!
8. Írasd ki megint a kétjegyűek számát is! Használd a kész függvényt!
    <details> <summary> Megoldás </summary>

    ```cpp
    #include <iostream>
    
    using namespace std;
    
    /*Írj függvényt, ami kiírja a képernyőre a tömb elemeit 3 oszlopba!
    Ügyelj arra, hogy a tomb végén lévő szemetet ne írasd ki, ha kevesebb mint 10 elem van!*/
    void kiir(int *a, int n) {
        for (int i = 0; i < n; i++) {
            cout << a[i] << "\t";
            if(i % 3 == 2) {
                cout << endl;
            }
        }
        cout << endl;
    
    }
    /*Írj függvényt, ami megszámolja, hogy a tömbben hány kétjegyű szám van! 
    A függvényt hívd meg helyesen a főprogramból, és írasd ki az eredményt! */
    int ketj(int *a, int n) {
        int db = 0;
        for (int i = 0; i < n; i++) {
            if( (a[i] > 10) && (a[i] < 100)) {
                db++;
            }
        }
        return db;
    }
    
    int main() {
        /*Deklarálj tömböt 10 egész szám tárolására!*/
        int a[10];
    
        srand(time(0));
        /*for (int i = 0; i < 10; i++) {
            int random = rand() % 196+10;
            if(random != 100) {
                a[i] = random; // 10-205
            }
            else {
                break;
            }
    
        }*/
        /*Töltsd fel véletlen számokkal az `[10,205]` intervallumból! 
        Addig végezd a feltöltést, míg a tömb tele nem lesz, 
        vagy az első 100-asig. 
        Tehát lehet ilyen tömböd: `{56, 200, 100}` 
        vagy `{10,20,30,40, 60, 80, 90, 200, 199, 198}`, 
        de nem lehet `{10,20,30,40, 60, 80, 90, 100, 199, 198}`. 
        A ciklus típusát magad válaszd meg!*/
        int random = rand() % 196+10;
        int ind = 0;
        while ((random != 100) && (ind < 10)) {
            int random = rand() % 196+10;
            a[ind] = random;
            /*Számold meg, hogy hány elemet vittél be a tömbbe! Írasd is ki, miután kiléptél a ciklusból!*/
            ind++;
        }
    
        cout << ind << " elemet vittem be\n";
    
        kiir(a, ind);
    
        /*A főprogramból hívd meg a függvényt, írasd ki a kétjegyűek számát!*/
        cout << "Ketjegyu szamok szama: " << ketj(a, ind) << endl;
    
        cout << "<---------------Osztas utan--------------->\n";
    
        /*A főprogramban végezd a következő műveletet: a tömb minden páros elemét oszd el 2-vel! 
        A páratlanokat ne változtasd!*/
        for(int i = 0; i < ind; i++) {
            if (a[i] % 2 == 0) {
                a[i] = a[i] / 2;
            }
        }
        /*Írasd ki a tömb elemeit, a már kész függvénnyel!*/
        kiir(a, ind);

        /*Írasd ki megint a kétjegyűek számát is! Használd a kész függvényt!*/
        cout << "Ketjegyu szamok szama: " << ketj(a, ind) << endl;
    
        return 0;
    }
    ```

    </details>

### C feladat

1. Hozz létre új projektumot! A projektum mappájában hozz létre egy txt filet, aminek a neve `xx.txt` legyen! Írj bele egész számokat szóközzel elválasztva, legalább 8 db-ot! Őrizd meg a filet!
2. A programban deklarálj egy 15 elemű tömböt egész számok tárolására!
3. Nyisd meg a filet olvasásra, ellenőrizd, hogy helyesen nyílt e meg a file!
4. A file elemeit olvasd be a tömbbe! Ügyelj arra, hogy a tömb határát (15 elem) ne lépd túl!
5. Írasd ki, hogy hány elemet olvastál be a tömbbe!
6. Írj függvényt, ami kiszámítja az elemek összegét!
`int osszeg(int *a, int n)`
`a`-a tömb neve, `n` - az elemeinek a száma
7. A főprogramból hívd meg a függvényt, és írasd ki az összeget!
8. Számítsd ki az elemek átlagát is! Írasd ki!
9. Próbáld ki úgy is, hogy kevesebb mint 15 szám van a file-ban, és úgy is, hogy több!

    <details> <summary> Megoldás </summary>

    ```cpp
    #include <iostream>
    #include <fstream>
    
    using namespace std;
    
    int ketj(int *a, int n) {
        int sum = 0;
        for(int i = 0; i < n; i++) {
            sum += a[i];
        }
        return sum;
    }
    
    int main() {
        int a[15];
        
        ifstream f("xx.txt");
        if(!f.is_open()) {
            cout << "Error opening file\n" << endl;
            return 1;
        }
    
        int i = 0;
        while(!f.eof() && (i < 15)) {
            f >> a[i];
            //cout << a[i] << " ";
            i++;
        }
        //cout << endl;
    
        cout << i << " darab szamot olvastam be\n";
    
        cout << "A szamok osszege: " << ketj(a, i) << endl;
    
        cout << "A szamok atlaga: " << (float)ketj(a, i) / i << endl;
    
        return 0;
    }
    ```

## 3. Pótóra (2024. Március 19.)

### X csoport

Írj programot:

1. Deklarálj egy 10 elemű tömböt egész számok tárolására, a neve legyen `elso`!
2. Add neki kezdőértékként azt a tömböt, aminek az elemei: `5, 8, 11, 2, 19, 21, 33, 42`
3. Írj függvényt, ami kiírja a tömb elemit 4 oszlopba! A kiírás után legyen két üres sor!
    `void kiir3(int *a, int n)`
4. A főprogramból hívd meg a fenti függvényt, hogy lássuk a tömb elemeit 4 oszlopban! (mind a 10 elemet)
5. Újra írasd ki az elemeket 4 oszlopba, de most csak a “hasznos” elemeket!
6. Írj függvényt, ami kiszámítja a tömb `[7,21]` intervallumba eső elemeinek az összegét!
     `int osszeg721(int*a, int n)`
7. Hívd meg a főprogramból a függvényt, és írasd ki az eredményt üzenet kíséretében!
8. Hozz létre egy új tömböt, amiben ugyanennyi elem lesz! A neve legyen `masodik`
9. Az új tömb elemei az eredeti tömb elemeinek háromszorosánál 15-tel kisebb számok legyenek!
10. Írasd ki ezt a tömböt is 4 oszlopba!
11. Számítsd ki ennél a tömbnél is a `[7,21]` intervallumba eső elemek az összegét! Írasd ki az eredményt üzenet kíséretében!
12. Deklarálj még két, szintén 10 elemű tömböt, egész számok tárolására, `harmadik` és `negyedik` néven!
13. A `harmadik` tömbbe kerüljenek a `masodik` tömbből azok az elemek, amik párosak vagy 10-nél kisebbek, a `negyedik`-be pedig a többi elem! Ügyelj arra, hogy ne legyenek az új tömbökben “lyukak”!
14. Írasd ki, hogy hány eleme van a `harmadik` és a `negyedik` tömbnek!
15. Írasd ki csak a “hasznos” elemeiket!
16. Az `első` tömb 5. elemét csökkentsd 11-gyel!
17. Írasd ki újra az `elso` és a `masodik` tömböt, mindkettőt 3-3 oszlopba!

    <details> <summary> Megoldás </summary>

    ```cpp
    #include <iostream>

    using namespace std;

    //3. Írj függvényt, ami kiírja a tömb elemit 4 oszlopba! A kiírás után legyen két üres sor!
    void kiir3(int *a, int n) {
        for (int i = 0; i < n; i++) {
            cout << a[i] << "\t";
            if ((i+1) % 4 == 0) {
                cout << endl;
            }
        }
        cout << endl << endl;
    }

    //6. Írj függvényt, ami kiszámítja a tömb [7,21] intervallumba eső elemeinek az összegét! 
    int osszeg721(int*a, int n) {
        int osszeg = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] >= 7 && a[i] <= 21) {
                osszeg += a[i];
            }
        }
        return osszeg;
    }

    int main() {
    // 1. Deklarálj egy 10 elemű tömböt egész számok tárolására, a neve legyen elso!
    // 2. Add neki kezdőértékként azt a tömböt, aminek az elemei: 5, 8, 11, 2, 19, 21, 33, 42
        int elso[10] = {5,8,11,2,19,21,33,42};
    // 4. A főprogramból hívd meg a fenti függvényt, hogy lássuk a tömb elemeit 4 oszlopban! (mind a 10 elemet)
        cout << "Az elso tomb elemei 4 oszlopba rendezve: \n";
        kiir3(elso, 10);
    // 5. Újra írasd ki az elemeket 4 oszlopba, de most csak a “hasznos” elemeket!
        cout << "Az elso tomb hasznos elemei 4 oszlopba rendezve: \n";
        kiir3(elso, 8);
    // 7. Hívd meg a főprogramból a függvényt, és írasd ki az eredményt üzenet kíséretében!
        cout << "A tomb [7,21] intervallumba eso elemeinek az osszege: " << osszeg721(elso, 8) << endl;
    // 8. Hozz létre egy új tömböt, amiben ugyanennyi elem lesz! A neve legyen masodik.
        int masodik[10];
    // 9. Az új tömb elemei az eredeti tömb elemeinek háromszorosánél 15-tel kisebb számok legyenek!
        for (int i = 0; i < 10; i++) {
            masodik[i] = elso[i] * 3 - 15;
        }
    // 10. Írasd ki ezt a tömböt is 4 oszlopba!
        cout << "A masodik (= elso * 3 - 15) tomb elemei 4 oszlopba rendezve: \n";
        kiir3(masodik, 10);
    // 11. Számítsd ki ennél a tömbnél is a [7,21] intervallumba eső elemek az összegét! Írasd ki az eredményt üzenet kíséretében!
        cout << "A masodik tomb [7,21] intervallumba eso elemeinek az osszege: " << osszeg721(masodik, 8) << endl;
    // 12. Deklarálj még két, szintén 10 elemű tömböt, egész számok tárolására, harmadik és negyedik néven!
        int harmadik[10], negyedik[10];
    // 13. A harmadik tömbbe kerüljenek a második tömbből azok az elemek, amik párosak vagy 10-nél kisebbek, a negyedik-be pedig a többi elem! Ügyelj arra, hogy ne legyenek az új tömbökben “lyukak”!
        int h = 0, k = 0;
        for (int i = 0; i < 10; i++) {
            if (masodik[i] % 2 == 0 || masodik[i] < 10) {
                harmadik[h] = masodik[i];
                h++;
            } else {
                negyedik[k] = masodik[i];
                k++;
            }
        }
    // 14. Írasd ki, hogy hány eleme van a harmadik és a negyedik tömbnek!
        cout << "A harmadik tomb merete: " << h << endl;
        cout << "A negyedik tomb merete: " << k << endl;
    // 15. Írasd ki csak a “hasznos” elemeiket!
        cout << "A harmadik (masodikbol paros vagy < 10) tomb hasznos elemei 4 oszlopba rendezve: \n";
        kiir3(harmadik, h);
        cout << "A negyedik (masodikbol paratlan es >= 10) tomb hasznos elemei 4 oszlopba rendezve: \n";
        kiir3(negyedik, k);
    // 16. Az első tömb 5. elemét csökkentsd 11-gyel! 
        elso[4] -= 11;
    // 17. Írasd  ki újra az elso és a masodik tömböt, mindkettőt 3-3 oszlopba!
        cout << "Az elso tomb elemei 3 oszlopba rendezve: \n";
        for (int i = 0; i < 10; i++) {
            cout << elso[i] << "\t";
            if ((i+1) % 3 == 0) {
                cout << endl;
            }
        }
        cout << endl << endl;
        cout << "A masodik tomb elemei 3 oszlopba rendezve: \n";
        for (int i = 0; i < 10; i++) {
            cout << masodik[i] << "\t";
            if ((i+1) % 3 == 0) {
                cout << endl;
            }
        }
        cout << endl << endl;

    }
    ```

    </details>

### Y csoport

Írj programot:

1. Deklarálj egy 15 elemű tömböt egész számok tárolására, a neve legyen `e`!
2. Az elemei legyenek véletlen számok a `[100, 120]` intervallumból! Ha megjelenik az első `110`-es érték, hagyd abba a tömb feltöltését! Ügyelj arra, hogy ne legyen több 15 elemnél!
3. Írasd ki, hogy hány elem lett végül a tömbben!
4. Írj függvényt, ami kiírja a tömb elemeit 5 oszlopba! A kiírás előtt és után is egy-egy üres sor legyen!
    `void kiir5(int *a, int n)`
5. A főprogramból hívd meg a fenti függvényt, hogy lássuk a tömb elemeit 5 oszlopban!
6. Írj függvényt, ami megszámolja, hogy a tömbben hány `110`-nél nagyobb páratlan szám van!
    `int paratlan110(int*a, int n)`
7. Hívd meg a főprogramból a függvényt, és írasd ki az eredményt üzenet kíséretében!
8. Hozz létre egy új tömböt, amiben ugyanennyi elem lesz! A neve legyen `m`
9. Az `m` tömbbe írj az `e` tömb páratlan elemeinél `4`-gyel kisebbet, a párosakhoz viszont adj hozzá `9`-et! Az elemek sorrendje ne változzon!
10. Írasd ki ezt a tömböt is 5 oszlopba!
11. Ebben a tömbben hány hány `110`-nél nagyobb páratlan szám van? Írasd ki az eredményt üzenet kíséretében!
12. Deklarálj még egy, szintén `10` elemű tömböt, egész számok tárolására, `h` néven!
13. Ebbe a tömbbe kerüljenek az `e` tömbből azok az elemek, amik öttel oszthatóak vagy a középső számjegyük `0`! Ügyelj arra, hogy ne legyenek a tömbben “lyukak”!
14. Írasd ki, hogy hány eleme van a `h` tömbnek!
15. Írasd ki csak a “hasznos” elemeit, 5 oszlopba!
16. Az `m` tömb 10. elemét szorzod meg `3`-mal!
17. Írasd ki újra az `m` tömb elemeit, 5 oszlopba!
    <details> <summary> Megoldás </summary>

    ```cpp
    #include <iostream>

    using namespace std;

    // 4. Írj függvényt, ami kiírja a tömb elemeit 5 oszlopba! A kiírás előtt és után is egy-egy üres sor legyen! 
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

    // 6. Írj függvényt, ami megszámolja, hogy a tömbben hány 110-nél nagyobb páratlan szám van! 
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
    // 1. Deklarálj egy 15 elemű tömböt egész számok tárolására, a neve legyen e!
        int e[15];
    // 2. Az elemei legyenek véletlen számok a [100, 120] intervallumból! Ha megjelenik az első 110-es érték, hagyd abba a tömb feltöltését! Ügyelj arra, hogy ne legyen több 15 elemnél! 
        int i = 0;
        do {
            e[i] = rand() % 21 + 100;
            i++;
        }while ((i < 15) && (e[i - 1] != 110));
    // 3. Írasd ki, hogy hány elem lett végül a tömbben! 
        cout << "A tombben " << i << " elem van." << endl;

    // 5. A főprogramból hívd meg a fenti függvényt, hogy lássuk a tömb elemeit 5 oszlopban!
        cout << "Az e tomb elemei 5 oszlopba rendezve: \n";
        kiir5(e, i);

    // 7. Hívd meg a főprogramból a függvényt, és írasd ki az eredményt üzenet kíséretében!
        cout << "A tombben " << paratlan110(e, i) << " db 110-nel nagyobb paratlan szam van." << endl;
    // 8. Hozz létre egy új tömböt, amiben ugyanennyi elem lesz! A neve legyen m.
        int m[15];
    // 9. Az m tömbbe írj az e tömb páratlan elemeinél 4-gyel kisebbet, a párosakhoz viszont adj hozzá 9-et! Az elemek sorrendje ne változzon!
        for (int j = 0; j < i; j++) {
            if (e[j] % 2 == 1) {
                m[j] = e[j] - 4;
            } else {
                m[j] = e[j] + 9;
            }
        }
    // 10. Írasd ki ezt a tömböt is 5 oszlopba!
        cout << "Az m (e-bol paratlan - 4, paros + 9) tomb elemei 5 oszlopba rendezve: \n";
        kiir5(m, i);
    // 11. Ebben a tömbben hány hány 110-nél nagyobb páratlan szám van? Írasd ki az eredményt üzenet kíséretében!
        cout << "A m tombben " << paratlan110(m, i) << " db 110-nel nagyobb paratlan szam van." << endl;
    // 12. Deklarálj még egy, szintén 10 elemű tömböt, egész számok tárolására, h néven!
        int h[10];
    // 13. Ebbe a tömbbe kerüljenek az e tömbből azok az elemek, amik öttel oszthatóak vagy a középső számjegyük 0!
        int j = 0;
        for (int k = 0; k < i; k++) {
            if (e[k] % 5 == 0 || (e[k] / 10) % 10 == 0) {
                h[j] = e[k];
                j++;
            }
        }

    // 14. Írasd ki, hogy hány eleme van a h tömbnek!
        cout << "A h tomb merete: " << j << endl;

    // 15. Írasd ki csak a “hasznos” elemeit, 5 oszlopba!
        cout << "A h (e-bol 5-tel oszthato vagy a kozepsoben 0) tomb hasznos elemei 5 oszlopba rendezve: \n";
        kiir5(h, j);

    // 16. Az m tömb 10. elemét szorzod meg 3-mal! 
        m[9] *= 3;

    // 17. Írasd ki újra az m tömb elemeit, 5 oszlopba!
        cout << "Az m tomb elemei 5 oszlopba rendezve: \n";
        kiir5(m, i);
        return 0;


    }
    ```

</details>

## Z csoport

Írj programot:

1. Deklarálj egy 7 elemű tömböt egész számok tárolására, a neve legyen `r`!
2. Az elemeit a felhasználó vigye be, `0` végjelig! Ügyelj arra, hogy ne legyen több `7` elemnél!
3. Írasd ki, hogy hány elem került a tömbbe!
4. Írj függvényt, ami kiírja a tömb elemeit egymás mellé, vesszővel elválasztva! Az utolsó elem után ne legyen vessző! A kiírás előtt és után is egy-egy üres sor legyen!
    `void kiir(int *a, int n)`
5. A főprogramból hívd meg a fenti függvényt, hogy lássuk a tömb `7` elemét a megadott módon!
6. Újra írasd ki a tömböt, de most már csak a “hasznos” elemeit, amiket a felhasználó vitt be (a végjelet sem)!
7. Írj függvényt, ami meghatározza a tömb legkisebb elemét!
    `int lkis(int*a, int n)`
8. Hívd meg a főprogramból a függvényt, és írasd ki az eredményt üzenet kíséretében!
9. Változtasd meg a tömb 4. elemét úgy, hogy 25 legyen, ha páros volt, egyébként vonj ki belőle 75-öt!
10. Most mi a tömb legkisebb eleme? Írasd ki!
11. Hozz létre egy új tömböt, amiben ugyanennyi elem lesz! A neve legyen `s`
12. Az `s` tömbbe írj az `r` tömb reciprok értékénél 2-vel nagyobb számot!
13. Írasd ki ezt a tömböt is! Ez nem megy a kész függvénnyel, a főprogramban dolgozz rajta!
14. Deklarálj még egy, szintén `7` elemű tömböt, egész számok tárolására, `t` néven!
15. A `t` tömbbe kerüljenek az `r` tömbből azok az elemek, `10` és `70` közé esnek! Ügyelj arra, hogy ne legyenek a tömböken “lyukak”!
16. Írasd ki, hogy hány eleme van a `t` tömbnek!
17. Írasd ki csak a “hasznos” elemeit a függvénnyel!
    <details> <summary> Megoldás </summary>

    ```cpp
    #include <iostream>

    using namespace std;

    // 4. Írj függvényt, ami kiírja a tömb elemeit egymás mellé, 
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

    // 7. Írj függvényt, ami meghatározza a tömb legkisebb elemét! 
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
    // 1. Deklarálj egy 7 elemű tömböt egész számok tárolására, a neve legyen r!
        int r[7];

    // 2. Az elemeit a felhasználó vigye be, 0 végjelig! 
    // Ügyelj arra, hogy ne legyen több 7 elemnél! 
        cout << "Kerek 7 szamot" << endl;
        int i = 0;
        do  {
            cin >> r[i];
            i++;
        } while ((i < 7) && (r[i - 1] != 0));
    // 3. Írasd ki, hogy hány elem került a tömbbe!
        cout << "A tombben " << i << " elem van" << endl;
    // 5. A főprogramból hívd meg a fenti függvényt, hogy lássuk a tömb 7 elemét a megadott módon!
        kiir(r,7);
    // 6. Újra írasd ki a tömböt, de most már csak a “hasznos” elemeit, amiket a felhasználó vitt be (a végjelet sem)!
        kiir(r,i);

    // 8. Hívd meg a főprogramból a függvényt, és írasd ki az eredményt üzenet kíséretében!
        cout << "A legkisebb elem: " << lkis(r, i) << endl;

    // 9. Változtasd meg a tömb 4. elemét úgy, hogy 25 legyen, ha páros volt, egyébként vonj ki belőle 75-öt!
        if(r[4] % 2 == 0) {
            r[4] = 25;
        }
        else {
            r[4] -= 75;
        }
    // 10. Most mi a tömb legkisebb eleme? Írasd ki!
        cout << "A tomb uj legkisebb eleme: " << lkis(r,i);
    // 11. Hozz létre egy új tömböt, amiben ugyanennyi elem lesz! A neve legyen s.
        double s[7];
    // 12. Az s tömbbe írj az r tömb reciprok értékénél 2-vel nagyobb számot!
        for(int j = 0; j < i; j++) {
            s[j] = (double)1 / r[j] + 2;
        }
    // 13. Írasd ki ezt a tömböt is! Ez nem megy a kész függvénnyel, a főprogramban dolgozz rajta!
        for (int j = 0; j < i; j++) {
            cout << s[i];
            if (j < i - 1) {
                cout << ",";
            }
        }
    // 14. Deklarálj még egy, szintén 7 elemű tömböt, egész számok tárolására, t néven!
        int t[7];
    // 15. A t tömbbe kerüljenek az r tömbből azok az elemek, 10 és 70 közé esnek!
        int k = 0;
        for(int j = 0; j < i; j++){
            if(r[j] > 10 && r[j] < 70) {
                t[k] = r[j];
                k++;
            }
        }
    // 16. Írasd ki, hogy hány eleme van a t tömbnek!
        cout << "A t tombnek " << k << " eleme van." << endl;
    // 17. Írasd ki csak a “hasznos” elemeit a függvénnyel!
        kiir(t,k);
    }
    ```

</details>
