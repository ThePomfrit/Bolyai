#include <iostream>

using namespace std;

int main() {
    srand(time(0));

    cout << "Kérek egy egyjegyű számot! " << endl;
    int n;
    cin >> n;
    int counter = 0;
    int sum = 0;
    int counterOne = 0;

        // Mivel a feladat nem kéri, hogy ellenőrizzük a megadott számot, 
    // ezért nem garantált, hogy az tényleg egyjegyű lesz.
    // Ezért ha a felhasználó nem fogad szót, 
    // és rögtön 100-nál nagyobb számot ad meg, 
    // akkor egyszer sem adhatunk hozzá véletlen számot.
    // Emiatt, ha do ciklust használnánk, akkor nem teljesítenénk a feladatot
    /*
    do {
        int random = rand() % 41 + 10;
        counter++;
        sum += random;
        if (random / 10 == 1) {
            counterOne++;
        }
        cout << random << " ";
        n += random;
    } while (n < 100);
    */
    // Így még ha 100-nál nagyobb számot kapunk, akkor is adtunk hozzá véletlen számot
    // (pedig nem kellett volna), mivel a do ciklus legalább egyszer lefut.

    // Ezért inkább while ciklust használunk, 
    // mivel a feltétel nem garantáltan teljesül a ciklus első futásakor.
    while (n < 100) {
        int random = rand() % 41 + 10;
        counter++;
        sum += random;
        if (random / 10 == 1) {
            counterOne++;
        }
        cout << random << " ";
        n += random;
    }




    cout << endl;
    cout << "Generált számok száma: " << counter << endl;
    cout << "Generált számok összege: " << sum << endl;
    cout << "1-gyel kezdődő számok száma: " << counterOne << endl;
    double avg = (double)sum / counter;
    cout << "Generált számok átlaga: " << avg << endl;


    return 0;
}