#include <iostream>
#include <ctime>

using namespace std;

void kiir5(int* a, int n)
{
    for (int i = 0; i < n;i++)
    {
        a[i] = 100 + rand() % 21;
        cout << a[i] << " ";
        if (i % 5 == 4)
            cout << endl;
    }
}

int paratlan110(int* a, int n)
{
    int paratlan = 0;
    for (int i = 0; i < n; i++)
    {

        if (a[n] % 2 == 1 && a[n] > 110)
            paratlan++;
    }

    return paratlan;
}
void oszlop5m(int* a, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[n] << " ";
        if (n % 5 == 4)
            cout << endl;
    }
}


int main()
{
    srand(time(0));
    int e[15];


    /*int index=0;
    int n;
    while(index=110)
    {
        n=100+rand()%21;

    }*/



    for (int i = 0; i < 15; i++)
    {
        e[i] = 100 + rand() % 21;
        cout << e[i] << " ";

    }
    cout << endl << endl << "A tombben 15 elem van." << endl;
    cout << endl << endl;
    /*for(int i=0; i<15; i++)
    {

        e[i]=100+rand()%21;
       cout<<e[i]<<" ";
       if (i%5==4)
        cout<<endl;

    }*/
    cout << endl;
    kiir5(e, 15);
    int paratlanok = paratlan110(e, 15);
    cout << endl << endl << "Ennyi elem van amely paratlan es nagyobb mint 110: " << paratlanok << endl;



    int m[15];
    for (int i = 0; i < 15; i++)
    {
        if ((e[i] % 2) == 1)
            e[i] = e[i] - 4;
        if ((e[i] % 2) == 0)
            e[i] = e[i] + 9;

    }

    oszlop5m(m, 15);

    int h[10];





    return 0;
}
