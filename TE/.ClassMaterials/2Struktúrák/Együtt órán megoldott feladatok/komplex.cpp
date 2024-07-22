#include <iostream>
#include<ctime>
#include<cstdlib>

using namespace std;

struct komplex
{
    int Re;
    int Im;
};

void kiir(int r,int i)
{
    if(r!=0)
    {
        if(i<=-2)
            cout<<r<<i<<"i"<<endl;
        else if(i>=2)
            cout<<r<<"+"<<i<<"i"<<endl;
        else if(i==1)
            cout<<r<<"+"<<"i"<<endl;
        else if(i==-1)
            cout<<r<<"-"<<"i"<<endl;
        else //i==0
            cout<<r<<endl;
    }
    else //r==0
    {
        if(i<=-2)
            cout<<i<<"i"<<endl;
        else if(i>=2)
            cout<<i<<"i"<<endl;
        else if(i==1)
            cout<<"i"<<endl;
        else if(i==-1)
            cout<<"-"<<"i"<<endl;
        else //i==0
            cout<<"Nincs komplex szam, azaz az erteke 0."<<endl;
    }



}

komplex osszead(komplex k1,komplex k2)
{
    komplex osszeg;
    osszeg.Re=k1.Re+k2.Re;
    osszeg.Im=k1.Im+k2.Im;
    return osszeg;
}

komplex szoroz(komplex k1,komplex k2)
{
    komplex szorzat;
    szorzat.Re=k1.Re*k2.Re-k1.Im*k2.Im;
    szorzat.Im=k1.Re*k2.Im+k1.Im*k2.Re;
    return szorzat;
}


int main()
{
    srand(time(0));
    komplex k1={rand()%19-9,rand()%19-9};
    komplex k2={rand()%19-9,rand()%19-9};
    komplex osszeg=osszead(k1,k2);
    /*komplex a,b;
    a.Re=2;
    a.Im=3;
    b.Re=3;
    b.Im=2;*/
    komplex szorzat=szoroz(k1,k2);
/*
    cout<<"Kiiras fuggveny tesztelese:"<<endl;
    kiir(7,-5);
    kiir(-6,9);
    kiir(4,1);
    kiir(8,-1);
    kiir(-3,0);
    kiir(0,-5);
    kiir(0,9);
    kiir(0,1);
    kiir(0,-1);
    kiir(0,0);
    cout<<endl<<endl;
*/
    cout<<"Elso komplex szam: ";
    kiir(k1.Re,k1.Im);
    cout<<"Masodik komplex szam: ";
    kiir(k2.Re,k2.Im);
    cout<<"Ket komplex szam osszege: ";
    kiir(osszeg.Re,osszeg.Im);
    cout<<"Ket komplex szam szorzata: ";
    kiir(szorzat.Re,szorzat.Im);


    return 0;
}
