/*C feladat
Misi kedvenc „étele” a madártej. Kell hozzá 0,8 liter tej, 5 tojás, 0,3 kg cukor 2 csomag vaníliás puding. Ebből 2 adag lesz. 
A hozzávalók boltonként más-más áron kerülnek a polcra, ezért írjunk programot arra, hogy kiszámítsuk egy adag árát.

Hozz létre struktúrát: bolt neve, tej ára din/liter, tojás ára din/db, cukor ára din/kg, vaníliás puding  din/csomag. Az árak lehetnek egész számok
Vigyük be 3 boltból a termékek árait, tároljuk őket fileban!
pl. 
bolt1   100 	20     70	30
bolt2	125	    22     65   40
bolt3   140     20     58   30
bolt4   135     19     88   42

Olvassuk vissza a fileból az adatokat, listázzuk ki a képernyőre táblázatos formában. 
Számítsuk ki mindegyik esetben, hogy mennyibe kerül egy adag madártej alapanyaga. 

A munkadíj és egyéb költségek címén az eddig kiszámított összeg 70%-át számoljuk még el. 
Egy másik fileba írjuk ki: a bolt nevét és egy adag költségét anyagi és tobábbi költségekre bontva.
Pl. bolt1  130,5 + 91,35 = 221,85
*/

#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

struct Bolt {
    string nev;
    int tejAr;
    int tojasAr;
    int cukorAr;
    int pudingAr;
};

int main() {
    ifstream f;

    //array of 3 shops
    f.open("in.txt", ios::in);
    if(!f.is_open()) {
        cout << "Error opening file" << endl;
        return 1;
    }

    Bolt bolt[3];
    int i = 0;
    while (!(f.eof()) && (i < 3)) {
        string line;
        getline(f, line);
        bolt[i].nev = line.substr(0, line.find(" "));
        line = line.substr(line.find(" ") + 1);
        bolt[i].tejAr = stoi(line.substr(0, line.find(" ")));
        line = line.substr(line.find(" ") + 1);
        bolt[i].tojasAr = stoi(line.substr(0, line.find(" ")));
        line = line.substr(line.find(" ") + 1);
        bolt[i].cukorAr = stoi(line.substr(0, line.find(" ")));
        line = line.substr(line.find(" ") + 1);
        bolt[i].pudingAr = stoi(line.substr(0, line.find(" ")));
        i++;
        // cout << "--" << bolt[i].pudingAr << line << "--" << endl;
    }   
    f.close();

    //print the shops
    cout << "Nev\tTej\tTojas\tCukor\tPuding" << endl;
    cout << "----------------------------------------" << endl;
    for(int j = 0 ; j < i; j++) {
        cout << bolt[j].nev << "\t";
        cout << bolt[j].tejAr << "\t";
        cout << bolt[j].tojasAr << "\t";
        cout << bolt[j].cukorAr << "\t";
        cout << bolt[j].pudingAr << "\n";
    }

    //calculate the price of the ingredients
    int ar[3];
    for(int j = 0; j < i; j++) {
        ar[j] = 0;
        ar[j] += bolt[j].tejAr * 0.8; //0+80=80
        ar[j] += bolt[j].tojasAr * 5; //80+100=180
        ar[j] += bolt[j].cukorAr * 0.3; //180+21=201
        ar[j] += bolt[j].pudingAr * 2;  //201+60=261
    }

    ofstream ff;
    ff.open("out.txt");
    
    for(int i = 0; i < 3; i++) {
        ff << bolt[i].nev << "\t" << ar[i] << " + " << ar[i] * 0.7 << " = " << ar[i] * 1.7 << endl;
    }




}