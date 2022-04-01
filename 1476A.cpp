#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int t,n,k;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        int x=floor((double)(n+k-1)/(double)k);
        int y=floor((double)((x*n+k)-1)/(double)n);
        cout<<y<<endl;
    }
    return 0;
}
