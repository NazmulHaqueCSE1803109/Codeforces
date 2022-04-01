#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,x,i,f=0,sum;
    cin>>t;
    while(t--)
    {
        sum=0;
        cin>>n>>x;
        int a[n];
        for(i=0;i<n;i++)
            cin>>a[i];
        for(i=0;i<n;i++)
            sum +=a[i];
        if(sum==x)
            cout<<"NO"<<endl;
        else
        {
            sum=0;
            for(i=0;i<n;i++)
          {
            sum +=a[i];
            if(sum==x)
            {
                sum -=a[i];
                if((i+1)<n)
                {
                    sum +=a[i+1];
                    swap(a[i],a[i+1]);
                }
                else
                {
                    f=1;
                    break;
                }
                if(sum ==x)
                {
                    f=1;
                    break;
                }
            }

        }
        if(f==0)
            {
                cout<<"YES"<<endl;
                for(i=0;i<n;i++)
                    cout<<a[i]<<" ";
                cout<<endl;
            }
        else
            cout<<"NO"<<endl;
        }

    }
    return 0;
}
