#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int i,u=0,l=0;
    for(i=0;i<s.size();i++)
    {
        if(isupper(s[i]))
            u++;
        else
            l++;
    }
    if(u>l)
    {
        char ch;
        for(i=0;i<s.size();i++)
        {
            ch=toupper(s[i]);
            cout<<ch;
        }
    }
    else
    {
        char ch;
        for(i=0;i<s.size();i++)
        {
            ch=tolower(s[i]);
            cout<<ch;
        }
    }
    return 0;
}
