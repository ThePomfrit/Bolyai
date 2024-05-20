#include <iostream>
#include <cmath>

using namespace std;

double atfogo (double a, double b) {
    double atfogo = sqrt(a * a + b * b);
    return atfogo;
}

int main() {
    cout << "Kérem a befogók hosszait! " << endl;
    double befogo1, befogo2;
    cin >> befogo1 >> befogo2;
    double atfogoHossz = atfogo(befogo1, befogo2);
    cout << "Az átfogó hossza " << atfogoHossz << endl;
    return 0;
}