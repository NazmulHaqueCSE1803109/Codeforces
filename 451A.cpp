#include<iostream>
using namespace std;
int main()
{
    int n,m,x;
    cin>>n>>m;
    if(n>=m)
        x=m%2;
    else
        x=n%2;
    if(x)
        cout<<"Akshat"<<endl;
    else
        cout<<"Malvika"<<endl;
    return 0;
}
