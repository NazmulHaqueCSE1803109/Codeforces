#include<iostream>
using namespace std;

int main()
{
    int n,a,b,i,t,p;
    string s;
    cin>>t;
    while(t--)
    {
        p=0;
        cin>>n>>a>>b>>s;
        if(b>=0)
        {
            p= (a*n)+(b*n);
            cout<<p<<endl;
        }
        else
        {
            int m=1;
            for(i=1;i<n;i++)
            {
                if(s[i]!=s[i-1])
                    m++;
            }
            int k=(m/2)+1;
            p=(a*n)+(b*k);
            cout<<p<<endl;
        }

    }
    return 0;
}
