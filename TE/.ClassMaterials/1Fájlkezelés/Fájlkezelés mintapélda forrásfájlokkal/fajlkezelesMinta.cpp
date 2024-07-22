#include <iostream>
#include<string>
#include<fstream> //fájlkezeléshez

using namespace std;

int main()
{
    //soronként beolvasás fájlból
    fstream fajlSor("SzamokSor.txt"); //fájl objektum
    string sor; //egy sor kiolvasásához
    if(fajlSor.is_open()) //ha sikerült megnyitni a fájlt, akkor dolgozhatunk vele
    {
        while(!fajlSor.eof()) //addig olvasunk a fájlból, amíg a végére nem érünk
        {
            getline(fajlSor,sor); //egy sor kiolvasása
            cout<<sor<<endl;
        }
        fajlSor.close(); //munka után bezárjuk a fájlt
    }
    else
        cout<<"Hiba a fajl nyitasaban!"<<endl;
    cout<<endl<<endl;


    //szavankénti beolvasás fájlból
    fstream fajlSzo("VarosokSzo.txt");
    string szo; //egy szó kiolvasásához
    if(fajlSzo.is_open())
    {
        while(!fajlSzo.eof())
        {
            fajlSzo>>szo; //egy szó kiolvasása
            cout<<szo<<endl;
        }
        fajlSzo.close();
    }
    else
        cout<<"Hiba a fajl nyitasaban!"<<endl;
    cout<<endl<<endl;


    //fájlba írás (felülírás történik minden futtatásnál)
    fstream fajlUres("Ures.txt");
    if(fajlUres.is_open())
    {
        for(int i=1;i<=10;i++)
        {
            fajlUres<<i*i<<"    "; //ugyanúgy írunk fájlba, mint a konzolra
        }
        fajlUres<<"\nEz a fajl utolso sora.";
        fajlUres.close();
        cout<<"A fajlba iras megtortent.";
    }
    else
        cout<<"Hiba a fajl nyitasaban!"<<endl;
    cout<<endl<<endl;


    //hozzáfűzés fájlhoz
    fstream fajlhozFuzes("SzamokSor.txt",ofstream::app); //app helyett trunc, ha felül szeretnénk írni a fájlt
    if(fajlhozFuzes.is_open())
    {
        fajlhozFuzes<<endl;
        for(int i=10;i>0;i--)
        {
            fajlhozFuzes<<i<<endl;
        }
        fajlhozFuzes.close();
        cout<<"A fajlhoz fuzes megtortent.";
    }
    else
        cout<<"Hiba a fajl nyitasaban!"<<endl;
    cout<<endl<<endl;


    return 0;
}
