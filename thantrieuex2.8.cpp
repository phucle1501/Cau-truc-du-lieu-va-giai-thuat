#include <iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	bool check=true;
	if(n==2)
	{
		check=false;
	}
	for (int i=2;i<n;i++)
	{
		if(n%i==0)
		{
			check=false;
		}
	}
	cout<<boolalpha<<check;
	return 0;
}
