#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main() {
    double a,b,c;
    cin>>a>>b>>c;
    double s=(double)((a+b+c)/2)*(double)((a+b+c)/2-a)*(double)((a+b+c)/2-b)*(double)((a+b+c)/2-c);
    if(a>=b+c || b>=a+c || c>=a+b)
    {
        cout<<"invalid";
    }
    else cout<<fixed<<setprecision(2)<<sqrt(s);
    return 0;
}
