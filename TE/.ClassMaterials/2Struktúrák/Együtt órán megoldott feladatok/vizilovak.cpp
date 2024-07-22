#include <iostream>
#include<fstream>
#include<sstream>

using namespace std;

struct vizilo
{
    string nev;
    int szulEv;
    string nem;
    int tomeg;

    void kiir()
    {
        cout<<nev<<"  "<<szulEv<<"  "<<nem<<"  "<<tomeg<<endl;
    }
};

int himek(vizilo v[6])
{
    int h=0;
    for(int i=0;i<6;i++)
    {
        if(v[i].nem=="him")
            h++;
    }
    return h;
}

int legfiatalabb(vizilo v[6])
{
    int legfiatalabbIndexe;
    int fiatal=0;
    for(int i=0;i<6;i++)
    {
        if(v[i].szulEv>fiatal)
        {
            fiatal=v[i].szulEv;
            legfiatalabbIndexe=i;
        }
    }
    return legfiatalabbIndexe;
}

void tizeves(vizilo v[6])
{
    int i;
    fstream ir("vizilovakEredmeny.txt");
    for(i=0;i<6;i++)
    {
        if(2023-v[i].szulEv==10)
        {
            cout<<"Van 10 eves vizilo."<<endl;
            ir<<"Van 10 eves vizilo."<<endl;
            break;
        }
    }
    if(i==6)
    {
        cout<<"Nincs 10 eves vizilo."<<endl;
        ir<<"Nincs 10 eves vizilo."<<endl;
    }
    ir.close();
}

int egyTonna(vizilo v[6])
{
    int db=0;
    for(int i=0;i<6;i++)
    {
        if(v[i].tomeg>=1000)
            db++;
    }
    return db;
}

int main()
{
    fstream olvas("vizilovak.txt");
    vizilo v;
    vizilo vizilovak[6];
    int i=0,himekSzama,index,t;
    string sor;

    if(olvas.is_open())
    {
        while(!olvas.eof())
        {
            //getline(olvas,sor);  fejlec eseten plusz egy sor beolvasasa
            getline(olvas,v.nev);
            getline(olvas,sor);
            stringstream konvertal(sor);
            konvertal>>v.szulEv;
            getline(olvas,v.nem);
            getline(olvas,sor);
            stringstream konv(sor);
            konv>>v.tomeg;
            v.kiir();
            vizilovak[i]=v;
            i++;
        }
    }
    else
        cout<<"HIBA!"<<endl;

    olvas.close();

    cout<<endl;
    himekSzama=himek(vizilovak);
    cout<<"Himek szama: "<<himekSzama<<endl<<endl;

    index=legfiatalabb(vizilovak);
    cout<<"Legfiatalabb indexe: "<<index<<endl;
    cout<<"Legfiatalabb neve: "<<vizilovak[index].nev<<endl<<endl;

    tizeves(vizilovak);

    t=egyTonna(vizilovak);
    cout<<t<<" darab legalabb egy tonnas vizilo van."<<endl;

    fstream iras("vizilovakEredmeny.txt",ofstream::app);
    iras<<endl;
    iras<<"Himek szama: "<<himekSzama<<endl<<endl;
    iras<<"Legfiatalabb indexe: "<<index<<endl;
    iras<<"Legfiatalabb neve: "<<vizilovak[index].nev<<endl<<endl;
    iras<<t<<" darab legalabb egy tonnas vizilo van."<<endl;

    iras.close();

    return 0;
}
