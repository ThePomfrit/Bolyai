#include <iostream>
#include <ctime>

using namespace std;

void kiir5(int* a, int n)
{
    for (int i = 0;i < n;i++)
    {
        //ha i-t iratsz ki, akkor csak sorban irtad ki a szamokat
        //nekunk nem a sorszam kell, hanem az ertek
        //ha pl, nem szamokat tarolnank, hanem karaktereket,
        //akkor azokat iratnad ki, nem a sorszamukat
        //az a kerdes, hogy az abc 5. helyen milyen karakter van
        //nem pedig, hogy irjuk ki, hogy 5
        cout << i << "\t";
        if (i % 5 == 4)
            cout << endl;
    }

}

int paratlan110(int* a, int n)
{
    //mivel darabszamot kellene visszaadni, azzal kezdjuk,
    //hogy csinalunk egy szamlalo valtozot
    //pl int db = 0;

    for (int i = 1;i < n;i = i + 2)
    {
        //ugyanugy, mint az elso fuggvenyben, itt is az i-t iratod ki
        //nem a szamokat. Megkerdezzuk, h mi a 23. betu az abc-ben, 
        //es te azt mondod ra, hogy 23
        if (i > 110 && i % 2 == 1)
            //a felteteled amugy jo lenne, csak az erteket kellene vizsgalni
            cout << endl;
            //kiirni viszont semmit nem kell ebben a fuggvenyben
            //ehelyett meg kellene szamolni, hogy hany darab ilyen szam van
        cout << i << " ";
    }

    //mivel megadtuk, hogy int a fuggveny visszateresi erteke,
    //ezert vissza kell adni egy szamot
    //ezt a szamot te nem is hoztad letre
}

int main()
{
    srand(time(0));
    int e[15];
    for (int i = 0;i < 15;i++)
    {
        e[i] = 15 + rand() % 21; 
        // ha csak 15-öt adunk hozzá, akkor 15-35 közötti számokat kapunk
        // nekunk 100-120 kell
        cout << e[i] << " ";
        //a feladat azt keri, hogy a kiir5 fuggveny irja ki, 
        //szoval itt nem kellene kiiratni

    }
    cout << endl << endl;
    //erre szinten nincs itt szukseg

    //kimaradt viszont, hogy kiirjuk, vegul hany elemmel lett feltolve a tomb
    //ezt te nem is szamoltad ki
    kiir5(e, 15);
    cout << kiir5 << endl;
    //a kiir hivasa (2 sorral feljebb) mar kiirta a szamokat
    //nem kell a foggvenyt cout-ba irni
    //masreszt, itt rosszul is hivod meg, hianyzik a zarojel
    cout << endl;
    int paratlan = paratlan110(e, 15);
    //itt viszont tudod, hogy szamot kellene visszaadnia, es meg jol is hivod meg a fuggvenyt
    cout << "A 110 nel nagyobb paratlan szam: " << paratlan << endl;
    cout << endl;
    //jol is iratod ki, csak a visszateresi erteked ures lesz, mivel maga a fuggveny nem jo.
    int m[15];
    for (int i = 1;i < 15;i += 2)
    {
        if (i % 2 == 1)
            m[i] = e[i] - 4;
        //cout<<m[i]<<" ";
    }
    cout << endl << endl;
    for (int i = 0;i < 15;i++)
    {
        if (i % 2 == 0)
            m[i] = e[i] + 9;
        //cout<<m[i]<<" ";
    }
    //az m feltoltese teljesen jo!!!
    //a kiiratasra viszont nem itt lenne szukseg, hanem a kiir5 fuggvenyben,
    //habar ezt a feladat nem specifikalja, barmikor amikor olyat csinalunk
    //amire mar van fuggvenyunk, akkor a fuggvenyt tessek hasznalni!
    for (int i = 0;i < 15;i++)
    {
        cout << m[i] << "\t";
        if (i % 5 == 4)
            cout << endl;
    }
    cout << endl << endl;
    //kimaradt a 11. feladat: mi a m tombben a 110-nel nagyobb paratlan szamok szama? ezt ki is kellene irni


    int h[10];
    for (int i = 0;i < 10;i++)
    {
        //nem figyeltel arra, hogy ne legyenek lyukak a tombben
        //pl.:
        //e = {100 101 142 122 173 195}
        //h = {100 ??? ??? ??? ??? 195}
        //ehelyett:
        //h = {100 195}
        if (e[i] % 5 == 0)
            e[i] = h[i];
        cout << h[i] << endl;
    }

    //a 14-17re gondolom nem jutott idod, nem baj


    return 0;
}


