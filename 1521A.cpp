#include<iostream>
using namespace std;

int main()
{
    int t,A,B;
    cin>>t;
    while(t-->0)
    {
        cin>>A>>B;
        if(B==1)
            cout<<"NO"<<endl;
        else
        {
             cout<<"YES"<<endl;
             cout<<A<<" "<<A*(long long)B<<" "<<A*(long long)(1+B)<<endl;
        }
    }
    return 0;
}
