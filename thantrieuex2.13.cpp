#include <iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	int tmp=n;
	int dao=0;
	// dao gia tri b
	while(n>0)
	{
		dao=dao*10+n%10;
		n/=10;
	}
	if(tmp==dao)
	{
		cout<<"true";
	}
	else cout<<"false";
	return 0;
} 
