#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n <= 1 || n > 100) {
        cout << "Invalid input.";
        return 0;
    }

    vector<int> indexChanges(n);
    for (int i = 0; i < n; i++) {
        cin >> indexChanges[i];
    }

}

