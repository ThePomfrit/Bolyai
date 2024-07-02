# Gyakorló feladatok

## Valtozok

## Elagazasok

## File-ok

## Ciklusok

Ciklusokat akkor alkalmazunk, amikor néhány sort a programból ismételni kell.

### `for`

Akkor választjuk a `for` ciklust, amikor tudjuk, hogy hányszor kell megismételni valamit. Ezt nem muszáj futáskor tudni, változóhoz is köthető.Mindig van egy ciklusváltozónk *(lehetőleg erre meghagyjuk az `i` és `j` változókat)*, ami azt követi, hogy hányszor futott már le a ciklus.

***1. Példa***
*Írjunk ki 5 darab `a` betűt egymás mellé!*
```cpp
cout << "aaaaa" << end;
```
De mi van, ha nem 5-öt kell kiírni, hanem 100-at, vagy még többet? Egyesével megszámoljuk, hogy biztosan annyit írtunk ki? Ezt megkönnyítheti a for ciklus.

```cpp
for( int i = 0; i < 5; i++ ) {
    cout << "a";
}
cout << endl;
```
Így ugyan több sorban írtuk le egyanazt, de könnyen változtatható a kiírt `a` betűk mennyisége. Mindössze az `i < 5` kiértékelést kell átírni.

***2. Példa***

*Írjuk ki a számokat 1-5.*
```cpp
cout << "12345" << endl;
```
Hasonlóan, ezt is hozzáférhetőbbé tehetjük, ha for ciklust alkalmazunk.
```cpp
for( int i = 1; i <= 5; i++) {
    cout << i;
}
cout << endl;
```
Észrevehetjük azt is, hogy a ciklus most 1-től indul, és az 5-tel való egyenlőség is megengedett. Amikor csak a mennyiség számít, mint az 1. példában, akkor bármi lehet az intervallum, ameddig a köztes számok mennyisége helyes *(pl 1. példában 5-0=5, itt (5+1)-1=0, mivel <= 5)*. Itt viszont maga a szám is lényeg. Ha hagytuk volna az első cilusból a ciklusfeltételt, akkor "01234" került volna kiírásra "12345" helyett.

***3. Példa***

*Kérjünk a felhasználótól két számot, és írjuk ki a köztük levő számokat.*
Ezt ciklus nélkül már nem igazán tudjuk megcsinálni. Szükségünk van ugyanis valamire, ami végiglépeget az egyik számtól a másikig.
```cpp
int a;
int b;
cout << "Kerem a szamokat: ";
cin >> a;
cin >> b;
for(int i = a + 1; i < b; i++) {
    cout << i;
}
cout << endl;
```

### `do .. while`

#### A feladat

1. Kérj a felhasználótól egy 3 jegyű egész számot.
2. Ha nem ilyet ír be, kérd újra.
3. Ha megfelelő számot írt be, alkoss az utolsó számjegyéből egy kétjegyű számot, ami a 11 többszöröse, és az annál  7-tel nagyobbat.  `PL 635 -> 55 és 62`

    <details> <summary> Megoldás </summary>

    ```c++
        #include <iostream>
        
        using namespace std;
        
        int main() {
            int sz;

            do {
                cout << "Kérek egy háromjegyű számot! " << endl;
                cin >> sz;
            } while (sz < 100 || sz > 999);
        
            int tizenegyszer = number % 10 * 10 + number % 10;
            int pluszHet = tizenegyszer + 7;
        
            cout << "Az utolsó számjegyből alkotott 11 többszöröse " << tizenegyszer << ", és az annál 7-tel nagyobb szám " << pluszHet << endl;
            return 0;
        }
        
    ```

    </details>


#### B feladat

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

### `while`

## Függvények

### `void`

### `int`

### `(int, int)`

## Tömbök

###