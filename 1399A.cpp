#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,j,e,x;
    cin>>t;
    while(t--)
    {
        e=0;
        cin>>n;
        vector<int> a;
        for(i=0;i<n;i++)
            {
                cin>>x;
                a.push_back(x);
            }
        sort(a.begin(),a.end());
        for(i=1;i<n;i++)
        {
           if(abs(a[i]-a[i-1])<=1)
            {
              if(a[i-1]<=a[i])
                a[i-1]=0;
              else
                a[i]=0;
            }
        }
        for(i=0;i<n;i++)
        {
            if(a[i]>0)
            {
                e++;
            }
        }
        if(e==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
