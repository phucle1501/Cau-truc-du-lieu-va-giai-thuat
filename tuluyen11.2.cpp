#include <iostream>
#include <string>
#include <vector>
using namespace std;

void generateWords(int N, int K, string word, int index, vector<bool>& used) {
    if (K == 0) { // K = 0, in t? c� �? d�i K
        cout << word << endl;
        return;
    }

    if (index == N) { // �? duy?t h?t c�c ch? c�i t? a �?n ch? c�i th? N
        return;
    }

    // Th? g?n ch? c�i th? index v�o t? n?u ch�a ��?c s? d?ng
    if (!used[index]) {
        word += ('a' + index);
        used[index] = true;
        generateWords(N, K-1, word, 0, used); // G?i �? quy v?i K gi?m �i 1 v� index b?t �?u t? 0
        used[index] = false; // ��nh d?u ch? c�i �? ��?c s? d?ng
        word = word.substr(0, word.length()-1); // X�a ch? c�i v?a g?n v�o �? th? ch? c�i ti?p theo
    }

    generateWords(N, K, word, index+1, used); // G?i �? quy v?i ch? c�i ti?p theo
}

void printWords(int N, int K) {
    string word = "";
    vector<bool> used(N, false); // M?ng ��nh d?u c�c ch? c�i �? ��?c s? d?ng
    generateWords(N, K, word, 0, used); // G?i h�m �? quy v?i t? r?ng v� ch? c�i �?u ti�n
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

