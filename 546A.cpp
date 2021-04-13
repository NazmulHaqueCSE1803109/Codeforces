#include<iostream>
using namespace std;
int main()
{
    long long int n,k,w,i,d=0,b=0;
    cin>>k>>n>>w;
    for(i=1;i<=w;i++)
    {
        d +=i*k;
    }
    if(d>n)
        {
            cout<<d-n<<endl;
        }
    else
        cout<<b<<endl;
        return 0;
}
