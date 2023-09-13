#include <iostream>
using namespace std;
int main() {
	int a,b;
	cin>>a>>b;
	int tich=1;
	tich=a*b;
	while(a!=b)
	{
		if(a>b)
		{
			a-=b;
		}
		else b-=a;
	}
	cout<<a<<endl;
	cout<<tich/a;
	
	return 0;
}
