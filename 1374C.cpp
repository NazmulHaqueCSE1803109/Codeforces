#include<iostream>
using namespace std;
int main()
{
    int t,n,b,i,m;
    string s;
    cin>>t;
    while(t--)
    {
        m=0;
        cin>>n;
        cin>>s;
        b=0;
        for(i=0;i<n;i++)
        {
            if(s[i]=='(')
                b++;
            else
                b--;
            if(b<0)
            {
                m++;
                b=0;
            }
        }
        cout<<m<<endl;
    }
    return 0;
}
