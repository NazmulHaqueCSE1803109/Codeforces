#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,n,m,x,i,num,c,j,r;
    cin>>t;
    for(i=0;i<t;i++)
    {
        num=0;
        cin>>n>>m>>x;
        c=ceil((double)x/(double)n);
        r=((x-1)%n)+1;

        num=(r-1)*m+c;
        cout<<num<<endl;
    }
   return 0;
}
