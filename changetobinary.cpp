#include <iostream>
#include <string>
using namespace std;
int main() {
	int n;
	cin>>n;
	string binary="";
	while(n>0) {
		binary=(n%2==0 ? "0":"1") +binary;
		n/=2;
	}
	cout<<binary;
}
