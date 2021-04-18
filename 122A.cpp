#include<iostream>
using namespace std;
int main()
{
    int n,i,f=0;
    int a[10]={4,7,47,74,447,474,477,744,747,774};
    cin>>n;
    for(i=0;i<10;i++)
    {
        if(n==a[i]||(n%a[i]==0))
        {
            f=1;
            break;
        }
        else
            f=0;
    }
    if(f)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
