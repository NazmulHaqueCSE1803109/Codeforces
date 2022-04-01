#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_set>

using namespace std;

int main()
{
    int t,n,i,j,flag;
    string s;
    cin>>t;
    while(t--)
    {
        flag=1;
        cin>>n;
        cin>>s;
        vector<char> v1;
        vector<int> v2;
        for(i=0;i<n;i++)
        {
            v1.push_back(s[i]);
        }
        v1.erase(unique(v1.begin(),v1.end()),v1.end());
        for(i=0;i<v1.size();i++)
        {
            for(j=0;j<n;j++)
            {
                if(v1[i]==s[j])
                    v2.push_back(j);
            }

            if(v2.size()>1)
            {
                for(j=0;j<v2.size()-1;j++)
                {
                        if((v2[j+1]-v2[j])>1)
                        {
                            flag=0;
                            break;
                        }
                        else
                            flag=1;
                }
            }
             if(flag==0)
                    {
                        flag=0;
                        break;
                    }
        }

        if(flag)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
