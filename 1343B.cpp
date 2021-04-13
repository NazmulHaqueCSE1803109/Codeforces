#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int t,i,n,es,os;
    cin>>t;
    while(t--)
    {
        es=0;os=0;
        vector<int> v;
        cin>>n;
        for(i=2;i<=n;i +=2)
        {
            v.push_back(i);
            es +=i;
        }
        for(i=1;i<n-1;i +=2)
        {
            v.push_back(i);
            os +=i;
        }
        if((es-os)%2!=0)
        {
            cout<<"YES"<<endl;
            v.push_back(es-os);

            vector<int>:: iterator it;
            for(it=v.begin();it!=v.end();it++)
            {
                cout<<*it<<" ";
            }
            cout<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
