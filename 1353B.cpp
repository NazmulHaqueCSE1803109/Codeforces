#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool func(int a, int b)
{
    return (a>b);
}

int main()
{
    int t,n,k,sum,tmp,i,x;
    cin>>t;
    while(t--)
    {
        sum=0;
        cin>>n>>k;
        vector<int>  v1;
        vector<int>  v2;
        for(i=0;i<n;i++)
        {
            cin>>x;
            v1.push_back(x);
        }
        for(i=0;i<n;i++)
        {
            cin>>x;
            v2.push_back(x);
        }
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end(),func);

        for(i=0;i<k;i++)
        {
            if(v1[i]<v2[i])
            {
                tmp=v1[i];
                v1[i]=v2[i];
                v2[i]=tmp;
            }
        }
        for(i=0;i<n;i++)
            sum +=v1[i];
        cout<<sum<<endl;
    }
    return 0;
}
