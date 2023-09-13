#include <fstream>
#include <iostream>
using namespace std;
int main() {
	ofstream myfile;
	myfile.open("example.txt");
	if (myfile.is_open()) {
		myfile<<"Hello World!\n";
		char data[]="This is some data.";
		myfile.write(data,sizeof(data));
		myfile.close();
	}
	else cout<<"Lhong the mo tep!";
	return 0;
} 
