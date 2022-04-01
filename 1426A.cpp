#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int t,n,x,fn;
    cin>>t;
    while(t-->0)
    {
        cin>>n>>x;
        if(n<=2)
            cout<<1<<endl;
        else
        {
            n=n-2;
            fn=ceil((double)n/(double)x);
            fn++;
            cout<<fn<<endl;
        }
    }
    return 0;
}
