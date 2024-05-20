#include <iostream>

using namespace std;

void kiirsorba(int *a, int n) {
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    cout << endl;
}

int pindossz(int *a, int n) {
    int sum = 0;
    for(int i = 0; i < n; i += 2) {
        sum += a[i];
    }
    return sum;
}

int main() {
    int a[7] = {2, -10, 8, 3, 11, 20, 7};

    kiirsorba(a, 7);

    int haromszoros[7];
    for (int i = 0; i < 7; i++) {
        haromszoros[i] = a[i] * 3;
    }

    kiirsorba(haromszoros, 7);

    cout << "Páros indexű elemek összege a tombben: " << pindossz(a, 7) << endl;
    cout << "Páros indexű elemek összege a haromszoros tombben: " << pindossz(haromszoros, 7) << endl;

    cout << "Paros indexu elemek atlaga az a tombben: " << (float)pindossz(a, 7) / 4 << endl;

    return 0;
}