#include <iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	int sum=0;
	while(n!=0)
	{
		int i=n%10;
		n/=10;
		sum+=i;
	}
	cout<<sum;
	return 0;
}
