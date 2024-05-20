#include <stdio.h>
#include <iostream>
#include <vector>
#include <ctime>


using namespace std;

int main() {
    int a[10];
    srand(time(0));
    
    for (int i = 0; i < 10; i++) {
        a[i] = 5 + rand() % 11;
        cout << a[i] << " ";
    }
    cout << endl;

    int legnagyobb = a[0];
    int indnagy = 0;
    for (int i = 1; i < 10; i++) {
        if (a[i] > legnagyobb) {
            legnagyobb = a[i];
            indnagy = i;
        }
    }
    cout << "Legnagyobb elem: " << legnagyobb << " indexe: " << indnagy << endl;

    int legkisebb = a[0];
    int indkis = 0;
    for (int i = 1; i < 10; i++) {
        if (a[i] < legkisebb) {
            legkisebb = a[i];
            indkis = i;
        }
    }
    cout << "Legkisebb elem: " << legkisebb << " indexe: " << indkis << endl;

    int szamlalo = 0;
    for(int i = 0; i < 10; i++) {
        if (a[i] % 2 == 0) {
            szamlalo++;
        }
    }

    cout << "Paros elemek száma: " << szamlalo << endl;

}