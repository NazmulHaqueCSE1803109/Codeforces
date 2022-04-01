#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,i,mn,c;
    cin>>t;
    while(t--)
    {
        c=0;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
            cin>>a[i];
        vector<int> v;
        for(i=0;i<n;i++)
            v.push_back(a[i]);
        if(n==1)
            cout<<0<<endl;
        else
        {
            sort(v.begin(),v.end());
            v.erase(unique(v.begin(),v.end()),v.end());
            if(v.size()==1)
                cout<<0<<endl;
            else
            {
                mn=v[0];
                for(i=0;i<n;i++)
                {
                    if(mn==a[i])
                        c++;
                }
                cout<<n-c<<endl;
            }
        }
    }
    return 0;
}
