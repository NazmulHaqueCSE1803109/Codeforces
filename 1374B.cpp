#include<iostream>
using namespace std;
int main()
{
    int t,n,x=-1,c2,c3;
    cin>>t;
    while(t--)
    {
        c2=0;c3=0;
        cin>>n;
        while(n%2==0)
        {
            c2++;n=n/2;
        }
        while(n%3==0)
        {
            c3++;n=n/3;
        }
        if(n!=1||c2>c3)
            cout<<-1<<endl;
        else
            cout<<(c3-c2)+c3<<endl;
    }
    return 0;
}
