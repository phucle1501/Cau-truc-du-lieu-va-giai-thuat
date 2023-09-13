#include<iostream>
#include<cmath>

using namespace std;

int main() {
	long x, n, a[10000], b[10000], i, j, k = 0, min;
	cin >> n;
	for(i=0;i<n;i++)
		cin >> a[i];
	x = n * (n - 1) / 2;
	for(i=0;i<n;i++)
		for(j=i+1;j<n;j++)
		{
			b[k] = a[i] - a[j];
			k++;
		}
	for(i=0;i<x;i++)
		b[i] = abs(b[i]);
	min = b[0];
	for(i=1;i<x;i++)
	{	
		if(b[i] < min)
			min = b[i];
		}	
	cout << min;
	return 0;
}
