#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,x,y;
    cin>>t;
    while(t--)
    {
       cin>>n;
       y=n%2020;
       x=((n-y)/2020)-y;
       if(x>=0)
          cout<<"YES\n";
       else
          cout<<"NO\n";
    }
    return 0;
}
