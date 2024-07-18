# Sablonok

## Filekezelés

### Olvasás

```cpp
#include <fstream>

//...

ifstream f;
f.open("input.txt");
if(!f.is_open()) {
    cout << "Err";
    return 1;
}
while(...) {
    //mit csinalunk a fileal
}

f.close();
```

**`getline` függvénnyel**

```cpp
//f - file; sor - string
while(getline(f, sor)) {
    //most a sor-ban van az adott sora a file-nak
    //stringkent felbonthatjuk, atalakithatjuk amive kell
}
```

**`>>` operátorral**

```cpp
while(!f.eof()) {
    //megkeresi a kovetkezo olyan tipust, amilyen a valtozo
    //nem szamit, hogy milyen whitespaceel vannak elvalasztva 
    //(space, enter, tab)
    //mindenkepp csak a kovetkezot keresi
    f >> a;
    f >> b;
    //pl.: a - int, b - string
    //file: lkjgc 2 3 osdvkd
    // a=2, b=osdvkd
}
```

### Írás


```cpp
#include <fstream>

//...

ofstream f;
f.open("input.txt");
//ha a file nem letezik, letrehozza
//ha a file letezik, felulirja

//f.open("input.txt", std::ios_base::app);
//^ ha a filehoz hozzafuzni akarunk, feluliras helyett. Ez ritka.
if(!f.is_open()) {
    cout << "Err";
    return 1;
}    

//v - indexelheto adattarolo (tomb, vector, ...)
for(int i = 0; i < v.size(); i++) {
    //v barmilyen formaban megadhatjuk, hogy mit szeretnenk irni
    //f << "szoveg" << 1 << a << " ";

    //altalaban valamilyen tarolobol szeretnenk a file-ba tartolni
    //ezert megy a for is v.size()-ig
    f << v[i] << " ";
}

f.close();
```

## String

### Felbontás

<details><summary> Magyarázattal </summary>

```cpp
string sor = "Kovács János; 1506990710011; 4 4 4 5 2 4"
string Vezeteknev;
string Keresztnev;
string JMBG;
vector<int> jegyek;

string nev = sor.substr(0, sor.find(';'));
// Kovács János; 1506990710011; 4 4 4 5 2 4
// ^           ^
// 0          12
// 0-tol 12 karakter hosszan olvas: Kovács János

sor = sor.substr(sor.find(';') + 2);
// Kovács János; 1506990710011; 4 4 4 5 2 4
//             ^ ^
//            12 12+2
// megtalalja a 12. indexen, hozzaad 2-t, es a 14. indextol a vegeig olvas
// 1506990710011; 4 4 4 5 2 4

JMBG = sor.substr(0, sor.find(';'));
sor = sor.substr(sor.find(';') + 2);
// 4 4 4 5 2 4

string sjegyek = sor.substr(0, sor.find(';'));
// itt a sor.find(';') string::npos-t ad vissza
//Ilyenkor a string vegeig olvas
//ugyanugy mintha nem is lenne masodik parametere

//az sjegyekben mar nem ';' a hatad, name a ' '
while(sjegyek.find(" ") != string::npos) {
    jegyek.push_back(stoi(sjegyek.substr(0, sjegyek.find(' '))));
    // 4 4 4 5 2 4
    // ^^
    // 01
    sjegyek = sjegyek.substr(sjegyek.find(' ')+1);
    // 4 4 4 5 2 4
    //  ^
    //  1
}
```
</details>

```cpp
string sor = "Kovács János; 1506990710011; 4 4 4 5 2 4"
string Vezeteknev;
string Keresztnev;
string JMBG;
vector<int> jegyek;

string nev = sor.substr(0, sor.find(';'));
sor = sor.substr(sor.find(';') + 2);

JMBG = sor.substr(0, sor.find(';'));
sor = sor.substr(sor.find(';') + 2);

string sjegyek = sor.substr(0, sor.find(';'));

while(sjegyek.find(" ") != string::npos) {
    jegyek.push_back(stoi(sjegyek.substr(0, sjegyek.find(' '))));
    sjegyek = sjegyek.substr(sjegyek.find(' ')+1);
}
```

### Összeállítás

```cpp
// deklaraljuk
string str = "almafa";

// felulirjuk
str = "alma";
// hozzafuzunk
str += "fa";

//felepitjuk
int a = 1;
str = "almafa " + a + " almaval
```