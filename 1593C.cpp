#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,k,i;
    cin>>t;
    while(t--)
    {
        int c=1,s=0;
        cin>>n>>k;
        vector<int> v(k);
        for(i=0;i<k;i++)
            cin>>v[i];
        sort(v.begin(),v.end());
        for(i=k-1;i>=0;i--)
        {
            if(v[i]>=c)
            {
                int move=n-v[i];
                c +=move;
                s++;
            }
            else
                break;
        }
        cout<<s<<endl;
    }
    return 0;
}
