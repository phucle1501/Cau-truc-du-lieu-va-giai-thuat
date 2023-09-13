#include <iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	int a[1000];
	for (int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int count=0;
	for (int i=0;i<n;i++)
	{
		for (int j=0;j<n;j++)
		{
			if(a[i]==a[j])
			{
				count++;
			}
		}
	}
	if (count>=2)
	{
		cout<<"yes";
	}
	else cout<"no";
}
