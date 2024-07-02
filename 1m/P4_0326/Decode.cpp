/*
A gyakorlat.txt fileba másold át a következő kódokat:
f4215
f2319
l1321
l2222
l1303
f2110
Az első karakter azt jelöli, hogy fiú vagy lány a szemény akinek a kódot adták
A második karakter - hanyadik osztályos
A harmadik karakter:
    1-matekos
    2-képzős
    3-infós
4-5. karakter - az évszám, amikor a kódot kapta
Pl.: 
F4215 a kódja annak a fiúnak, aki 2015-ben negyedikes volt a képzős szakon
Feladat:Mindegyik kódhoz írasd ki a megfelelő mondatot
*/

#include <iostream>
#include <fstream>

using namespace std;

int main() {
    string kod;
    ifstream f;
    f.open("gyakrolat.txt");
    cout << "string";



    while(!f.eof()) {
        f >> kod;
        cout << kod;
        cout << " a kodja annak a ";
        if(kod[0] == 'f') {
            cout << "fiunak, ";
        } else {
            cout << "lanynak, ";
        }
        cout << "aki 20";
        cout << kod[3] << kod[4] << "-ben ";
        cout << kod[1] << ". osztályos ";
        cout << "volt a ";
        if(kod[2] == '1') {
            cout << "matematikus ";
        } else if(kod[2] == '2') {
            cout << "képzős ";
        } else {
            cout << "infós ";
        }
        cout << "szakon." << endl;
    }


    return 0; 
}

/*
F4215 a kodja annak a....
*/