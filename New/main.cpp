#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t,n,i,f,j,k;

    cin>>t;
    while(t--)
    {
        f=0,k=0;
        cin>>n;
        long long int b[n/2],a[n];
        for(i=0;i<n;i++)
            {
                cin>>a[i];
            }
        for(i=0;i<n;i +=2)
        {
            b[k]=(a[i]^a[i+1]);
            k++;
        }

        if(k>=2)
        {
            for(i=0;i<k;i++)
            {
                for(j=i+1;j<k;j++)
                {
                    if(b[i]^b[j])
                    {
                        f=1;
                        break;
                    }

                }
            }
            if(f==0)
            {
                cout<<"YES"<<endl;
            }
            else
                cout<<"NO"<<endl;

        }
        else
            cout<<"NO"<<endl;

    }
   return 0;
}
