#include<bits/stdc++.h>
using namespace std;

long long int gcdsum(long long int n)
{
    long long int temp=n,dsum=0;
    while(temp)
    {
        dsum +=temp%10;
        temp=temp/10;
    }
    long long int gcd=__gcd(n,dsum);
    return gcd;
}

int main()
{
    int t;
    cin>>t;
   for(int i=0;i<t;i++)
    {
         long long int n;
        cin>>n;
        if(gcdsum(n)!=1)
            cout<<n<<endl;
        else if(gcdsum(n+1)!=1)
            cout<<n+1<<endl;
        else if(gcdsum(n+2)!=1)
            cout<<n+2<<endl;
    }
    return 0;
}
