#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,h,d;
    cin>>a>>b;
    h=a;
    while(a>=b)
    {
        d=ceil((double)a/(double)b);
        a=a/b;
        h +=d;
        cout<<a<<endl;
    }
    cout<<h<<endl;
    return 0;
}
