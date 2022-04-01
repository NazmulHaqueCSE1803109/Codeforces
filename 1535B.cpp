#include<bits/stdc++.h>
using namespace std;

int gcd(int x, int y)
{
    int r;
    while(x)
    {
        r=y%x;
        y=x;
        x=r;
    }
    return y;
}

int main()
{
    int t,i,j,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n],c=0,x;
        vector<int> v;
        vector<int>:: iterator it;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(i=0;i<n;i++)
        {
            if(a[i]%2==0)
                v.push_back(a[i]);
        }
        for(i=0;i<n;i++)
        {
            if(a[i]%2!=0)
                v.push_back(a[i]);
        }
        for(i=0;i<v.size();i++)
        {
            for(j=i+1;j<v.size();j++)
            {
                x=gcd(v[i],2*v[j]);
                if(x>1)
                    c++;
            }
        }
        cout<<c<<endl;
    }
    return 0;
}
