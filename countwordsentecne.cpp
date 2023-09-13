#include <iostream>
#include <string>

int countOccurrences(const std::string& sentence, const std::string& keyword) {
    int count = 0;
    size_t pos = 0;
    
    // T�m l?n xu?t hi?n d?u ti�n c?a t? kh�a trong c�u
    pos = sentence.find(keyword, pos);
    
    // L?p d? t�m c�c l?n xu?t hi?n ti?p theo
    while (pos != std::string::npos) {
        count++;
        
        // Di chuy?n v? tr� t�m ki?m ti?p theo
        pos = sentence.find(keyword, pos + keyword.length());
    }
    
    return count;
}

int main() {
    std::string sentence;
    std::string keyword;
    
    // Nh?p c�u
    std::getline(std::cin, sentence);
    
    // Nh?p t? kh�a
    std::getline(std::cin, keyword);
    
    // �?m s? l?n xu?t hi?n c?a t? kh�a trong c�u
    int occurrences = countOccurrences(sentence, keyword);
    
    // In ra k?t qu?
    std::cout << occurrences << std::endl;
    
    return 0;
}

