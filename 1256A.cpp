#include<iostream>
using namespace std;

int main()
{
    int q,a,b,n,S,sum,x;
    cin>>q;
    while(q--)
    {
        cin>>a>>b>>n>>S;
        x=S/n;
        if(x>a)
        {
            sum=(n*a);
            if((S-sum)<=b)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
        else
        {
            sum=(x*n);
            if((S-sum)<=b)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
    }
    return 0;
}
