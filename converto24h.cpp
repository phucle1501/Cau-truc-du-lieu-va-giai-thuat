#include <iostream>
#include <string>
using namespace std;
int mai() {
	string thoigian;
	cin>>thoigian;
	int gio,phut,giay;
	gio=stoi(thoigian.substr(0,2));
	phut=stoi(thoigian.substr(3,2));
	giay=stoi(thoigian.substr(6,2));
	string sangtoi=thoigian.substr(8,2);
	if(sangtoi=="PM"&& gio !=12)
	{
		gio+=12;
	}
	else if (sangtoi=="AM"&& gio==12)
	{
		gio=0;
	}
	cout<<gio<<":"<<phut<<":"<<giay;
	return 0;
} 
