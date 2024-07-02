#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

void printMatrix(vector<vector<int>> matrix) {
    for(int i = 0; i < matrix.size(); i++) {
        for(int j = 0; j < matrix.at(i).size(); j++) {
            cout << matrix.at(i).at(j) << " ";
        }
        cout << endl;
    }
}

int sumOfARow(vector<vector<int>> matrix, int row) {
    int sum = 0;
    for(int i = 0; i < matrix.at(row).size(); i++) {
        sum += matrix.at(row).at(i);
    }
    return sum;
}

void horizontalMirror(vector<vector<int>>& matrix) {
    for(int i = 0; i < matrix.size() / 2; i++) {
        vector<int> temp = matrix.at(i);
        matrix.at(i) = matrix.at(matrix.size() - 1 - i);
        matrix.at(matrix.size() - 1 - i) = temp;
    }
}

int diagonalSum(vector<vector<int>> matrix) {
    int sum = 0;
    for(int i = 0; i < matrix.size(); i++) {
        sum += matrix.at(i).at(i);
    }
    return sum;
}

int main() {

    srand(time(NULL));
    cout << "Kérem a mátrix méretét: ";
    int n;
    cin >> n;

    vector<vector<int>> matrix(n, vector<int>(n));

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            matrix.at(i).at(j) = rand() % 90 + 10;
        }
    }

    printMatrix(matrix);

    cout << "Hanyadik sor összegét szeretné tudni? ";
    int row;
    cin >> row;

    cout << "A(z) " << row << ". sor összege: " << sumOfARow(matrix, row - 1) << endl;

    cout << "Tükrözés után: " << endl;
    horizontalMirror(matrix);
    printMatrix(matrix);


    cout << "A főátló összege: " << diagonalSum(matrix) << endl;


}