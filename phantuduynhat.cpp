#include <iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	int a[n];
	for (int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int b[n+1];
	for (int i=0;i<n+1;i++)
	{
		cin>>b[i];
	}
	int unique=0;
	for (int i=0;i<n;i++)
	{
		unique ^=a[i];
		unique ^=b[i];
	}
	unique ^=b[n];
	cout<<unique;
	return 0;
} 
