#include <iostream>
using namespace std;
int main() {
    int n,m;
    cin>>n>>m;
    int a[1000],b[1000];
    for (int i=0;i<n;i++) cin>>a[i];
    for (int i=0;i<m;i++) cin>>b[i];
    int count=0;
     bool isMiddle=true;
    for (int i=b[m-1];i<=a[0];i++)
    {
        for (int j=0;j<n;j++)
        {
            if(i%a[j]!=0)
            {
                isMiddle=false;
                break;
            }
        }
    }
    if(isMiddle)
    {
        for (int k=0;k<m;k++)
        {
            if(b[k] % k !=0)
            {
                isMiddle=false;
                break;
            }
        }
    }
    if(isMiddle)
    {
        count++;
    }
    cout<<count;
    return 0;
}
