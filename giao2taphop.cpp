#include <iostream>
#include <set>
#include <algorithm>
using namespace std;
int main() {
	set<int> a,b;
	int na,nb;
	cin>>na;
	for (int i=0;i<na;i++)
	{
		int x;
		cin>>x;
		a.insert(x);
	}
	cin>>nb;
	for (int i=0;i<nb;i++)
	{
		int x;
		cin>>x;
		b.insert(x);
	}
	
	set<int> intersection;
	set_intersection(a.begin(),a.end(),b.begin(),b.end(),
	inserter(intersection,intersection.begin()));
	if(intersection.empty()) {
		cout<<"None";
	}
	else {
		for (set<int>:: iterator it=intersection.begin();it!=intersection.end();it++)
		{
			cout<<*it<<" ";
		}
	}
	return 0;
}
