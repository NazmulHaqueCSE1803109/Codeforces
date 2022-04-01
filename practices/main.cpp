#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,d,rn=0,mn;
    cin>>n;
    mn=n;
    if(n<0)
    {
        cout<<n<<" is not palindrom.\n";
    }
    else
    {
        while(n)
    {
      d=n%10;
      rn=((rn*10)+d);
      n=n/10;
    }
    if(rn==mn)
        cout<<"n is palindrom number.\n";
    else
        cout<<"n is not palindrom number.\n";
    }
    
    return 0;
}
