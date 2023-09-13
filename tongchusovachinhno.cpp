#include <iostream>
using namespace std;

int digitSum(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10; // L?y ch? s? cu?i c�ng v� c?ng v�o t?ng
        num /= 10; // X�a ch? s? cu?i c�ng
    }
    return sum;
}

int findNumberWithDigitSum(int n) {
    int number = 1;
    while (true) {
        if (digitSum(number) == n) {
            return number;
        }
        number++;
    }
}

int main() {
    int n = 129;
    int result = findNumberWithDigitSum(n);
    cout << "Mot so ma tong chinh no va cac chu so cua no bang " << n << " la: " << result << endl;

    return 0;
}

