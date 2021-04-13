#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int t,n,i;
    long long int x,amn,bmn,p,q,m;
    cin>>t;
    while(t--)
    {
        m=0;
        cin>>n;
        vector<int> a;
        vector<int> b;
        for(i=0;i<n;i++)
        {
            cin>>x;
            a.push_back(x);
        }
        for(i=0;i<n;i++)
        {
            cin>>x;
            b.push_back(x);
        }
        amn=*min_element(a.begin(),a.end());
        bmn=*min_element(b.begin(),b.end());

        for(i=0;i<n;i++)
        {
            p=a[i]-amn;
            q=b[i]-bmn;

            if(p==q)
                m +=p;
            if((p>0&&q>0)&&(p>q||p<q))
            {
                if(p>q)
                    m +=(p-q)+q;
                else
                    m +=(q-p)+p;
            }
            if(p==0||q==0)
                m +=abs(p-q);
        }
        cout<<m<<endl;
    }
    return 0;
}
