#include <iostream>
#include <fstream>
#include <map>
#include <algorithm>
#include <cctype>

int main() {
    std::string filePath;
    std::cout << "Nhap duong dan den tep: ";
    std::cin >> filePath;
    std::ifstream file(filePath.c_str());

    if (!file.is_open()) {
        std::cerr << "Khong the mo tep!" << std::endl;
        return 1;
    }

    std::map<char, int> frequencyMap;
    std::string line;

    while (std::getline(file, line)) {
        for (std::string::const_iterator it = line.begin(); it != line.end(); ++it) {
            if (std::isalpha(*it)) {
                ++frequencyMap[std::tolower(*it)];
            }
        }
    }

    for (std::map<char, int>::const_iterator it = frequencyMap.begin(); it != frequencyMap.end(); ++it) {
        std::cout << it->first << ": " << it->second << std::endl;
    }

    file.close();
    return 0;
}

