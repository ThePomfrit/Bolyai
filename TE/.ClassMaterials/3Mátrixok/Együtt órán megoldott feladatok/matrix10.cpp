#include <iostream>
#include<ctime>
#include<cstdlib>

using namespace std;

int main()
{
    //10. feladat
    srand(time(0));

    int i,j,m,n;

    cout<<"Szorzashoz negyzetes matrixot hasznalunk."<<endl;
    cout<<"Mennyi legyen a sorok szama?"<<endl;
    cin>>n;
    cout<<"Mennyi legyen az oszlopok szama?"<<endl;
    cin>>m;
    cout<<endl<<endl;

    int matrix1[n][m],matrix2[n][m],osszeg[n][m];

    //matrix feltoltes veletlen szamokkal
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            //feltoltes begepelessel
            //cout<<"Add meg a ["<<i<<"]["<<j<<"] elemet."<<endl;
            //cin>>matrix1[i][j];
            matrix1[i][j]=rand()%21-10;
            matrix2[i][j]=rand()%21-10;
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
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cout<<matrix2[i][j]<<"\t";
        }
        cout<<endl;
    }
    cout<<endl<<endl;

    //matrixok osszeadasa
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            osszeg[i][j]=matrix1[i][j]+matrix2[i][j];
        }
    }

    //osszeg matrix kiirasa
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cout<<osszeg[i][j]<<"\t";
        }
        cout<<endl;
    }


    return 0;
}
