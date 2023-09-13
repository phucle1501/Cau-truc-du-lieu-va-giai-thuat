#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    string filename;
    cout << "Nhap duong dan den tep: ";
    cin >> filename;

    ifstream file(filename.c_str());
    if (!file) {
        cerr << "Khong the mo file!" << endl;
        return 1;
    }

    int n;
    file >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        file >> arr[i];
    }

    sort(arr.begin(), arr.end());

    int median;
    if (n % 2 == 0) {
        median = (arr[n/2] + arr[n/2 - 1]) / 2;
    } else {
        median = arr[n/2];
    }

    cout << "So trung vi cua day la: " << median << endl;

    return 0;
}

