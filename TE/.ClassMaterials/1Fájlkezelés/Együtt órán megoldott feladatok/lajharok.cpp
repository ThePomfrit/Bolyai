#include <iostream>
#include<fstream>
#include<sstream>

using namespace std;

struct lajhar
{
    string nev;
    int kor;
    int tomeg;
    string nem;
    int utod;

    void kiir()
    {
        cout<<nev<<"  "<<kor<<"  "<<tomeg<<"  "<<nem<<"  "<<utod<<endl;
    }
};

struct par
{
    string egyik;
    string masik;

    void kiir()
    {
        cout<<egyik<<"  "<<masik<<endl;
    }
};

int nostenyek(lajhar lajharok[7])
{
    int n=0;
    for(int i=0;i<7;i++)
    {
        if(lajharok[i].nem=="nosteny")
            n++;
    }
    return n;
}

int kolykok(lajhar lajharok[7])
{
    int k=0;
    for(int i=0;i<7;i++)
    {
        if(lajharok[i].nem=="him")
            k=k+lajharok[i].utod;
    }
    return k;
}


int main()
{
    fstream olvas("lajharok.txt");
    lajhar l;
    lajhar lajharok[7];
    string sor;
    int i=0,n,k,K=0;
    par p;
    par parok[3];

    if(olvas.is_open())
    {
        while(!olvas.eof())
        {
            getline(olvas,l.nev);
            getline(olvas,sor);
            stringstream konvertal(sor);
            konvertal>>l.kor;
            getline(olvas,sor);
            stringstream konv(sor);
            konv>>l.tomeg;
            getline(olvas,l.nem);
            getline(olvas,sor);
            stringstream k(sor);
            k>>l.utod;
            l.kiir();
            lajharok[i]=l;
            i++;
        }
    }
    else
        cout<<"HIBA!"<<endl;

    olvas.close();

    cout<<endl;
    n=nostenyek(lajharok);
    cout<<"Nostenyek szama: "<<n<<endl;

    k=kolykok(lajharok);
    cout<<"Himek kolykeinek szama: "<<k<<endl;

    for(i=0;i<6;i++)
    {
        for(int j=i+1;j<7;j++)
        {
            if(lajharok[i].nem!=lajharok[j].nem && lajharok[i].utod==lajharok[j].utod && lajharok[i].utod!=0)
            {
                p.egyik=lajharok[i].nev;
                p.masik=lajharok[j].nev;
                //p.kiir();
                parok[K]=p;
                K++;
            }
        }
    }

    for(i=0;i<3;i++)
    {
        parok[i].kiir();
    }

    fstream ir("lajharokEredmeny.txt",ofstream::out);

    ir<<"Nostenyek szama: "<<n<<endl;
    ir<<"Himek kolykeinek szama: "<<k<<endl;
    ir<<"Parok: ";
    for(i=0;i<3;i++)
    {
        ir<<parok[i].egyik<<"  "<<parok[i].masik<<endl;
    }

    ir.close();

    return 0;
}
