/*Az `inp#.txt` file első sora két számot tartalmaz (N,M), a mátrix dimenzióit. A következő N sor M darab számot tartalmaz. Olvasd be a fileból a mátrix elemeit, majd írj függvényt az alábbi műveletekre:

* Egy adott sorban levő legkisebb elem megkeresése
* Egy adptt oszlopban levő legkisebb elem megkeresése
* Egy adott sorban levő legnagyobb elem megkeresése
* Egy adott oszlopban levő legnagyobb elem megkeresése
* A mátrix legkisebb elemének megkeresése
* A mátrix legnagyobb elemének megkeresése
* A mátrixot forgassa el 90 fokban jobbra
* A mátrixot forgassa el 90 fokban balra
* A mátrix minden páros elemét felezze el, valamint minden páratlan eleméhez adjon hozzá 3-at. Ezt addig ismételje, amíg minden eleme 1 nem lesz.

Minden feladat eredményét mondat formájában írd ki az `out#.txt` fileba.
*/

#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <cmath>

using namespace std;

void printSolution(ofstream o , string s) {
    o << s << endl;
    cout << s << endl;
}

string matrixToString(vector<vector<int>> matrix) {
    string s = "";
    for (int i = 0; i < matrix.size(); i++) {
        for (int j = 0; j < matrix.at(i).size(); j++) {
            s += to_string(matrix.at(i).at(j)) + " ";
        }
        s += "\n";
    }
    return s;
}

int minRow(vector<vector<int>> matrix, int row) {
    int min = matrix.at(row).at(0);
    for (int i = 1; i < matrix.at(row).size(); i++) {
        if (matrix.at(row).at(i) < min) {
            min = matrix.at(row).at(i);
        }
    }
    return min;
}

int minCol(vector<vector<int>> matrix, int col) {
    int min = matrix.at(0).at(col);
    for (int i = 1; i < matrix.size(); i++) {
        if (matrix.at(i).at(col) < min) {
            min = matrix.at(i).at(col);
        }
    }
    return min;
}

int maxRow(vector<vector<int>> matrix, int row) {
    int max = matrix.at(row).at(0);
    for (int i = 1; i < matrix.at(row).size(); i++) {
        if (matrix.at(row).at(i) > max) {
            max = matrix.at(row).at(i);
        }
    }
    return max;
}

int maxCol(vector<vector<int>> matrix, int col) {
    int max = matrix.at(0).at(col);
    for (int i = 1; i < matrix.size(); i++) {
        if (matrix.at(i).at(col) > max) {
            max = matrix.at(i).at(col);
        }
    }
    return max;
}

int minMatrix(vector<vector<int>> matrix) {
    int min = matrix.at(0).at(0);
    for (int i = 0; i < matrix.size(); i++) {
        for (int j = 0; j < matrix.at(i).size(); j++) {
            if (matrix.at(i).at(j) < min) {
                min = matrix.at(i).at(j);
            }
        }
    }
    return min;
}   

int maxMatrix(vector<vector<int>> matrix) {
    int max = matrix.at(0).at(0);
    for (int i = 0; i < matrix.size(); i++) {
        for (int j = 0; j < matrix.at(i).size(); j++) {
            if (matrix.at(i).at(j) > max) {
                max = matrix.at(i).at(j);
            }
        }
    }
    return max;
}

bool rotateRight (vector<vector<int>> &matrix) {
    if (matrix.size() == 0) {
        return false;
    }
    if (matrix.size() != matrix.at(0).size()) {
        return false;
    }
    int m = matrix.size();
    for(int i = 0; i < ceil(m / 2); i++) {
        for(int j = 0; j < m / 2; j++) {
            int temp = matrix.at(i).at(j);
            matrix.at(i).at(j) = matrix.at(m - 1 - j).at(i);
            matrix.at(m - 1 - j).at(i) = matrix.at(m - 1 - i).at(m - 1 - j);
            matrix.at(m - 1 - i).at(m - 1 - j) = matrix.at(j).at(m - 1 - i);
            matrix.at(j).at(m - 1 - i) = temp;            
        }
    }

    return true;
    
}

