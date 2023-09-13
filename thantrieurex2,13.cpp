#include <iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	int fn,f0,f1;
	f0=0;
	f1=1;
	if(n==0)
	{
		cout<<"0";
	 } 
	 else if (n==1)
	 {
	 	cout<<"1";
	 }
	 else if (n>=2)
	 {

	 	for (int i=2;i<=n;i++)
	 	{
	 		fn=f0+f1;
	 		f0=f1;
	 		f1=fn;
		 }
	 }
	 cout<<fn;
	 return 0;
}
