#include <iostream>
using namespace std;

void siameseMethod(int n) {
    int A[n][n];
    int row = 0, col = (n - 1) / 2;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            A[i][j] = 0;
        }
    }
    A[row][col] = 1;
    for (int i = 2; i <= n*n; i++) {
        int next_row = (row - 1 + n) % n;
        int next_col = (col + 1) % n;
        if (A[next_row][next_col] == 0) {
            row = next_row;
            col = next_col;
        } else {
            row = (row + 1) % n;
        }
        A[row][col] = i;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Nhap vao so nguyen duong le N: ";
    cin >> n;
    siameseMethod(n);
    return 0;
}

