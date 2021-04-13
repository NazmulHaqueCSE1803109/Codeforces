#include<iostream>
using namespace std;
int main()
{
    int n,k,i,x;
    cin>>n>>k;
    while(k)
    {
        x=n%10;
        if(x>0)
        {
            n--;
        }
        else
        {
            n=n/10;
        }
        k--;
    }
    cout<<n<<endl;
    return 0;
}
