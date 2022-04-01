#include<iostream>
using namespace std;


int gcd(int a,int b)
{
    int x=a,y=b,r;
    while(y)
    {
        r=x%y;
        x=y;
        y=r;
    }
    return x;
}

int main()
{
    int t,i,j,k,l,n,f,x,y;
    cin>>t;
    while(t-->0)
    {
        k=0;l=0;f=0;
        cin>>n;
        int a[n];
        int b[n][n];
        for(i=0;i<n;i++)
            cin>>a[i];
        for(i=0;i<n;i++)
        {
            if(gcd(a[i],a[i+1])!=1)
            {
                x=min(a[i],a[i+1]);
                y=x+1;
                a[i]=x;
                a[i+1]=y;
                k++;l++;f=1;
            }
            if(f)
            {
                for(j=0;j<l;j++)
                {
                    for(k=0;k<n;k++)
                    {
                        b[j][k]=a[k];
                    }
                }
            }
        }
        if(k>0)
        {
            for(i=0;i<l;i++)
            {
                for(j=0;j<n;j++)
                    cout<<b[i][j]<<" ";
                cout<<endl;
            }
        }
        else
            cout<<k<<endl;
    }
    return 0;
}
