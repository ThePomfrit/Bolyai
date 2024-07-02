#include <iostream>

using namespace std;

int main()
{
    int a[20] = {23, 31, 42, 50, 89, 90, 91, 102, 107};
    int n = 9;

    //irjunk az elejere 12
    for(int i = n; i >= 1; i--) {
        a[i] = a[i-1];
    }
    a[0] = 12;
    n++;
    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    //torold az utolso elemet
    n--;
    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    //irjuk a vegere 600-at
    a[n] = 600;
    n++;

    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    //csereld ki a 8. elemet 100-ra
    a[7] = 100;
    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    //kiderult, hogy az 50 helyett 500-at kellett volna irni
    //toroljuk az 50-et
    int ind = 0;
    while(a[ind] < 50){
        ind++;
    }

    if (a[ind] == 50) { //megvan az 50, kitoroljuk
        for(int i = ind; i < n - 1; i++)
        {
            a[i] = a[i+1];
        }
        n--;
    }
    else
    {
       cout << "a tombben nincs benne az 50\n";
    }


    for(int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
    
    //beirjuk az 500-at
    ind = 0;
    while(a[ind] < 500)
        ind++;

    for(int i = n; i > ind; i--)
    {
        a[i] = a[i-1];
    }
    a[ind] = 500;
    n++;
    for(int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;

    return 0;
}