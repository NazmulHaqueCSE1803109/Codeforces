#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int t,n,i;
    cin>>t;
    while(t--)
    {
        int ev=0,odd=0;
        cin>>n;
        vector<int> a(2*n);
        for(i=0;i<2*n;i++)
            cin>>a[i];
        for(i=0;i<2*n;i++)
        {
            if(a[i]%2==0)
                ev++;
            else
                odd++;
        }
        if(ev==odd)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
