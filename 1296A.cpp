#include<iostream>
using namespace std;
int main()
{
    int t,i,n,s,even,odd;
    cin>>t;
    while(t--)
    {
        s=0;even=0;odd=0;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
            cin>>a[i];
        for(i=0;i<n;i++)
            {
                s +=a[i];
                if(a[i]%2==0)
                    even++;
                else
                    odd++;
            }
        if(s%2!=0)
            cout<<"YES"<<endl;
        else
        {
            if(even>0&&odd>0)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
    }
    return 0;
}
