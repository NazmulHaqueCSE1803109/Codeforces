#include<iostream>
using namespace std;
int main()
{
    long long int n,m,i,t=0;
    cin>>n>>m;
    long long int a[m];
    for(i=0;i<m;i++)
    {
        cin>>a[i];
    }
    t +=a[0]-1;
    for(i=1;i<m;i++)
    {
        if(a[i]>a[i-1])
            t +=a[i]-a[i-1];
        if(a[i]<a[i-1])
            t +=(n-a[i-1])+(a[i]-1)+1;
    }
    cout<<t<<endl;
    return 0;
}
