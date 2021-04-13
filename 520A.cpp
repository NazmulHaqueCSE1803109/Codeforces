#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_set>
using namespace std;
int main()
{
    int n,i;
    char ch;
    cin>>n;
    vector<char> v;
    for(i=0;i<n;i++)
    {
        cin>>ch;
        v.push_back(ch);
    }
    for(i=0;i<n;i++)
    {
        ch=v[i];
        if(ch>='A'&&ch<='Z')
        {
            v[i]=ch+32;
        }
    }
    sort(v.begin(),v.end());
    v.erase(unique(v.begin(),v.end()),v.end());
    int x =v.size();
    if(x==26)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
