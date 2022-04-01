#include<iostream>
using namespace std;

int main()
{
    int t,n,m,k;
    cin>>t;
    long long int sum;
    while(t--)
    {
        sum=0;
        cin>>n>>m>>k;
        sum +=(m-1);
        sum +=((n-1)*m);
        if(sum==k)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
