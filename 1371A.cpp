#include<iostream>
using namespace std;

int main()
{
    int t;
    long long int n,x;
    cin>>t;
    while(t--)
    {
        cin>>n;
        x=(n*(n+1))/2;
        cout<<x/n<<endl;
    }
    return 0;
}
