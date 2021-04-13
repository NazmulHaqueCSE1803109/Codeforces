#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int t,a,b,x;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        x=ceil((double(a)/(double)b));
        cout<<(x*b)-a<<endl;
    }
    return 0;
}
