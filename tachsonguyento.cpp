#include <iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	if(n<0)
	{
		n*=-1;
	}
	int i=2;
	while(n !=1)
	{
		if(n%i==0)
		{
			cout<<i;
			if(n !=i)
			{
				cout <<"x";
			}
			else cout<<endl;
			n /=i;
		}
		else i++;
	}
	return 0;
}
