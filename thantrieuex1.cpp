//ex1.1
#include <iostream>
using namespace std;
int main() {
	int n;
	cout<<"Nhap so nguyen N: ";
	cin>>n;
	if(n%2==0&& n>0)
	{
		cout<<n<<" la so duong."<<endl<<n<<" la so chan";
	}
	else if (n%2==0 &&n<0)
	{
		cout<<n<<" la so am."<<endl<<n<<" la so chan";
	}
	else if (n%2 !=0&& n>0)
	{
		cout<<n<<" la so duong."<<endl<<n<<" la so le";
	}
	else cout<<n<<" la so am."<<endl<<n<<" la so le";
	return 0;
}
