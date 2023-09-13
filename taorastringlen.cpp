#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void generate_strings(vector<string> &result, string current_string, vector<char> &letters, long unsigned int max_len) {
    if (current_string.length() <= max_len) {
        result.push_back(current_string);
    }
    if (current_string.length() == max_len) {
        return;
    }
    for (long unsigned int i = 0; i < letters.size(); i++) {
        generate_strings(result, current_string + letters[i], letters, max_len);
    }
}

int main() {
    int n, len;
    cin >> n >> len;
    vector<char> letters(n);
    for (int i = 0; i < n; i++) {
        cin >> letters[i];
    }
    vector<string> result;
    generate_strings(result, "", letters, len);
    sort(result.begin(), result.end(), [](const string &a, const string &b) {
        if (a.length() != b.length()) {
            return a.length() > b.length();
        }
        return a < b;
    });
    for (long unsigned int i = 0; i < result.size(); i++) {
        cout << result[i] << endl;
    }
}

