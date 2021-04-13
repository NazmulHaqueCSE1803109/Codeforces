#include<iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int i;
    char ch;
    for(i=0;i<s.size();i++)
    {
        if(i<=0)
        {
            ch=toupper(s[i]);
            cout<<ch;
        }
        else
            {
                ch=s[i];
                cout<<ch;
            }
    }
    return 0;
}
