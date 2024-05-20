#include <stdio.h>
#include <iostream>

using namespace std;

int main() {
    char a[15];

    cout << endl;
    cout << "A tömb elemei: ";
    srand(time(0));
    // A ascii kodja 65
    // Z ascii kodja 90
    for(int i = 0; i < 15; i++) {
        a[i] = rand() % 26 + 65;

        // ha visszacsokkentjuk az indexet,
        // akkor az elozo helyre probal irni.
        // (viszont aztan a for novel egyet,
        // igy visszakerulunk ugyanoda, ahol most vagyunk)
        // mivel tudjuk, hogy a jelenlegi helyen olyan van,
        // amit nem fogadhatunk el,
        // ezert vissza kell csokkenteni,
        // hogy ugyanoda megegyszer probaljon irni.
        if(a[i] == 'C' || a[i] == 'R') {
            i--;
        }
        else {
            cout << a[i] << " ";
        }

    }
    cout << endl;

    int maganDB = 0;
    for(int i = 0; i < 15; i++) {
        if(a[i] == 'A' || a[i] == 'E' || a[i] == 'I' || a[i] == 'O' || a[i] == 'U') {
            maganDB++;
        }
    }
    cout << "Maganhangzok szama: " << maganDB << endl;

    for(int i = 0; i < 15; i++) {
        cout << a[i] << " ";
        // A ascii kodja 65, a ascii kodja 97, azaz 97-65 = 32
        // B ascii kodja 66, b ascii kodja 98, azaz 98-66 = 32
        // C ascii kodja 67, c ascii kodja 99, azaz 99-67 = 32
        // ...
        // tehat a kisbetu es nagybetu kozott 32 a kulonbseg
        cout << (char)(a[i] + 32) << endl;
    }

    cout << endl;

    for(int i = 0; i < 15; i++) {
        //ne felejtsunk el kiterni a szelsoseges esetekre (A, Z)
        //itt ketertelmu a feladat, ilyenkor megkerdezhetitek a tanarnot
        //vagy megcsinaljatok ahogy ti gondolatok

        //en ugy gondoltam, hogy ha A-t vagy Z-t talalunk, 
        //akkor ugy vesszuk, mintha az ABD folytonosan ismetlodne, 
        //tehat az A elott Z van, a Z utan pedig A

        //masik megoldas lenne, hogy ha ilyen szelsosegest talalunk, 
        //akkor kihagyjuk a szomszedos betut, es csak 2 betut irunk ki, 
        //tehat A B, vagy Y Z

        if(a[i] == 'A') {
            cout << "Z A B" << endl;
        } else if (a[i] == 'Z') {
            cout << "Y Z A" << endl;
        } else {
            cout << (char)(a[i] - 1) << " " << a[i] << " " << (char)(a[i] + 1) << endl;
        }
    }

}