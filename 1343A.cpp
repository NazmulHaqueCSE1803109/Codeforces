#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int t,n,i,sum,p;
    cin>>t;
    while(t--)
    {
        cin>>n;
        sum =3;
        for(i=2;i<n/2;i++)
        {
            if(n%sum==0)
            {
                break;
            }
            sum +=pow(2,i);
        }
        p=n/sum;
        cout<<p<<endl;
    }
    return 0;
}
