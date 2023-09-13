#include <iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	int tich=1;
	int sum=0;
	for (int i=1;i<=n;i++)
	{
		tich*=i;
		sum+=tich;
	
	}
	cout<<sum;
return 0;
}
