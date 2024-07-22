#include <iostream>

using namespace std;

int main()
{
   int a,b;
   int i,j;

   cout<<"Add meg a matrix dimenziojat!"<<endl;
   cin>>a;
   cin>>b;
   cout<<endl;

   int m[a][b];

   //1. feladat
   //matrix feltoltese
   for(i=0;i<a;i++)
   {
       for(j=0;j<b;j++)
       {
           cout<<"Add meg a "<<i<<". sor "<<j<<". oszlop elemet!"<<endl;
           cin>>m[i][j];
       }
   }
   cout<<endl;

   //matrix kiirasa
   for(i=0;i<a;i++)
   {
       for(j=0;j<b;j++)
       {
           cout<<m[i][j]<<"\t";
       }
       cout<<endl;
   }
   cout<<endl<<endl;

    //egy sor feldolgozasa - 2. sor: fix i=1
    cout<<"2. sor:"<<endl;
    for(j=0;j<b;j++)
    {
        cout<<m[1][j]<<"\t";
    }
    cout<<endl<<endl;

    //egy oszlop feldolgozasa - 3. oszlop: fix j=2
    cout<<"3. oszlop:"<<endl;
    for(i=0;i<a;i++)
    {
        cout<<m[i][2]<<"\n";
    }
    cout<<endl<<endl;

    //oszloponkenti feldolgozas: transzponalt matrix
    cout<<"Sorokbol oszlopok lesznek:"<<endl;
    for(j=0;j<a;j++)
    {
       for(i=0;i<b;i++)
       {
           cout<<m[i][j]<<"\t";
       }
       cout<<endl;
    }
   cout<<endl<<endl;


    //2. feladat
    //matrix feltoltes es soronkenti kiiras egyben

    for(i=0;i<a;i++)
    {
        cout<<endl;
        for(j=0;j<b;j++)
        {
            cout<<"Add meg a "<<i<<". sor "<<j<<". oszlop elemet!"<<endl;
            cin>>m[i][j];
        }
        cout<<endl;
        for(j=0;j<b;j++)
        {
            cout<<m[i][j]<<"\t";
        }
        cout<<endl;
    }


   return 0;
}
