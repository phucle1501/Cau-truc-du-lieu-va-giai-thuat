#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct DancePair {
    double heightMale;
    double heightFemale;
};

bool comparePairs(const DancePair& p1, const DancePair& p2) {
    return p1.heightMale > p2.heightMale; // S?p x?p theo chi?u cao nam gi?m d?n
}

bool isBeautifulTeam(vector<DancePair>& pairs) {
    sort(pairs.begin(), pairs.end(), comparePairs); // S?p x?p các c?p theo chi?u cao nam gi?m d?n

    for (int i = 0; i < pairs.size(); i++) {
        if (pairs[i].heightMale <= pairs[i].heightFemale) {
            return false; // N?u chi?u cao nam không l?n hon chi?u cao n?, tr? v? false
        }
    }

    return true; // Ð?i hình d?p
}

int main() {
    int N;
    cin >> N;

    vector<DancePair> pairs(N);
    for (int i = 0; i < N; i++) {
        cin >> pairs[i].heightMale >> pairs[i].heightFemale;
    }

    if (isBeautifulTeam(pairs)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}

