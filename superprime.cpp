#include <iostream>
#include <math.h>
#include <queue>
using namespace std;
bool checksnt(int n)
{
	if(n<2)
	{
		return false;
	}
	for (int i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)
		{
			return false;
		}
	}
	return true;
}
int main() {
	int n;
	cin>>n;
	queue<int> q;
	for (int i=2;i<=n,i<10;i++)
	{
		if(checksnt(i))
		{
			q.push(i);
		}
	}
	while(!q.empty())
	{
		for (int i=1;i<=9;i++)
		{
			int k=q.front()*10+i;
			if(checksnt(k) &&k<=n)
			{
				q.push(q.front()*10+i);
			}
		}
		cout<<q.front()<<" ";
		q.pop();
	}
	return 0;
}
