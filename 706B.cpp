#include<bits/stdc++.h>
using namespace std;

int bs(int m, int lb, int ub, int a[])
{
    int mid;
    while(lb<ub)
    {
        mid=(lb+ub)/2;
        if(m>=a[mid])
            break;
        else
            ub=mid-1;
    }
    return mid;
}

int main()
{
    int n,q,m,i,c;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    cin>>q;
    for(i=0;i<q;i++)
    {
        cin>>m;
        c=upper_bound(a,a+n,m)-a;
        cout<<c<<endl;
    }
    return 0;
}
