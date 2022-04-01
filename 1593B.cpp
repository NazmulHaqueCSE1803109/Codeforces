#include<iostream>
using namespace std;

#define nl "\n"

int main()
{
    int t,ns,mn,i,j;
    string n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        mn=ns=n.size();

        for(i=0;i<ns;i++)
        {
            for(j=i+1;j<ns;j++)
            {
                int num= ((n[i]-'0')*10)+(n[j]-'0');
                if(num%25==0)
                    mn=min(mn, (int)n.size()-i-2);
            }
        }
        cout<<mn<<nl;
    }
    return 0;
}
