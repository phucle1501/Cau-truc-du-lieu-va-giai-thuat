#include <iostream>
#include <string>
using namespace std;

int main() {
    int N;
    cin >> N;
    if (N > 45 || N < 0) {
        cout << "None" << endl;
        return 0;
    }
    string result = "";
    for (int i = 9; i >= 1; i--) {
        if (N >= i) {
            result = char(i + '0') + result;
            N -= i;
        }
    }
    cout << result << endl;
    return 0;
}

