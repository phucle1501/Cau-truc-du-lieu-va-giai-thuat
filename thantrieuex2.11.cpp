#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int n;
	cin>>n;
	int count=0;
	int i=2;
	if(n<=0)
	{
		cout<<"nghi";
	}
	else 
	{
		while(count<n) {
			bool check=true;
			for (int j=2;j<=sqrt(i);j++)
			{
				if(i%j==0)
				{
					check=false;
					break;
				}
			}
			if(check) {
				count++;
				cout<<i<<" ";
			}
			i++;
		}
	}
	return 0;
}
