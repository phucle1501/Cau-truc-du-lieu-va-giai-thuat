#include <iostream>
#include <algorithm> 
using namespace std; 
int main() 
{ 
    string str = "Lap trinh khong kho"; 
  
    // Reverse str[beign..end] 
    reverse(str.begin(), str.end()); 
  
    cout << str; 
    return 0; 
}
