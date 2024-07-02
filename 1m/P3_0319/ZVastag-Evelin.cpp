#include <iostream>

using namespace std;
void kiir(int* a, int n)
{
    //a fuggveny nem latja a kod tobbi reszet, csak ezt a nehany sort. 
    //Pontosan az a celja a fuggvenyeknek, 
    //hogy altalanosan tudjunk vegrehajtani egy feladatot
    //attol, hogy te tudod, hogy te 7 elemu tombot fogsz adni, 
    //a fuggvenybe nem szabad ilyen konstansokat beleegetni
    //azert kapjuk el a tomb meretet is, hogy addig tudjunk kiiratni.
    //ha 50 a tomb merete, akkor 50et is ki tudjunk irni, ha 1, akkor egyet is.
    for (int i = 0;i < 7;i++)
    {
        //ha a cikluson belul irsz endl-t, akkor minden alkalommal kiirja oket
        //tehat ennek az eredmenye:
        /*
        

        1,



        2,



        3,



        4,

        
        .....
        */
        //ehelyett, nekunk ez kellene:
        /*
        
        1,2,3,4,5,6,7
        
        */
        cout << endl << endl;
        cout << a[i] << ",";
        cout << endl << endl;
    }
}
int lkis(int* a, int n)
{
    //ha a legkisebb elemet keresed, es 0-ra allitod kezdetben, 
    //akkor (valoszinu), hogy egyik elem se lesz nala kisebb 
    //(nem nagyon szoktunk negativ szamod megadni)
    //viszont abban igazad van, hogy valamilyen kezdoerteket kellene neki adni.
    //egy opcio az, hogy adunk neki egy hatalmas szamot, es remeljuk, 
    //hogy a felhasznalo nem csak annal nagyobbakat ad
    //masik opcio, hogy a tombbol veszunk egy erteket
    //ekkor, meg ha nincs is nala kisebb ertek, akkor is a tombbol valasztottuk ki az elemet
    int leg = 0;
    for (int i = 0;i < n;i++)
    {
        //itt pont forditva ellenorzol, igy legnagyobbat keresel legkisebb helyett
        if (a[i] > leg)
        {
            leg = a[i];
        }
    }
    return leg;
}

