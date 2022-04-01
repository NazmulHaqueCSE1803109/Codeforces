#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,one=0,zero=0;
    string s;
    cin>>n>>s;
    for(i=0;i<s.size();i++)
    {
        if(s[i]=='1')
            one++;
        else
            zero++;
    }
    cout<<abs(one-zero)<<endl;
    return 0;
}
