#include <iostream>

using namespace std;

int main() {
    char letter;
    do {
        cout << "Kérek egy kisbetűt! " << endl;
        cin >> letter;
    } while (letter < 97 || letter > 122);
    // ascii táblázatból láthatjuk, hogy a kisbetűk kódjai 97 és 122 között vannak
    // Az első feladathoz hasonlóan a do ciklus használata itt indokolt, 
    // mivel egyszer mindenképp lefut az adatbekérés.

    // Ahhoz, hogy a kis a-ból nagy A legyen, meg kell keresnünk, 
    // hogy mekkora a kettő közt a távolság.
    // A kis a kódja 97, a nagy A kódja 65, tehát 32 a különbség.
    // Mivel párhuzmosan nővekednek a számok, 
    // ezért ez a különbség nem csak az a-ra igaz,
    // hanem minden betűre.

    char bigLetter = letter - 32;

    //mivel háromszor kell kiírni, kell egy for ciklus, ami háromszor fut le.
    for (int i = 0; i < 3; i++) {
        cout << bigLetter << endl;
        // A feladat kér közéjük egy-egy üres sort is, 
        // ezért nem elég egy endl, kettő kell.
        cout << endl;
    }

    
    return 0;
}