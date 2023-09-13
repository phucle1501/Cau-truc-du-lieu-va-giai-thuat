#include <iostream>
#include <string>

bool isVowel(char c) {
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
}

std::string toPigLatin(std::string word) {
    std::string result = "";
    if (isVowel(word[0])) {
        result = word + "way";
    } else {
        result = word.substr(1) + word[0] + "ay";
    }
    return result;
}

int main() {
    std::string word;
    std::cout << "Enter a word in English: ";
    std::cin >> word;

    std::cout << "In Pig Latin: " << toPigLatin(word) << std::endl;

    return 0;
}

