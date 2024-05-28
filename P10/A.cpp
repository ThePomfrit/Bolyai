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



}