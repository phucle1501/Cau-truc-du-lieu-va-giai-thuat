#include <iostream>
#include <cstring>
using namespace std;
class String {
private:
	int n;
	char*str;

public:
	String(const char*s) {
		n=strlen(s);
		str=new char[n+1];
		strcpy(str,s);
	}
	
	// destructor
	~String() {
		delete[] str;
	}
	
	void print() {
		cout<<str<<endl;
	}
	
	void append(const char*s) {
		int len=strlen(s);
		char*temp=new char[n+len+1];
		strcpy(temp,str);
		strcat(temp," ");
		strcat(temp,s);
		delete[] str;
		str=temp;
		n+=len+1;
	}
};

int main() {
	char input[100];
	cin.getline(input,sizeof(input));
	String s1(input);
	cin.getline(input,sizeof(input));
	s1.append(input);
	s1.print();
	return 0;
}
