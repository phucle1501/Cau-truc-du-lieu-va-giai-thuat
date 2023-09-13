#include <iostream>
using namespace std;
long long binpow(long long a, long long b) {
	long long result=1;
	while(b) {
		if(b%2==1) {
			result*=a;
		}
		a*=a;
		b/=2;
	}
	return result;
}

long long binpow1(long long a,long long b) {
	if(b==0) return 1;
	long long tmp=binpow1(a,b/2);
	if(b%2==1) return tmp*tmp*a;
	else return tmp*tmp;
}

int main() {
	int a,b;
	cin>>a>>b;
	cout<<binpow(a,b)<<" "<<binpow1(a,b)<<endl;
	return 0;
}
