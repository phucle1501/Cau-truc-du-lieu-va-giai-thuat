#include <iostream>
#include <cmath>
using namespace std;
double x[100],y[100];
double dodai(int i,int j) {
	return sqrt(pow(x[i]-x[j],2)+pow(y[i]-y[j],2));

}
void nhap(int n) {
	for (int i=1;i<=n;i++) {
		cout<<"Nhap toa do diem thu";
		cin>>x[i]>>y[i];
	}
}

int main() {
	int n,i,j,imax,jmax;
	double d,dmax;
	cout<<"So diem N = ";
	cin>>n;
	nhap(n);
	dmax=dodai(1,2);
	imax=1;
	jmax=2;
	for (i=1;i<=n-1;i++) {
		for (j=i+1;j<=n;j++) {
			d=dodai(i,j);
			if(d>dmax) {
				dmax=d;
				imax=i;
				jmax=j;
			}
		}
	}
	cout<<"doan thang lon nhat co do dai "<<dmax<<endl;
	cout<<"Di qua 2 diem co chi so la "<<imax<<" "<<jmax;
	return 0;
}
