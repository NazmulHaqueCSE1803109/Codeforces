#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int n,p,s=0;
    double pr;
    cin>>n;
    int d=n;
    while(n--)
    {
        cin>>p;
        s +=p;
    }
    pr=((double)s/(double)d);
    cout<<fixed<<setprecision(12)<<pr<<endl;
    return 0;
}
