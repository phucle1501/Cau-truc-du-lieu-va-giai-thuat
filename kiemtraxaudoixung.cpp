#include <iostream>
#include <cstring>
using namespace std;

bool checkPalindrome(string str) {
    int n = str.length();
    for (int i = 0; i < n / 2; i++) {
        if (str[i] != str[n - i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    string str;
    cin >> str;
    if (checkPalindrome(str)) {
        cout << "yes" << endl;
    } else {
        cout << "no" << endl;
    }
    return 0;
}

