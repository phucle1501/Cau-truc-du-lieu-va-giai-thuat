#include <iostream>
using namespace std;
int gcd(int a,int b)
{
    if(b==0)
    {
    	return a;
	}
	else return gcd(b,a%b);
}
int main() {
    int a,b;
    cin>>a>>b;
    int so=gcd(a,b);
    a/=so;
    b/=so;
    if(b==1)
    {
        cout<<a;
    }
    else if (a<0 && b>0)
    {
        cout<<a<<"/"<<b;
    }
    else if (a>0 && b>0)
    {
        cout<<a<<"/"<<b;
    }
    else if (a<0 && b<0)
    {
        cout<<a*(-1)<<"/"<<b*(-1);
    }
    else if (b<0 && a>0)
    {
    	cout<<(a*-1)<<"/"<<(b*-1);
	}
    return 0;
}
