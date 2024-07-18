#include<iostream>
using namespace std;

void mutli(int a[][100], int b[][100], int c[][100], int n1, int n2, int n3) {
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n3; j++) {
            c[i][j] = 0;
        }
    }

    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n3; j++) {
            for (int k = 0; k < n2; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

void printmat(int mat[100][100], int rows, int columns) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int n1, n2, n3;
    int a[100][100];
    int b[100][100];
    int c[100][100];

    cout << "Enter n1: ";
    cin >> n1;
    cout << "Enter n2: ";
    cin >> n2;
    cout << "Enter n3: ";
    cin >> n3;

    cout << "Matrix A: " << endl;
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            cin >> a[i][j];
        }
    }

    cout << "Matrix B: " << endl;
    for (int i = 0; i < n2; i++) {
        for (int j = 0; j < n3; j++) {
            cin >> b[i][j];
        }
    }

    mutli(a, b, c, n1, n2, n3);

    cout << "The output matrix is: " << endl;
    printmat(c, n1, n3);

    return 0;
}
