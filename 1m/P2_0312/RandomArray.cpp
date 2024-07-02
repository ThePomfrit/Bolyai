#include <iostream>

using namespace std;

void kiir(int *a, int n) {
    for (int i = 0; i < n; i++) {
        cout << a[i] << "\t";
        if(i % 3 == 2) {
            cout << endl;
        }
    }
    cout << endl;

}

int ketj(int *a, int n) {
    int db = 0;
    for (int i = 0; i < n; i++) {
        if( (a[i] > 10) && (a[i] < 100)) {
            db++;
        }
    }
    return db;
}

int main() {
    int a[10];

    srand(time(0));
    /*for (int i = 0; i < 10; i++) {
        int random = rand() % 196+10;
        if(random != 100) {
            a[i] = random; // 10-205
        }
        else {
            break;
        }

    }*/
    int random = rand() % 196+10;
    int ind = 0;
    while ((random != 100) && (ind < 10)) {
        int random = rand() % 196+10;
        a[ind] = random;
        ind++;
    }

    cout << ind << " elemet vittem be\n";

    kiir(a, ind);

    cout << "ketjegyu szamok szama: " << ketj(a, ind) << endl;

    cout << "----------------osztas utan----------------\n";

    for(int i = 0; i < ind; i++) {
        if (a[i] % 2 == 0) {
            a[i] = a[i] / 2;
        }
    }

    kiir(a, ind);

    cout << "ketjegyu szamok szama: " << ketj(a, ind) << endl;





    return 0;
}