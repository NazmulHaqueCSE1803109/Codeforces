#include<iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int i,l=s.size(),a=0,b=0,f=0;
    for(i=0;i<l;i++)
    {
        if(s[i]=='0')
        {
            a++;
            if(b<7)
                b=0;
        }
        if(s[i]=='1')
        {
            b++;
            if(a<7)
                a=0;
        }
    }
    if(a>=7||b>=7)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
