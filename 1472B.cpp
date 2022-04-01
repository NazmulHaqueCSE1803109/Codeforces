#include<iostream>
using namespace std;

int main()
{
    int t,n,i,x;
    cin>>t;
    while(t--)
    {
        int one=0,two=0;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
        {
            cin>>x;
            if(x==1)
                one++;
            else
                two++;
        }
        int sum=one+(two*2);
        if(((one%2==0&&one>0) || (two%2==0&&two>0))&&sum%2==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
