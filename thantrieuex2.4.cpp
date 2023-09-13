#include <iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	int sum=0;
	for (int i=0;i<=n;i++)
	{
		sum+=i;
	}
	cout<<sum<<endl;
	int tong=0;
	for (int i=0;i<=n;i++)
	{
		if(i%2 !=0)
		{
			tong+=i;
		}
	}
	cout<<tong<<endl;
	int s=0;
	for (int i=0;i<=n;i++)
	{
		if(i%2==0)
		{
			s+=i;
		}
	}
	cout<<s;
	return 0;
}
