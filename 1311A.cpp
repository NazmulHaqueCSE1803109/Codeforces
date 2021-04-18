#include<iostream>
using namespace std;
int main()
{
    int t,a,b,c;
    cin>>t;
    while(t--)
    {
        c=0;
        cin>>a>>b;
        if(a<b)
        {
            if((b-a)%2==0)
                c=2;
            else
                c=1;
        }
        else if(a>b)
        {
            if((a-b)%2==0)
                c=1;
            else
                c=2;
        }
        cout<<c<<endl;
    }
    return 0;
}
