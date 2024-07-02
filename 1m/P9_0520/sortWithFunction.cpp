#include <iostream>
#include <algorithm>
#include <fstream>

using namespace std;

typedef struct{
   string nev = "";
   int ido100 = 0;
   int idovan = 0;
} Mozgas;

void kiirtomb(Mozgas* x, int n) {
    cout << endl;
    for (int i = 0; i < n; i++)
        cout << x[i].nev << " " << x[i].ido100 << " " << x[i].idovan << endl;
    cout << endl;
}

bool abcd(Mozgas m1, Mozgas m2) {
    if (m1.nev < m2.nev){
        return true;
    } else {
        return false;
    }
}


int main()
{
    /*
    int a[10] = {5,89, 45, 10, 72, 80, 25, 14, -10, 51};
    sort(a, a + 10);      //egyszeru tomb rendezese
    for(int i = 0; i < 10; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    */
    ifstream be;
    be.open("sport.txt");
    if (!be.is_open())
    {
        cout << "Hiba!";
        return 0;
    }
    Mozgas uj, mind[20];
    int index = 0;
    while(!be.eof() && index < 20)
    {
       be >> uj.nev >> uj.ido100 >> uj.idovan;
       mind[index] = uj;
       index++;
    }
    if(!be.eof() && index == 20)
        {
            cout << "Nem tudtam minden adatot tarolni. \n";
            return 0;
        }
    /*
        for(Mozgas x : mind)
        {
           cout<<x.nev<<"\t"<<x.ido100<<"\t"<<x.idovan<<endl;
        }
    */
    kiirtomb(mind, index);
    //rendezzuk ABC szerint
    sort(mind, mind + index, abcd);
    kiirtomb(mind, index);

    return 0;
}