#include<iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    char s1[6]={'h','e','l','l','o'};
    int l=s.size(),j=0,i,ln=0;
    for(i=0;i<l;i++)
    {
        if(s[i]==s1[j])
            {
                ln++;j++;
            }
    }
    if(ln==5)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
