#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,k,d,c;
    int s[5]={1,10,100,1000,10000};
    cin>>t;
    while(t--)
    {
        vector <int> v;
        vector<int>:: iterator it;
        cin>>n;
        k=0,c=0;
        while(n)
        {
            d=n%10;
            n=n/10;
            if(d>0)
            {
                c++;
                v.push_back(d*s[k]);
            }
            k++;
        }
        cout<<c<<endl;
        for(it=v.begin();it!=v.end();it++)
            cout<<*it<<" ";
        cout<<endl;
    }

    return 0;
}
