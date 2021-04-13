#include<iostream>
using namespace std;
int main()
{
    long long int n,l=0,x;
    cin>>n;
    while(n)
    {
        x=n%10;
        n=n/10;
        if(x==4||x==7)
            l++;
    }
    if(l==4||l==7)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
