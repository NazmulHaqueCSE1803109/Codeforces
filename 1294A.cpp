#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        int ar[3];
        cin>>ar[0]>>ar[1]>>ar[2]>>n;
        sort(ar,ar+3);
        n -=((ar[2]-ar[0])+(ar[2]-ar[1]));
        if(n<0||n%3!=0)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
    return 0;
}
