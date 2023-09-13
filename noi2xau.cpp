#include <iostream>
#include <cstring>
using namespace std;

class String {
private:
    int n;
    char *str;
public:
    String() {
        n = 0;
        str = new char[1];
        str[0] = '\0';
    }
    String(const char* s) {
        n = strlen(s);
        str = new char[n+1];
        strcpy(str, s);
    }
    ~String() {
        delete[] str;
    }
    void print() {
        cout << str << endl;
    }
    void append(const char* s) {
        int len = strlen(s);
        char *temp = new char[n+len+1];
        strcpy(temp, str);
        strcat(temp, s);
        delete[] str;
        str = temp;
        n += len;
    }
    void read() {
        string input;
        getline(cin, input);
        delete[] str;
        n = input.length();
        str = new char[n+1];
        strcpy(str, input.c_str());
    }
    const char* c_str() const {
        return str;
    }
};

int main() {
    String s1;
    s1.read();
    s1.print();

    String s2;
    cout << "Enter a string to append to s1: ";
    s2.read();
    s1.append(s2.c_str());
    cout << "s1 after appending: ";
    s1.print();

    return 0;
}