bool rotateLeft (vector<vector<int>> &matrix) {
    if (matrix.size() == 0) {
        return false;
    }
    if (matrix.size() != matrix.at(0).size()) {
        return false;
    }
    int m = matrix.size();
    for(int i = 0; i < ceil(m / 2); i++) {
        for(int j = 0; j < m / 2; j++) {
            int temp = matrix.at(i).at(j);
            matrix.at(i).at(j) = matrix.at(j).at(m - 1 - i);
            matrix.at(j).at(m - 1 - i) = matrix.at(m - 1 - i).at(m - 1 - j);
            matrix.at(m - 1 - i).at(m - 1 - j) = matrix.at(m - 1 - j).at(i);
            matrix.at(m - 1 - j).at(i) = temp;            
        }
    }
    return true;
}

//non recursive
void halfAndAdd (vector<vector<int>> &matrix) {
    while (maxMatrix(matrix) != 1) {
        for (int i = 0; i < matrix.size(); i++) {
            for (int j = 0; j < matrix.at(i).size(); j++) {
                if(matrix.at(i).at(j) != 1) {
                    if (matrix.at(i).at(j) % 2 == 0) {
                        matrix.at(i).at(j) /= 2;
                    } else {
                        matrix.at(i).at(j) += 1;
                    }
                }
            }
        }
    }
}

// //recursive
// void halfAndAdd(vector<vector<int>> &matrix) {
//     for (int i = 0; i < matrix.size(); i++) {
//         for (int j = 0; j < matrix.at(i).size(); j++) {
//             if(matrix.at(i).at(j) != 1) {
//                 if (matrix.at(i).at(j) % 2 == 0) {
//                     matrix.at(i).at(j) /= 2;
//                 } else {
//                     matrix.at(i).at(j) += 1;
//                 }
//             }
//         }
//     }
//     if (maxMatrix(matrix) != 1) {
//         halfAndAdd(matrix);
//     }
//     else return;
// }
    
    

int main() {

    ifstream f;
    f.open("inp1.txt");
    ofstream o;

    int N, M;
    f >> N >> M;
    vector<vector<int>> matrix(N, vector<int>(M));
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            f >> matrix.at(i).at(j);
        }
    }
    f.close();

    o.open("out1.txt");

    for(int i = 0; i < N; i++) {
        o << "A(z) " << i + 1 << ". sor legkisebb eleme: " << minRow(matrix, i) << endl;
    }

    for(int i = 0; i < M; i++) {
        o << "A(z) " << i + 1 << ". oszlop legkisebb eleme: " << minCol(matrix, i) << endl;
    }

    for(int i = 0; i < N; i++) {
        o << "A(z) " << i + 1 << ". sor legnagyobb eleme: " << maxRow(matrix, i) << endl;
    }

    for(int i = 0; i < M; i++) {
        o << "A(z) " << i + 1 << ". oszlop legnagyobb eleme: " << maxCol(matrix, i) << endl;
    }

    o << "A mátrix legkisebb eleme: " << minMatrix(matrix) << endl;
    o << "A mátrix legnagyobb eleme: " << maxMatrix(matrix) << endl;

    
    o << "A mátrix 90 fokkal jobbra forgatva: " << endl;
    o << (rotateRight(matrix) ? matrixToString(matrix) : "Sikertelen\n");


    o << "A mátrix 90 fokkal balra forgatva: " << endl;
    o << (rotateLeft(matrix) ? matrixToString(matrix) : "Sikertelen\n");

    halfAndAdd(matrix);
    o << "A mátrix minden páros elemét felezze el, valamint minden páratlan eleméhez adjon hozzá 3-at. Ezt addig ismételje, amíg minden eleme 1 nem lesz: " << endl;
    o << matrixToString(matrix);



    
}