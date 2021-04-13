#include<iostream>
using namespace std;
int main()
{
    int t,n,i,e,o,n1=0,n2=-1;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        e=0;o=0;
        if(n==1)
        {
            if(a[0]%2==0)
            {
                cout<<n1<<endl;
            }
            else
                cout<<n2<<endl;

        }
        else
        {
                for(i=0;i<n;i +=2)
            {
                if(a[i]%2!=0)
                    e++;
            }

            for(i=1;i<n;i +=2)
            {
                if(a[i]%2!=1)
                    o++;
            }
            if(e==o&&e>0&&o>0)
                cout<<e<<endl;
            else if(e==0&&o==0)
                cout<<n1<<endl;
            else
                cout<<n2<<endl;
        }
    }
    return 0;
}
