#include<iostream>
using namespace std;

int main()
{
    int t,i,l;
    cin>>t;
    string s;
    while(t--)
    {
        cin>>s;
        l=s.size();
        if(s[0]==s[l-1])
            cout<<s<<endl;
        else
        {
            char ch;
            ch=s[0];
            s[l-1]=ch;
            cout<<s<<endl;
        }
    }
    return 0;
}
