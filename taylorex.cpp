#include <iostream>
#include <cmath>
using namespace std;
double giaithua(double n)
{
    double result=1;
    for (int i=1;i<=n;i++)
    {
        result*=i;
    }
    return result;
}
int main() {
    double n=2;
    double x;
    double sum,sumold;
    cin>>x;
    sum=1+x;
    do
    {
        sumold=sum;
        sum+=pow(x,n)/giaithua(n);
        n++;
    }
    while((sum-sumold)>0.001);
    cout<<(round(sum*10000))/10000;
    return 0;
    
}
