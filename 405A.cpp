#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int n,i,x;
    cin>>n;
    vector <int> a;
    for(i=0;i<n;i++)
    {
        cin>>x;
        a.push_back(x);
    }
    sort(a.begin(),a.end());
    vector<int>:: iterator it;
    for(it=a.begin();it!=a.end();it++)
    {
        cout<<*it<<" ";
    }
    return 0;
}
