#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<int> a(n);
        for(i=0;i<n;i++)
            cin>>a[i];
        sort(a.begin(),a.end(),greater<int>());
            int mx=a[a.size()-1];
        while(a.size()!=1)
        {
            sort(a.begin(),a.end(),greater<int>());
            int x=a[a.size()-1];
            a.pop_back();
            for(i=0;i<a.size();i++)
            {
                a[i]=a[i]-x;
            }

            int am=a[a.size()-1];
            if(mx<am)
                mx=am;

        }
        cout<<mx<<endl;

    }
    return 0;
}
