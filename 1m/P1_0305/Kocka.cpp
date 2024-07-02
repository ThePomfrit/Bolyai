#include <iostream>

using namespace std;

int kocka (int a) {
    int volume = a * a * a;
    return volume;
}

int main() {
    cout << "Kérem a kocka élének hosszát! " << endl;
    int elhossz;
    cin >> elhossz;
    int terfogat = kocka(elhossz);
    cout << "A kocka térfogata " << terfogat << endl;
    return 0;
}
