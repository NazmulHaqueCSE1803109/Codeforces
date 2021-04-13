#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s1[100],s2[100];
    gets(s1);gets(s2);
    int i,l1=strlen(s1),l2=strlen(s2);
    for(i=0;i<l1;i++)
    {
        if(s1[i]>=65&&s1[i]<=90)
            s1[i]='a'+(s1[i]-'A');
        if(s2[i]>=65&&s2[i]<=90)
            s2[i]='a'+(s2[i]-'A');
    }
    int x=strcmp(s1,s2);
    if(x>0)
        cout<<"1"<<endl;
    else if(x<0)
        cout<<"-1"<<endl;
    else
        cout<<"0"<<endl;
    return 0;
}
