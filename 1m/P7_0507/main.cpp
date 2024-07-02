#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>
#include <algorithm>
using namespace std;

typedef struct {
    string firstName;
    string lastName;
    string JMBG;
    int height;
} Szemely;

void sortIntArray(int ar[], int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(ar[j] > ar[j + 1]) {
                int temp = ar[j];
                ar[j] = ar[j + 1];
                ar[j + 1] = temp;
            }
        }
    }
}

void printSzemelyArray(Szemely *szem, int size) {
    cout << "-------------------------------------------" << endl;
    for(int i = 0; i < size; i++) {
        cout << szem[i].firstName << " " << szem[i].lastName << " " << szem[i].JMBG << " " << szem[i].height << endl;
    }
    cout << "-------------------------------------------" << endl;
}

int main() {
    srand(time(0));
    int ar[10];
    for(int i = 0; i < 10; i++) {
        ar[i] = rand() % 100;
        cout << ar[i] << " ";
    }
    //sortIntArray(ar, 10);
    sort(ar, ar + 10); 

    cout << endl;
    for(int i = 0; i < 10; i++) {
        cout << ar[i] << " ";
    }
    cout << endl;

    Szemely original[10];
    ifstream f;
    f.open("inp.txt");
    if (!f.is_open()) {
        cout << "Hiba a fajl megnyitasakor!" << endl;
        return 1;
    }
    Szemely temp;
    int ind = 0;
    while (!f.eof()) {
        f >> temp.firstName >> temp.lastName >> temp.JMBG >> temp.height;
        original[ind] = temp;
        ind++;
    }
    f.close();

    Szemely byHeight[10];
    for(int i = 0; i < 10; i++) {
        byHeight[i] = original[i];
    }
    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 10 - i - 1; j++) {
            if(byHeight[j].height > byHeight[j + 1].height) {
                temp = byHeight[j];
                byHeight[j] = byHeight[j + 1];
                byHeight[j + 1] = temp;
            }
        }
    }

    Szemely byYear[10];
    for(int i = 0; i < 10; i++) {
        byYear[i] = original[i];
    }
    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 10 - i - 1; j++) {
            if(byYear[j].JMBG.substr(4, 3) == byYear[j + 1].JMBG.substr(4, 3)) {
                if(byYear[j].JMBG.substr(2, 2) == byYear[j + 1].JMBG.substr(2, 2)) {
                    if(byYear[j].JMBG.substr(0, 2) > byYear[j + 1].JMBG.substr(0, 2)) {
                        temp = byYear[j];
                        byYear[j] = byYear[j + 1];
                        byYear[j + 1] = temp;
                    }
                } else if(byYear[j].JMBG.substr(2, 2) > byYear[j + 1].JMBG.substr(2, 2)) {
                    temp = byYear[j];
                    byYear[j] = byYear[j + 1];
                    byYear[j + 1] = temp;
                }
            else if(byYear[j].JMBG.substr(4, 3) > byYear[j + 1].JMBG.substr(4, 3)) {
                temp = byYear[j];
                byYear[j] = byYear[j + 1];
                byYear[j + 1] = temp;
            }
        }
    }

    Szemely byName[10];
    for(int i = 0; i < 10; i++) {
        byName[i] = original[i];
    }
    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 10 - i - 1; j++) {
            if(byName[j].firstName > byName[j + 1].firstName) {
                temp = byName[j];
                byName[j] = byName[j + 1];
                byName[j + 1] = temp;
            }
        }
    }

    printSzemelyArray(original, 10);
    printSzemelyArray(byHeight, 10);
    printSzemelyArray(byYear, 10);
    printSzemelyArray(byName, 10);






    return 0;
}
}