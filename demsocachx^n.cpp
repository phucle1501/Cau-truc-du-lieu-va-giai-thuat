#include <iostream>
#include <cmath>

int countWays(int X, int n, int start) {
    if (X == 0)
        return 1;
    
    int count = 0;
    for (int i = start; pow(i, n) <= X; i++) {
        count += countWays(X - pow(i, n), n, i + 1);
    }
    
    return count;
}

int main() {
    int X, n;
    std::cout << "Nhap X: ";
    std::cin >> X;
    std::cout << "Nhap n: ";
    std::cin >> n;
    
    int ways = countWays(X, n, 1);
    
    std::cout << "So cach bieu dien X = " << X << " la: " << ways << std::endl;
    
    return 0;
}

