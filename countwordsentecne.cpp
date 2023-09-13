#include <iostream>
#include <string>

int countOccurrences(const std::string& sentence, const std::string& keyword) {
    int count = 0;
    size_t pos = 0;
    
    // Tìm l?n xu?t hi?n d?u tiên c?a t? khóa trong câu
    pos = sentence.find(keyword, pos);
    
    // L?p d? tìm các l?n xu?t hi?n ti?p theo
    while (pos != std::string::npos) {
        count++;
        
        // Di chuy?n v? trí tìm ki?m ti?p theo
        pos = sentence.find(keyword, pos + keyword.length());
    }
    
    return count;
}

int main() {
    std::string sentence;
    std::string keyword;
    
    // Nh?p câu
    std::getline(std::cin, sentence);
    
    // Nh?p t? khóa
    std::getline(std::cin, keyword);
    
    // Ð?m s? l?n xu?t hi?n c?a t? khóa trong câu
    int occurrences = countOccurrences(sentence, keyword);
    
    // In ra k?t qu?
    std::cout << occurrences << std::endl;
    
    return 0;
}

