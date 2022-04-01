#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,i,mxi,mni,emx,emn;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
            cin>>a[i];
        int mn=a[0],mx=a[0];
        for(i=1;i<n;i++)
        {
            if(mx<a[i])
            {
                mx=a[i];
                mxi=i;
            }
            if(mn>a[i])
            {
                mn=a[i];
                mni=i;
            }
        }
        if(abs(mxi-mni)==1)
        {
            if(mxi<n/2&&mni<n/2)
            {
                if(mxi<mni)
                    cout<<(mni-0)+1<<endl;
                else
                    cout<<(mxi-0)+1<<endl;
            }
            else if(mxi>=n/2&&mni>=n/2)
            {
                if(mxi<mni)
                    cout<<((n-1)-mxi)+1<<endl;
                else
                    cout<<((n-1)-mni)+1<<endl;
            }
            else
            {
                if(mxi<mni)
                    cout<<((n-1)-mxi)+1<<endl;
                else
                    cout<<((n-1)-mni)+1<<endl;
            }
        }
        else
        {
            if(mxi<=n/2)
                emx=(mxi-0)+1;
            else
                emx=((n-1)-mxi)+1;
            if(mni<=n/2)
                emn=(mni-0)+1;
            else
                emn=((n-1)-mni)+1;
            cout<<emx+emn<<endl;
        }
    }
    return 0;
}
