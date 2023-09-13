#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int n;
    cin>>n;
    double a[1000];
    for (int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    double sum=0;
    for (int i=1;i<=n;i++)
    {
        sum+=a[i];
    }
    double mean=sum/n;
    double var;
    for (int i=1;i<=n;i++)
    {
        var+=(double)1/n*((a[i]-mean)*(a[i]-mean));
    }
    cout<<fixed<<setprecision(2)<<var;
    return 0;
}
