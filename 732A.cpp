#include<iostream>
using namespace std;

int main()
{
    int k,r,n=1;
    cin>>k>>r;
    int p=k;
    while(1)
    {
        if(k%10==0||k%10==r)
        {
            break;
        }
        n++;
        k=p*n;
    }
    cout<<n<<endl;
    return 0;
}
