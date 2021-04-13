#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n,i,prog=0,math=0,pe=0,skill;
    vector<int> p;
    vector<int> m;
    vector<int> s;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>skill;
        if(skill==1)
        {
            prog++;
            p.push_back(i+1);
        }
        else if(skill==2)
        {
            math++;
            m.push_back(i+1);
        }
        else
        {
            pe++;
            s.push_back(i+1);
        }

    }
    vector<int> ns;
        ns.push_back(prog);
        ns.push_back(math);
        ns.push_back(pe);

        int mn=ns[0];
        for(i=1;i<3;i++)
        {
            if(mn>ns[i])
                mn=ns[i];
        }
        cout<<mn<<endl;
        if(mn>0)
        {
            for(i=0;i<mn;i++)
                cout<<p[i]<<" "<<m[i]<<" "<<s[i]<<endl;
        }
    return 0;
}
