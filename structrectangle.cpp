#include <iostream>
using namespace std;
struct Rectangle {
	int height=0;
	int length=0;
	Rectangle(int h,int l) {
		height=h;
		length=l;
	}
	int getperimeter() {
		return (height+length)*2;
	}
	void print() {
		for (int i=0;i<length;i++)
		{
			for (int j=0;j<height;j++) {
				if(i==0 || i==height-1 ||j==0 || j==length-1) {
					cout<<"*";
				}
			}
			cout<<endl;
		}
	}
};

int compare(Rectangle a,Rectangle b) {
	int chuvia=a.getperimeter();
	int chuvib=b.getperimeter();
	if(chuvia<chuvib) {
		return -1;
	}
	else if (chuvia==chuvib) {
		return 0;
	}
	else return 1;
}
int main() {
	Rectangle a;
int inputHeight, inputLength;
cin>>inputHeight>>inputLength;
a.height = inputHeight;
a.length = inputLength;
cout << a.getPerimeter() << endl;
a.print();
}

