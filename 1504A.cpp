#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,l,f,j;
    string s;
    cin>>t;
    for(j=0;j<t;j++)
    {
        cin>>s;
        vector<char> v1(s.begin(),s.end());
        l=v1.size();
        vector<char> v2(l,'a');
        if(v1==v2)
            cout<<"NO"<<endl;
        else
        {

                v1.insert(v1.begin(),'a');
                vector<char> v3(v1.size());
                reverse_copy(v1.begin(),v1.end(),v3.begin());
                if(v1!=v3)
                {
                    cout<<"YES"<<endl;
                    vector<char>:: iterator it;
                    for(it=v1.begin();it!=v1.end();it++)
                        cout<<*it;
                    cout<<endl;
                }
                else
                {
                    v1.erase(v1.begin());

                    v1.insert(v1.begin()+v1.size(),'a');
                    vector<char> v3(v1.size());
                    reverse_copy(v1.begin(),v1.end(),v3.begin());
                    if(v1!=v3)
                    {
                        cout<<"YES"<<endl;
                        vector<char>:: iterator it;
                        for(it=v1.begin();it!=v1.end();it++)
                            cout<<*it;
                        cout<<endl;
                    }
                }

            }

    }
    return 0;
}
