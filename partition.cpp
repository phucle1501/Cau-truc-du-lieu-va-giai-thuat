#include <iostream>
using namespace std;
void hoanvi(int *a,int *b)
{
	int tmp=*a;
	*a=*b;
	*b=tmp;
}
int main() {
	int n;
	cin>>n;
	int a[n];
	for (int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for (int i=0;i<n;i++)
	{
		for (int j=i+1;j<n;j++)
		{
			if (a[i]>a[j])
			hoanvi(&a[i],&a[j]);
		}
	}
	for (int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}
/*
int* partition(int *start, int *end) {
    int key = *start;
    int *i = start + 1;
    int *j = end - 1;

    while (true) {
        while (i < j && *i < key) {
            i++;
        }
        while (i < j && *j >= key) {
            j--;
        }
        if (i == j) {
            break;
        }
        std::swap(*i, *j);
    }

    if (*i >= key) {
        i--;
    }
    std::swap(*start, *i);
    return i;
}
/*

