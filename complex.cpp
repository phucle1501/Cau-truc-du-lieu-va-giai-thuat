void print(const Complex& c) {
    if (c.a == 0 && c.b == 0) {
        cout << 0;
    } else {
        if (c.a != 0) {
            cout << c.a;
        }
        if (c.b > 0) {
            if (c.a != 0) {
                cout << '+';
            }
            if (c.b != 1) {
                cout << c.b;
            }
            cout << 'i';
        } else if (c.b < 0) {
            if (c.b != -1) {
                cout << c.b;
            } else {
                cout << '-';
            }
            cout << 'i';
        }
    }
    cout << endl;
}

Complex add(const Complex& c1, const Complex &c2) {
    Complex result;
    result.a = c1.a + c2.a;
    result.b = c1.b + c2.b;
    return result;
}

int compare(const Complex& c1, const Complex &c2) {
    double mag1 = sqrt(c1.a * c1.a + c1.b * c1.b);
    double mag2 = sqrt(c2.a * c2.a + c2.b * c2.b);
    if (mag1 == mag2) {
        return 0;
    } else if (mag1 > mag2) {
        return 1;
    } else {
        return -1;
    }
}

/* #include <iostream>
#include <cmath>
using namespace std;

struct Complex {
    int a; // Ph?n th?c
    int b; // Ph?n ?o

    Complex() {
        a = 0;
        b = 0;
    }

    Complex(int real, int imaginary) {
        a = real;
        b = imaginary;
    }

    double abs() {
        return sqrt(a * a + b * b); // Tính giá tr? tuy?t d?i
    }

   void print() {
       if(a !=0)
       {
           cout<<a;
       }
       if(b !=0)
       {
           if(b>0 && a!=0)
           {
               cout<<"+";
           }
           if( b!=1 && b!=-1)
           {
               cout<<b;
           }
           else if (b==-1)
           {
               cout<<"-";
           }
           cout<<"i";
       }
       if(a==0 &&b==0)
       {
           cout<<"0";
       }
       cout<<endl;
   }
};

Complex add(Complex x, Complex y) {
    int real = x.a + y.a;
    int imaginary = x.b + y.b;
    return Complex(real, imaginary);
}

