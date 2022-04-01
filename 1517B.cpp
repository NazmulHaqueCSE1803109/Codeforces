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
    int t,n,m,i,j,x,s;
    cin>>t;
    while(t--)
    {
        s=0;
        vector<vector<int>> v1;
        cin>>n>>m;
        for(i=0;i<n;i++)
        {
            vector<int> v;
            for(j=0;j<m;j++)
            {
                cin>>x;
                v.push_back(x);
            }
            if(i%2==0)
                {
                    sort(v.begin(),v.end());
                    for(i=0;i<v.size();i++)
                        cout<<v[i]<<" ";
                }
            else
                {
                    sort(v.begin(),v.end(),func);
                    for(i=0;i<v.size();i++)
                        cout<<v[i]<<" ";
                }
        }
    }
    return 0;
}
