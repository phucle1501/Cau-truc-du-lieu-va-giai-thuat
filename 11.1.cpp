#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    for (int i = 0; i < n - 2; ++i) {
        if (i > 0 && a[i] == a[i - 1]) {
            continue;
        }
        int j = i + 1, k = n - 1;
        while (j < k) {
            int sum = a[i] + a[j] + a[k];
            if (sum == 0) {
                cout << a[i] << " " << a[j] << " " << a[k] << endl;
                ++j;
                --k;
                while (j < k && a[j] == a[j - 1]) {
                    ++j;
                }
                while (j < k && a[k] == a[k + 1]) {
                    --k;
                }
            } else if (sum < 0) {
                ++j;
            } else {
                --k;
            }
        }
    }
    return 0;
}
