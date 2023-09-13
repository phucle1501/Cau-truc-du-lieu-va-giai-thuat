#include <iostream>
#include <string>
#include <vector>
using namespace std;

void generateWords(int N, int K, string word, int index, vector<bool>& used) {
    if (K == 0) { // K = 0, in t? có ð? dài K
        cout << word << endl;
        return;
    }

    if (index == N) { // Ð? duy?t h?t các ch? cái t? a ð?n ch? cái th? N
        return;
    }

    // Th? g?n ch? cái th? index vào t? n?u chýa ðý?c s? d?ng
    if (!used[index]) {
        word += ('a' + index);
        used[index] = true;
        generateWords(N, K-1, word, 0, used); // G?i ð? quy v?i K gi?m ði 1 và index b?t ð?u t? 0
        used[index] = false; // Ðánh d?u ch? cái ð? ðý?c s? d?ng
        word = word.substr(0, word.length()-1); // Xóa ch? cái v?a g?n vào ð? th? ch? cái ti?p theo
    }

    generateWords(N, K, word, index+1, used); // G?i ð? quy v?i ch? cái ti?p theo
}

void printWords(int N, int K) {
    string word = "";
    vector<bool> used(N, false); // M?ng ðánh d?u các ch? cái ð? ðý?c s? d?ng
    generateWords(N, K, word, 0, used); // G?i hàm ð? quy v?i t? r?ng và ch? cái ð?u tiên
}

int main() {
    int N, K;
    cout << "Nhap N: ";
    cin >> N;
    cout << "Nhap K: ";
    cin >> K;
    cout << "Cac tu co the hoan vi lai co do dai " << K << " gom cac chu cai khac nhau trong pham vi " << N << " chu cai tieng Anh:" << endl;
    printWords(N, K);

    return 0;
}

