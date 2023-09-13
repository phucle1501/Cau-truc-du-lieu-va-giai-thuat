#include <iostream>
#include<string>
#include<cstdlib> 
#include <iomanip>
using namespace std;
bool check(string fraction)
{
    size_t pos=fraction.find_first_not_of("0123456789/");
    if(pos != string :: npos)
    {
        return false;
    }
    return true;
}
double evaluateFractionString(string fraction)
{
    size_t pos=fraction.find("/");
    if(pos== string::npos)
    {
    	throw"bad fraction string";
	}
    string nem=fraction.substr(0,pos);
    string dem=fraction.substr(pos+1);
    if(!check(nem)|| !check(dem))
    {
    	throw"bad fraction string";
	}
   	double nemo=atof(nem.c_str());
    double demo=atof(dem.c_str());
    double result=(double)nemo/demo;
    return result;
    
}
int main() {
	int n;
	cin >> n;
	cin.ignore();
for (int i = 0; i < n; i++) {
    string line;
    getline(cin, line);
    // fflush(stdin);
    try {
        double val = evaluateFractionString(line);
        cout << fixed << setprecision(2) << val << endl;
    } catch (const char* str){
        cout << "Caught " << str << endl;
    }
}
} 
