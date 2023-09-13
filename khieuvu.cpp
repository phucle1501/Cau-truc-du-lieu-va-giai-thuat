#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int n;
	cin>>n;
	float male[n],female[n];
	for (int i=0;i<n;i++)
	{
		cin>>male[i]>>female[i];
	}
	sort(male,male+n);
	sort(female,female+n);
	bool flag=true;
	for (int i=0;i<n;i++)
	{
		if(male[i]<=female[i])
		{
			flag=false;
			break;
		}
	}
	if(flag) cout<<"yes";
	else cout<<"no";
	return 0;
}
