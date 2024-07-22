#include <iostream>
#include<fstream>
#include<string>
#include<sstream>

using namespace std;

int paratlanok[100],ketjegyuek[100];

int osszeg(int szamok[],int hossz)
{
    int ossz=0;
    for(int i=0;i<hossz;i++)
        ossz=ossz+szamok[i];
    return ossz;
}

int negativ(int szamok[],int hossz)
{
    int neg=0;
    for(int i=0;i<hossz;i++)
    {
        if(szamok[i]<0)
            neg++;
    }
    return neg;
}


int paratlan(int szamok[],int hossz)
{
    int j=0;
    for(int i=0;i<hossz;i++)
    {
        if(szamok[i]%2==1 || szamok[i]%2==-1) //szamok[i]%2!=0
        {
            paratlanok[j]=szamok[i];
            j++;
        }
    }
    return j;
}

void kiir(int tomb[],int hossz)
{
    for(int i=0;i<hossz;i++)
        cout<<tomb[i]<<"  ";
    cout<<endl;
}

int ketjegyu(int szamok[],int hossz)
{
    int j=0;
    for(int i=0;i<hossz;i++)
    {
        if((szamok[i]>9 && szamok[i]<100) || (szamok[i]<-9 && szamok[i]>-100))
        {
            ketjegyuek[j]=szamok[i];
            j++;
        }
    }
    return j;
}

int main()
{
    //fajbol olvasas
    fstream olvas("szamok30.txt");
    int t[100];
    int i=0,szamlalo=0,ossz,n,p,k;
    string adat;

    if(olvas.is_open())
    {
        while(!olvas.eof())
        {
            getline(olvas,adat);
            stringstream konvertal(adat);
            konvertal>>t[i];
            //t[i]=stoi(adat);
            cout<<t[i]<<"  ";
            szamlalo++; //tomb tenyleges elemszama
            i++;
        }
        cout<<endl<<"Tomb elemszama: "<<szamlalo<<endl;
        olvas.close();
    }
    else
        cout<<"HIBA a fajbol olvasaskor!"<<endl;

    //a feladat
    ossz=osszeg(t,szamlalo);
    cout<<"Szamok osszege: "<<ossz<<endl;

    //b feladat
    n=negativ(t,szamlalo);
    cout<<"Negativ elembol ennyi van: "<<n<<endl;

    //c feladat
    p=paratlan(t,szamlalo);
    cout<<"Ennyi paratlan szam van: "<<p<<endl;
    kiir(paratlanok,p);

    //d feladat
    k=ketjegyu(t,szamlalo);
    cout<<"Ennyi ketjegyu szam van: "<<k<<endl;
    kiir(ketjegyuek,k);

    //fajba iras
    fstream ir("szamok30Beredmeny.txt");

    if(ir.is_open())
    {
        ir<<"A szamok osszege: "<<ossz<<endl<<endl<<"Negativ szambol ennyi van: "<<n<<endl<<endl;

        ir<<"Paratlan szamok: ";
        for(int i=0;i<p;i++)
            ir<<paratlanok[i]<<"  ";
        ir<<endl<<endl;

        ir<<"Ketjegyu szamok: ";
        for(int i=0;i<k;i++)
            ir<<ketjegyuek[i]<<"  ";
        cout<<endl<<endl;

        ir.close();
    }
    else
    {
        cout<<"Hiba a fajlba iraskor!"<<endl;
    }

    return 0;
}
