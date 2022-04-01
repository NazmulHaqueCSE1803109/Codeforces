#include<iostream>
using namespace std;

int main()
{
    int n,m,i,j;
    cin>>n>>m;
    for(i=n+1;;i++)
    {
        int f=1,x=i/2;
        for(j=2;j<=i/2;j++)
        {
            if(i%j==0)
                {
                    f=0;
                    break;
                }
        }
        if(f==1)
        {
            if(i==m)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
            break;
        }
    }
    return 0;
}
