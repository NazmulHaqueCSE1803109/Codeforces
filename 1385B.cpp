#include<iostream>
using namespace std;

int main()
{
    int t,n,x,i;
    cin>>t;
    while(t--)
    {
        int a[51]={0};
        cin>>n;
        for(i=0;i<2*n;i++)
        {
            cin>>x;
            if(a[x]==0)
            {
                cout<<x<<" ";
                a[x]++;
            }
        }
        cout<<endl;
    }
    return 0;
}
