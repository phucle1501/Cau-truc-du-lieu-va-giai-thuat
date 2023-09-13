#include <iostream>
#include <string>
#include <vector>
using namespace std;

const int MAXN = 100;
int M, N;
char matrix[MAXN][MAXN];
int K;
vector<string> words;

bool is_valid_char(char c) {
    return (c >= 'a' && c <= 'z');
}

bool is_valid_word(const string &word) {
    for (int i = 0; i < word.length(); i++) {
        if (!is_valid_char(word[i])) {
            return false;
        }
    }
    return true;
}

bool find_word(const string &word, int x1, int y1, int dx, int dy, int &x2, int &y2) {
    x2 = x1 + dx * (word.length() - 1);
    y2 = y1 + dy * (word.length() - 1);
    if (x2 < 0 || x2 >= M || y2 < 0 || y2 >= N) {
        return false;
    }
    for (int i = 0; i < word.length(); i++) {
        if (matrix[x1 + dx * i][y1 + dy * i] != word[i]) {
            return false;
        }
    }
    return true;
}

void find_word(const string &word) {
    if (!is_valid_word(word)) {
        cout << "input error" << endl;
        return;
    }
    for (int x1 = 0; x1 < M; x1++) {
        for (int y1 = 0; y1 < N; y1++) {
            for (int dx = -1; dx <= 1; dx++) {
                for (int dy = -1; dy <= 1; dy++) {
                    if (dx == 0 && dy == 0) continue;
                    int x2, y2;
                    if (find_word(word, x1, y1, dx, dy, x2, y2)) {
                        cout << "(" << x1 + 1 << "," << y1 + 1 << ") (" << x2 + 1 << "," << y2 + 1 << ")" << endl;
                        return;
                    }
                }
            }
        }
    }
    cout << "not found" << endl;
}

int main() {
    cin >> M >> N;
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            cin >> matrix[i][j];
        }
    }
    cin >> K;
    words.resize(K);
    getline(cin, words[0]);
    for (int i = 0; i < K; i++) {
        getline(cin, words[i]);
        find_word(words[i]);
    }
    return 0;
}

