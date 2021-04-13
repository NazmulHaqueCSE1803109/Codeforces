#include<iostream>
using namespace std;
int main()
{
    int a,b,hour,div,mod;
    cin>>a>>b;
    hour=a;
    while(a>=b)
    {
        div=a/b;
        hour +=div;
        mod=a%b;
        a=mod+div;
    }
    cout<<hour<<endl;
    return 0;
}
