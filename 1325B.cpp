#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,i;
    cin>>t;
    while(t-->0)
    {
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
            cin>>a[i];
        vector<int> v;
        for(i=0;i<n;i++)
            v.push_back(a[i]);
        sort(v.begin(),v.end());
        v.erase(unique(v.begin(),v.end()),v.end());
        cout<<v.size()<<endl;
    }
    return 0;
}
