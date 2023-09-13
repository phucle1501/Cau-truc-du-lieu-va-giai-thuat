#include <iostream>
#include <vector>

int main() {
    int n;
    std::cout << "Enter the size of the array: ";
    std::cin >> n;
    
    std::vector<int> arr(n);
    
    std::cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }
    
    int maxLength = 0;
    int currentLength = 1;
    int startIndex = 0;
    int endIndex = 0;
    
    for (int i = 1; i < n; i++) {
        if (arr[i] == arr[i - 1]) {
            currentLength++;
        } else {
            if (currentLength > maxLength) {
                maxLength = currentLength;
                startIndex = i - maxLength;
                endIndex = i - 1;
            }
            currentLength = 1;
        }
    }
    
    if (currentLength > maxLength) {
        maxLength = currentLength;
        startIndex = n - maxLength;
        endIndex = n - 1;
    }
    
    std::cout << "Longest consecutive subarray: ";
    for (int i = startIndex; i <= endIndex; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    
    return 0;
}

