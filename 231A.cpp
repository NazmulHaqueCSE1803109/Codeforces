#include<iostream>
using namespace std;
int main()
{
    int n,p=0,s,a,b,c;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        s=0;
        cin>>a>>b>>c;
        if(a==1)
            {
                s=s+1;
            }
        if(b==1)
            {
                s=s+1;
            }
        if(c==1)
           {
                s=s+1;
           }
        if(s>=2)
            {
                p=p+1;
            }

    }
    cout<<p<<endl;
    return 0;
}
