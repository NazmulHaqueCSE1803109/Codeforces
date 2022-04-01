#include<iostream>
using namespace std;

int main()
{
    int n,t,i,j,c;
    cin>>t;
    while(t--)
    {
        c=0;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
            cin>>a[i];
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if((a[j]-a[i])==j-i)
                    c++;
            }
        }
        cout<<c<<endl;
    }
    return 0;
}
