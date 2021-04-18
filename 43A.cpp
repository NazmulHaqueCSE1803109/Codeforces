#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n,i;
    string s;
    vector<string> v1;
    vector<string> v2;
    cin>>n;
    if(n==1)
    {
        cin>>s;
        cout<<s<<endl;
    }
    else
    {
        cin>>s;
        v1.push_back(s);
        for(i=1;i<n;i++)
        {
            cin>>s;
            if(v1[0]==s)
                v1.push_back(s);
            else
                v2.push_back(s);
        }
        if(v1.size()>v2.size())
            cout<<v1[0]<<endl;
        else
            cout<<v2[0]<<endl;
    }
    return 0;
}
