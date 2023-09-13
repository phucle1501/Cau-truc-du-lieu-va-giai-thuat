#include <iostream>
#include <list>
using namespace std;
void josephus(int n,int m) {
	list<int> circle;
	for (int i=1;i<=n;i++) {
		circle.push_back(i);
	}
	
	list<int> ::iterator currentpos=circle.begin();
	
	while(circle.size() >1) {
		for (int i=0;i<m-1;i++)
		{
			currentpos++;
			if(currentpos==circle.end()) {
				currentpos=circle.begin();
			}
		}
		currentpos=circle.erase(currentpos);
		if(currentpos==circle.end()) {
			currentpos=circle.begin();
		}
	}
	for (list<int>::iterator it=circle.begin();it!=circle.end();++it) {
		cout<<*it<<" ";
	cout<<endl;
}
}
int main() {
	int n,m;
	cin>>n>>m;
	josephus(n,m);
	return 0;
}
