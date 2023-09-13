#include <iostream>
using namespace std;

const int MAX_N = 1000;

void insertionSort(int a[], int n, int t[]) {
    for (int i = 1; i < n; i++) {
        int j = i - 1;
        int key = a[i], tkey = t[i];
        while (j >= 0 && a[j] > key) {
            a[j + 1] = a[j];
            t[j + 1] = t[j];
            j--;
        }
        a[j + 1] = key;
        t[j + 1] = tkey;
    }
}

int main() {
    int N;
    int T[MAX_N];
    int wait_time = 0;
    
    // Nh?p thông tin v? th?i gian khám c?a m?i b?nh nhân
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> T[i];
    }

    // S?p x?p danh sách b?nh nhân theo th?i gian k?t thúc tang d?n
    insertionSort(T, N, T);

    // Tính t?ng th?i gian ch? d?i
    for (int i = 1; i < N; i++) {
        for (int j = 0; j < i; j++) {
            wait_time += T[j];
        }
    }

    // In ra t?ng th?i gian ch? d?i
    cout << wait_time << endl;

    return 0;
}

