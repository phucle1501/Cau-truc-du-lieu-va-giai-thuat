#include<iostream>
#include<string>
using namespace std;
int main()
{
    int a;
    string s;
    cin>>a;
    for(int x=0;x<a;x++)
    {
        cin>>s;
        int dodai=s.length();
        for(int i=0;i<dodai;i++)
        {
            for(int j=i+1;j<dodai;j++)
            {
                if(s[i]>s[j])
                {
                    char b=s[i];
                    s[i]=s[j];
                    s[j]=b;
                }
            }
        }
        cout<<s<<'\n';
    }
}
