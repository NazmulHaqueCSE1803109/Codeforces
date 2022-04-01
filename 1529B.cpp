#include <bits/stdc++.h>
using namespace std;

#define ll            long long
#define ull           unsigned long long
#define pb            push_back
#define mp            make_pair
#define all(v)        v.begin() , v.end()
#define gcd(x,y)      __gcd(x,y)
#define lcm(x,y)      ( x / __gcd(x,y) ) * y
#define nl            printf("\n");
#define vtr(z)        vector<long long> z
#define FF            first
#define SS            second


int main()
{
    ll tc;
    cin>>tc;

    while(tc--)
    {
        ll i,j,k,n;

        cin>>n;

        ll a[n+5];

        for(i=0;i<n;i++)cin>>a[i];


        sort(a,a+n);

        ll ans = 0;

        ll cnt = 0;

        for(i=0;i<n;i++)
        {
            if(a[i]<=0)cnt++;
            else break;
        }

        ll dif = INT_MAX;
        for(i=1;i<cnt;i++)
        {
            dif = min(dif, abs(a[i]-a[i-1]) );
        }


        if(cnt==0 )
        {
           cout<< "1\n";
        }

        else if(cnt == n){cout<< n;nl }



        else
        {
             if( a[cnt] <=dif && a[cnt]-a[cnt-1]>= a[cnt] )cnt++;


                cout<< cnt;nl

        }
    }
}
