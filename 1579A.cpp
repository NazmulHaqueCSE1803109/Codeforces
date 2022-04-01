#include<iostream>
using namespace std;

int main()
{
    int t;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>s;
        int i,ln=s.size(),la=0,lb=0,lc=0;
        for(i=0;i<ln;i++)
        {
            if(s[i]=='A')
                la++;
            else if(s[i]=='B')
                lb++;
            else
                lc++;
        }
        int sum=la+lc;
        if(sum==lb)
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;
    }
    return 0;
}
