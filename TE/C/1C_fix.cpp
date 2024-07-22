#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

const int N = 4;

void printMatrix(int matrix[N][N]) {
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int sumOfARow(int matrix[N][N], int row) {
    int sum = 0;
    for(int i = 0; i < N; i++) {
        sum += matrix[row][i];
    }
    return sum;
}

void horizontalMirror(int matrix[N][N]) {
    for(int i = 0; i < N / 2; i++) {
        for(int j = 0; j < N; j++) {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[N - 1 - i][j];
            matrix[N - 1 - i][j] = temp;
        }
    }
}

int diagonalSum(int matrix[N][N]) {
    int sum = 0;
    for(int i = 0; i < N; i++) {
        sum += matrix[i][i];
    }
    return sum;
}

int main() {

    srand(time(NULL));

    int matrix[N][N];

    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            matrix[i][j] = rand() % 90 + 10;
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