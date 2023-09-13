#include <iostream>
#include <vector>
using namespace std;
int main() {
	int n,q;
	cin>>n>>q;
	vector<vector<int> > a(n);
	for (int i=0;i<n;i++)
	{
		int length;
		cin>>length;
		a[i]=vector<int>(length);
		for (int j=0;j<length;j++)
		{
			cin>>a[i][j];
		}
	}
	for (int i=0;i<q;i++)
	{
		int queryi,queryj;
		cin>>queryi>>queryj;
		cout<<a[queryi][queryj]<<endl;
	}
	return 0;
}
