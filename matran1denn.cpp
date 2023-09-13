#include <iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	for (int i=1;i<=n;i++)
	{
		int start=i;
		for (int j=1;j<=n;j++)
		{
			cout<<start<<" ";
			start++;
			if(start>n)
			{
				start=1;
			}
		}
		cout<<endl;
	}
	return 0;
}
