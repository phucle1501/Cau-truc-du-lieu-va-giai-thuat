#include <iostream>
#include <string>
#include <sstream>>
using namespace std;
int findfirst(int a[],int n,int x)
{
	for (int i=0;i<n;i++)
	{
		stringstream ss;
		ss<<a[i];
		string str=ss.str();
		if(x==a[i])
		{
			return i;
		}
		else return -1;
	}
 } 
 
 int main() {
 	int n;
 	cin>>n;
 	int x;
 	int a[n];
 	for (int i=0;i<n;i++)
 	{
 		cin>>a[i]>>x;
	}
	for (int i=0;i<n;i++)
	{
		int pos=findfirst(a,n,x);
		cout<<pos<<endl;
	}
	return 0;
 }
