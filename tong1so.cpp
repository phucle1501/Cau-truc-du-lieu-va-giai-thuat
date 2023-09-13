#include <iostream>
#include <vector>
using namespace std;
void generatesequences(int n,vector<int> &sequence,int max_num) {
    if(n==0)
    {
        for (int num: sequence)
        {
            cout<<num<<" ";
        }
        cout<<endl;
        return;
    }
    for (int i=max_num;i>=1;i--)
    {
        if(n-i>=0)
        {
        sequence.push_back(i);
        generatesequences(n-i,sequence,i);
        sequence.pop_back();
        }
    }
}

int main() {
    int n;
    cin>>n;
    vector<int> sequence;
    generatesequences(n,sequence,n);
    return 0;
}
