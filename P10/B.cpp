#include <stdio.h>
#include <iostream>
#include <algorithm>

using namespace std;

void kiir(int *a, int n) {
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main() {
    int a[20] = {-20, -11, -1, 0, 12, 45, 56, 58, 59, 100, 115, 458};
    int n = 12;

    kiir(a, n);
    
    int sorszam = 0;
    cout << "Hanyadik szam: ";
    cin >> sorszam;
    cout << "A(z) " << sorszam << ". szam: " << a[sorszam - 1] << endl;

    int beszur = 0;
    cout << "Melyik szamot szurjam be: ";
    cin >> beszur;

    if(n + 1 > 20) {
        cout << "Nincs eleg hely a tombben!" << endl;
    } else {
        int ind = 0;
        while (ind < n && a[ind] < beszur) {
            ind++;
        }
        for (int i = n; i > ind; i--) {
            a[i] = a[i - 1];
        }
        a[ind] = beszur;
        n++;
    }

    kiir(a, n);

    int torol = 0;
    cout << "Melyik szamot toroljem: ";
    cin >> torol;

    int ind = 0;
    while (ind < n && a[ind] < torol) {
        ind++;
    }
    if(ind == n) {
        cout << "Nincs ilyen szam a tombben!" << endl;
    } else {
        for (int i = ind; i < n - 1; i++) {
            a[i] = a[i + 1];
        }
        n--;
    }

    kiir(a, n);

}