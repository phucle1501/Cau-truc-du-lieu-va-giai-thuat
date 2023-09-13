#include <iostream>
#include <string>

using namespace std;

void printAllBinaryStrings(int n, int m, string str = "", int ones = 0, int zeros = 0) {
    // Base case: all n + m digits have been added to the string
    if (str.length() == n + m) {
        cout << str << endl;
        return;
    }
    
    // Recursively add 0 or 1 to the string
    if (zeros < n) {
        printAllBinaryStrings(n, m, str + "0", ones, zeros + 1);
    }
    if (ones < m) {
        printAllBinaryStrings(n, m, str + "1", ones + 1, zeros);
    }
}

int main() {
    int n, m;
    cout << "Enter the number of 0s: ";
    cin >> n;
    cout << "Enter the number of 1s: ";
    cin >> m;
    cout << "All binary strings with " << n << " 0s and " << m << " 1s:" << endl;
    printAllBinaryStrings(n, m);
    return 0;
}

