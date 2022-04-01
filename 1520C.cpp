#include<iostream>
using namespace std;

int main()
{
    int t,n,i,j,x;
    cin>>t;
    while(t--)
    {
        x=1;
        cin>>n;
        if(n==1)
            cout<<1<<endl;
        else if(n==2)
            cout<<-1<<endl;
        else
        {
            int a[n][n];
            for(i=0;i<n;i++)
            {
                for(j=0;j<n;j++)
                {
                    if((i+j)%2==0)
                        {
                            a[i][j]=x;
                            x++;
                        }
                }
            }
            for(i=0;i<n;i++)
            {
                for(j=0;j<n;j++)
                {
                    if((i+j)%2!=0)
                        {
                            a[i][j]=x;
                            x++;
                        }
                }
            }
            for(i=0;i<n;i++)
            {
                for(j=0;j<n;j++)
                    cout<<a[i][j]<<" ";
                cout<<endl;
            }
        }
    }
    return 0;
}
