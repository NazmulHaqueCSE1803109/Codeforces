#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,j,k,i;
    cin>>t;
    for(i=0;i<t;i++)
    {
        int t=0;
        cin>>n;
        int st[n][n],ex[n];
        for(j=0;j<n;j++)
        {
            for(k=0;k<n;k++)
                cin>>st[j][k];
        }
        for(j=0;j<n;j++)
            {
                cin>>ex[j];
            }
        for(j=0;j<n;j++)
        {
            if(j==0)
                {
                    t=t+st[j][j]-0+ex[j]+ceil((st[j][1]-st[j][0])/2);
                }
                else
                {
                    t=t+st[j][0]-st[j-1][1]+ex[j]+ceil((st[j][1]-st[j][0])/2);
                }
        }
        cout<<t<<endl;
    }
}
