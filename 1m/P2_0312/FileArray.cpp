#include <iostream>
#include <fstream>

using namespace std;

int ketj(int *a, int n) {
    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += a[i];
    }
    return sum;
}

int main() {
    int a[15];
    
    ifstream f("xx.txt");
    if(!f.is_open()) {
        printf("Error opening file\n");
        return 1;
    }

    int i = 0;
    while(!f.eof() && (i < 15)) {
        f >> a[i];
        //cout << a[i] << " ";
        i++;
    }
    //cout << endl;

    cout << i << " darab szamot olvastam be\n";

    cout << "A szamok osszege: " << ketj(a, i) << endl;

    cout << "A szamok atlaga: " << (float)ketj(a, i) / i << endl;




    return 0;
}