int main()
{
    cout << "Kerek 7 szamot" << endl;
    for (int i = 0;i < 7;i++)
    {
        int  r[7];
        //ha a zarojelek kozt hozod letre, akkor az csak ott letezik
        //minden alkalommal (azaz itt pontosan 7szer a for miatt), 
        //amikor odaer a zarojel vegere, akkor kitorli az r tombot
        //es amikor ideer, akkor egy teljesen ujat hoz letre
        int f;
        cin >> r[f];
        //az f-nek itt meg nincs erteke, tehat az r[f] egy random helyre mutat

        //r[f] az ertek, f az index. tehat, te itt azt mondod, hogy az i menjen 
        //pl. a k betuig az abc-ben, ahelyett, hogy az abc 11. elemeig
        //masreszt, az, hogy hany eleme van a tombnek, azt a vegen kell csak kiirni
        //te minden alkalommal, amikor beolvasol egy szamot, kiiratod, hogy hany eleme van
        //pontosabban, mivel f-et irsz ki, ezert nem is azt irod hogy hany elem van, 
        //hanem csak visszaadod a felhasznalonak az erteket amit megadott
        //ha viszont tenyleg az f lenne az index, mint ahogy azt a for felteteleben irtad,
        //akkor jo lenne a kiiras, f-et kellene kiirni
        //az a baj, hogy azt mondtad, hogy az f-ben a felhasznalo altal megadott erteket taroljuk (amit amugy nem csinalsz meg)
        for (int i = 0;i < r[f];i++)
        {
            cout << "A tombbnek " << f << " eleme van" << endl;
        }

        //szoval, javitasnak, ez a kiiras nem kellene, hogy for ciklusban legyen, 
        //sot, a kulso for ciklust is mar be kellene zarni elotte.
        //az pedig, hogy milyen valtozot iratsz ki, sok mindentol fugg. 
        //Jelenleg az f egyaltalan nem kapott erteket, tehat azt se tudjuk, hogy mi szeretne lenni

        kiir(r, 7);

        //kimaradt a 6. feladat: "6. Újra írasd ki a tömböt, de most már csak a “hasznos” elemeit, amiket a felhasználó vitt be (a végjelet sem)!"


        //lkis(r,1) itt a tomb meretet kellene megadni (ott, ahova 1-et irtal)
        //ha 1-et adsz meg, akkor csak a tomb elso elemeben keresi 
        //a legkisebb elemet
        cout << "A legkisebb elem a " << lkis(r, 1) << endl;
        //az r[4], az az 5. elem, mivel 0-tol indexelunk. nekunk a 4. elem kell
        if (r[4] % 2 == 0)
        {
            //itt egyaltalan nincs szukseg ciklusra.
            do
            {
                //itt szerinted mi az i?
                //nem lett ez elott deklaralva
                r[4] + i;
            } while (!r[4] == 25);
            {
                //ezek a zarojelek nem csinalnak semmit.
                //nem hiba, de felesleges.
                cout << r[4] << endl;
            }
            //ez igy jo!! csak rossz helyen van. 
            //a kulso if-ben mar megallapitottuk, hogy a 4. elem paros
            //itt hiaba ellenorzod, hogy paratlan-e, mert ha ide bejutottunk, akkor biztos paros.
            //viszont jol csinaltad, igy kellett volna a parosat is ellenorizni.
            //azzal, hogy itt a 7. elemet ellenorzod, amikor a 4.-et kellene
            if (r[7] % 2 == 1)
            {
                //itt viszont nem valtoztatod meg az elem erteket, 
                //csak kiiratod az ujat. 
                //Ezt oda is kell adni egy valtozonak.
                cout << r[4] - 75 << endl;
            }
        }
        //ugyanugy mint fent, itt is a tomb meretet kellene megadni
        lkis(r, 1);

        //mivel reciprokrol van szo, ezert biztos hogy nem egesz szamrol van szo
        int s[7];
        cout << r[7] * 1.0 + (s[7] + 2) << endl;
        int u[7];
        if (r[7] >= 10 || r[i] <= 70)
        {
            cout << u[7] << endl;
        }
        cout << u[7] << endl;
        cout << "Hello world!" << endl;
    }
    return 0;
}

/*
#include <iostream> 

using namespace std; 

void kiir(int* a, int n) { 
    for (int i = 0;i < 7;i++) { 
        cout<<a[i]; 
        if(i!=6) { 
            cout<<","; 
        } 
    } 
} 

int lkis(int* a, int n) { 
    int leg=a[0]; 
    for (int i=0;i<n;i++) { 
        if (a[i]<leg) { 
            leg=a[i]; 
        } 
    } 
    return leg; 
} 
int main() { 
    int r[7]; 
    cout << "Kerek 7 szamot" << endl; 
    // for (int i=0;i<7;i++) 
    int f,i=0;
    do { 
        cin>>f; 
        r[i]=f; 
        i++; 
    }while(!(f==0 || i==7)); 
    kiir(r,i); 
    cout<<"\n""A legkisebb elem a "<<lkis(r,i)<<endl;
    if(r[3]%2==0) {
        do { 
            r[3] + i; 
        } while (!r[3] == 25); 
    { 
        cout << r[4] << endl; 
    } 
    if (r[7] % 2 == 1) { 
        cout << r[4] - 75 << endl; 
        } 
    } 
    lkis(r, 1); 
    int s[7]; 
    cout << r[7] * 1.0 + (s[7] + 2) << endl; 
    int u[7]; 
    if (r[7] >= 10 || r[i] <= 70) { 
        cout << u[7] << endl; 
    } 
    cout << u[7] << endl; 
    cout << "Hello world!" << endl; 
    return 0; 
}
*/