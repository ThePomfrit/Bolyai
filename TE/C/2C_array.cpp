#include <stdio.h>
#include <iostream>

using namespace std;

void printMatrix(int **matrix, int size) {
    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int sumOfARow(int **matrix, int size, int row) {
    int sum = 0;
    for(int i = 0; i < size; i++) {
        sum += matrix[row][i];
    }
    return sum;
}

void horizontalMirror(int **matrix, int size) {
    for(int i = 0; i < size / 2; i++) {
        for(int j = 0; j < size; j++) {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[size - 1 - i][j];
            matrix[size - 1 - i][j] = temp;
        }
    }
}

int diagonalSum(int **matrix, int size) {
    int sum = 0;
    for(int i = 0; i < size; i++) {
        sum += matrix[i][i];
    }
    return sum;
}

int main() {

    srand(time(NULL));
    cout << "Kérem a mátrix méretét: ";
    int n;
    cin >> n;

    int b[n][n];

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            b[i][j] = rand() % 90 + 10;
        }
    }

    int *matrix[n];
    for (int i = 0; i < n; ++i)
    {
        matrix[i] = b[i];
    }

    printMatrix(matrix, n);

    cout << "Hanyadik sor összegét szeretné tudni? ";
    int row;
    cin >> row;

    cout << "A(z) " << row << ". sor összege: " << sumOfARow(matrix, n, row - 1) << endl;

    cout << "Tükrözés után: " << endl;
    horizontalMirror(matrix, n);
    printMatrix(matrix, n);


    cout << "A főátló összege: " << diagonalSum(matrix, n) << endl;

}