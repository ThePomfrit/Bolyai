#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;
struct zene
{
    string eloado;
    string cim;
    string mufaj;
    int hossz;
    void kiir()
    {
        cout<<eloado<<" "<<cim<<" "<<mufaj<<" "<<hossz<<endl;
    }
};

int main()
{
    fstream olvas("zene.txt");
    string sor;
    zene z;
    zene zenek[5];
    int i=0;

    if(olvas.is_open())
    {
        while(!olvas.eof())
        {
            getline(olvas,z.eloado);
            getline(olvas,z.cim);
            getline(olvas,z.mufaj);
            getline(olvas,sor);
            stringstream konvertal (sor);
            konvertal>>z.hossz;
            z.kiir();
            zenek[i]=z;
            i++;
        }
    }
    olvas.close();




    return 0;
}
