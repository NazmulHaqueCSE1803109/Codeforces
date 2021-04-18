#include<iostream>
using namespace std;
int main()
{
    int n,i,l=0,r=0;
    string s;
    for(i=0;i<n;i++)
    {
        cin>>s;
        if(s[0]=='L')
            l++;
        else
            r++;
    }
    int p=l+r+1;
    cout<<p<<endl;
    return 0;
}
