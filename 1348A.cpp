#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int t,n,i,k,c;
    long long int a,b;
    cin>>t;
    while(t--)
    {
        k=0,a=0,b=0,c=1;
        cin>>n;
        int x[n],p[n/2],q[n/2];
        for(i=1;i<=n;i++)
        {
            x[k]=pow(2,i);
            k++;
        }
        a=x[n-1];
        for(i=n-2;i>=0;i--)
        {
            if(c<=n/2)
                b +=x[i];
            else
                a +=x[i];
            c++;
        }
        cout<<a-b<<endl;
    }
    return 0;
}
