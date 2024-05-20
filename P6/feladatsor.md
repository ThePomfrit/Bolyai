A vasarlok.txt adatit olvasd be soronként:
* neve
* mennyit koltott
* melyik evben szuletett

Hozz létre struktúrát az adatoknak!
```
typedef struct {
    string nev;
    int penz;
    int szulev;
} Vasarlo;
```
Hozz létre tömböt, ami struktúrát tartalmaz (max 20 elem számára)
```c++
Vasarlo vasarlok[20];
```
Olvasd be a file sorait getline-nal
```
while(!f.eof()) {
    string line;
    getline(f, line);
}
```
Bontsd fel részeire a sort és tárold egy struktúrában
```
int vege = line.find(" ");
int ejele = vege + 1;
uj.nev = line.substr()
```
Az adatokat írd be a tömbbe

Számítsd ki minden vasárlóról, hogy hány éves az idén.

Keresd ki hogy ki a legfiatalab, írasd ki a nevét.

Kik azok, akik 2000-nél többet költöttek?

Mennyi az átlag vásárlási költség?

Kik költöttek kevesebbet az átlagnál? 

fi = 0;
fiatal = a[0].hev
for(int i = 0; i < n; i++){
    if(fiatal < a[i].hev) {
        fiatal = a[i].hev;
        fi=i
    }
}

a[fi].nev