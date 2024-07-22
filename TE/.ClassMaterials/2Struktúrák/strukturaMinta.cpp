#include <iostream>
#include <string>

using namespace std;

    //osszetett felhasznaloi tipus
    //struktura tipus megadas: struktura mezok tipussal es nevvel (kezdoertek nelkul)
    struct utazas
    {
        int ev;
        int honap;
        int nap;
        int hossz;
        string varos;
        string szallas;
        char kaja;
        string jarmu;
    };

    struct haromszog
    {
        double oldalak[3];
        double kerulet, terulet;
    };

    struct zenek
    {
        string eloado,cim,mufaj;
        int hossz;
    };

int main()
{
    //struktura valtozo letrehozasa kezdoerteklistaval
    utazas ideiNyaralas={2023,8,5,10,"Budva","hotel",'i',"busz"};
    cout<<ideiNyaralas.ev<<" ";
    cout<<ideiNyaralas.honap<<" ";
    cout<<ideiNyaralas.nap<<" ";
    cout<<ideiNyaralas.varos<<" ";
    cout<<endl<<endl;


    //struktura valtozo letrehozasa ertekadassal
    utazas tavalyiNyaralas;
    tavalyiNyaralas.ev=2022;
    tavalyiNyaralas.honap=8;
    tavalyiNyaralas.nap=14;
    tavalyiNyaralas.hossz=11;
    tavalyiNyaralas.varos="Sivota";
    tavalyiNyaralas.szallas="apartman";
    tavalyiNyaralas.kaja='n';
    tavalyiNyaralas.jarmu="auto";
    cout<<tavalyiNyaralas.ev<<" "<<tavalyiNyaralas.honap<<" "<<tavalyiNyaralas.nap<<" "<<tavalyiNyaralas.varos<<endl<<endl;


    //tomb is lehet struktura mezo
    haromszog altalanos;
    for(int i=0;i<3;i++)
    {
        cout<<"Add meg a haromszog "<<i+1<<". oldalat!"<<endl;
        cin>>altalanos.oldalak[i];
    }
    altalanos.kerulet=altalanos.oldalak[0]+altalanos.oldalak[1]+altalanos.oldalak[2];
    cout<<"A haromszog kerulete: "<<altalanos.kerulet<<endl<<endl;


    //struktura is lehet tomb elem
    zenek kedvencek[2];
    for(int i=0;i<2;i++)
    {
        cout<<"Add meg az "<<i+1<<". kedvenc eloadod!"<<endl;
        cin>>kedvencek[i].eloado;
        cout<<"Add meg az "<<i+1<<". kedvenc eloadod egyik dalat!"<<endl;
        cin>>kedvencek[i].cim;
        cout<<"Add meg az "<<i+1<<". kedvenc eloadod dalanak mufajat!"<<endl;
        cin>>kedvencek[i].mufaj;
        cout<<"Add meg az "<<i+1<<". kedvenc eloadod szamanak hosszat!"<<endl;
        cin>>kedvencek[i].hossz;
    }

    for(int i=0;i<2;i++)
    {
        cout<<kedvencek[i].eloado<<" eloadotol a kedvenc szamom "<<kedvencek[i].cim<<", amelynek mufaja "<<kedvencek[i].mufaj<<endl;
    }

    return 0;
}
