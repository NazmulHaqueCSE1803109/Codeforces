#include<bits/stdc++.h>
using namespace std;


int func(string st, char s)
{
    int stln=st.size(),sum=0,i;
    for(i=0;i<stln;i++)
    {
        if(s!=st[i])
            sum +=1;
        else
            break;
    }
    return sum;
}


int main()
{
    int t,i,time;
    cin>>t;
    string st,s;
    while(t--)
    {
        time=0;
        cin>>st>>s;
        int sln=s.size();
        for(i=0;i<sln-1;i++)
        {
            time +=abs(func(st,s[i])-func(st,s[i+1]));
        }
        cout<<time<<endl;
    }
    return 0;
}
