#include <iostream>
#include<ctime>
#include<cstdlib>

using namespace std;

int main()
{
    //11. feladat
    srand(time(0));

    int i,j,l,m,n,k,ossz=0;

    cout<<"Szorzashoz negyzetes matrixot hasznalunk "<<endl;
    cout<<"vagy az elso matrix oszlopainak szama "<<endl;
    cout<<"megegyezik a masodik matrix sorainak szamaval."<<endl;
    cout<<"Mennyi legyen az elso matrix sorainak szama?"<<endl;
    cin>>n;
    cout<<"Mennyi legyen az elso matrix oszlopainak es a masodik matrix sorainak szama?"<<endl;
    cin>>m;
    cout<<"Mennyi legyen a masodik matrix oszlopainak szama?"<<endl;
    cin>>k;
    cout<<endl<<endl;

    int matrix1[n][m],matrix2[m][k],szorzat[n][k];

    //matrix1 feltoltes veletlen szamokkal
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            matrix1[i][j]=rand()%5+1;
        }
    }

    //matrix2 feltoltes veletlen szamokkal
    for(i=0;i<m;i++)
    {
        for(j=0;j<k;j++)
        {
            matrix2[i][j]=rand()%5+1;
        }
    }

    //matrix1 kiirasa
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cout<<matrix1[i][j]<<"\t";
        }
        cout<<endl;
    }
    cout<<endl<<endl;

    //matrix2 kiirasa
    for(i=0;i<m;i++)
    {
        for(j=0;j<k;j++)
        {
            cout<<matrix2[i][j]<<"\t";
        }
        cout<<endl;
    }
    cout<<endl<<endl;

    //ket matrix szorzasa
    for(i=0;i<n;i++)
    {
        for(j=0;j<k;j++)
        {
            for(l=0;l<m;l++)
            {
                ossz+=matrix1[i][l]*matrix2[l][j];
            }
            szorzat[i][j]=ossz;
            ossz=0;
        }
    }

    //szorzat matrix kiirasa
    for(i=0;i<n;i++)
    {
        for(j=0;j<k;j++)
        {
            cout<<szorzat[i][j]<<"\t";
        }
        cout<<endl;
    }


    return 0;
}
