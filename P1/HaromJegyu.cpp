#include <iostream>

using namespace std;

int main() {
    int number;

    // azt kell átgondolni, hogy egyszer megengedhetjük-e, hogy lefusson a do ciklus
    do {
        cout << "Kérek egy háromjegyű számot! " << endl;
        cin >> number;
    } while (number < 100 || number > 999);

    // ugyenezt elérhetnénk a következő módon is:
    /*
    cout << "Kérek egy háromjegyű számot! " << endl;
    cin >> number;
    while (number < 100 || number > 999) {
        cout << "Kérek egy háromjegyű számot! " << endl;
        cin >> number;
    }
    */
   // ugyanazt érjük el, viszont több sorban kellett leírnunk.
   // mivel egyszer mindenképp lefut az adatbekérés (16-17. sor) (bármilyen feltétel nélkül), ezért a do ciklus használata itt indokolt.

    // A feladat hátralevő része már cikluson kívül oldható meg,
    // mivel nem kell minden megadott adatra elvégezni a műveleteket.
    // Ha ez is a ciklusokon belül lenne, akkor feleslegesen végeznénk el ezeket a műveleteket, nekünk nem megfelelő számokra.
    // Például:
    // Ha szeretnél egy almát felvágni négybe, és sorba adogatnak a kezedbe más gyümölcsöket, akkor ezeket nem fogod felvágni, mert nem almák.
    // Inkább kérsz egy másik gyümölcsöt, mindaddig, amíg az nem alma. Ekkor nem kérsz több gyümölcsöt, hanem felvágod az almát.
    int eleventh = number % 10 * 10 + number % 10;
    int plusSeven = eleventh + 7;

    cout << "Az utolsó számjegyből alkotott 11 többszöröse " << eleventh << ", és az annál 7-tel nagyobb szám " << plusSeven << endl;
    return 0;
}

