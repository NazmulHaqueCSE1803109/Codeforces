#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,s1,s2,s3,s4,p1,p2;
    cin>>t;
    while(t--)
    {
        cin>>s1>>s2>>s3>>s4;
        int a[4];
        a[0]=s1;a[1]=s2;a[2]=s3;a[3]=s4;
        sort(a,a+4);
        if(s1>s2)
            p1=s1;
        else
            p1=s2;
        if(s3>s4)
            p2=s3;
        else
            p2=s4;
        if(p1>=a[2]&&p2>=a[2])
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
