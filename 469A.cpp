#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_set>
using namespace std;
int main()
{
    int n,p,q,x,s,i;
    cin>>n;


    cin>>p;
     vector<int> v1;
    for(i=0;i<p;i++)
    {
        cin>>x;
        v1.push_back(x);
    }
    cin>>q;
    vector<int> v2;
    for(i=0;i<q;i++)
    {
        cin>>x;
        v2.push_back(x);
    }
    vector<int> v3;
    for(i=0;i<p;i++)
        v3.push_back(v1[i]);
    for(i=0;i<q;i++)
        v3.push_back(v2[i]);
    sort(v3.begin(),v3.end());
    v3.erase(unique(v3.begin(),v3.end()),v3.end());
    s=v3.size();
    if(s==n)
        cout<<"I become the guy."<<endl;
    else
        cout<<"Oh, my keyboard!"<<endl;
    return 0;
}
