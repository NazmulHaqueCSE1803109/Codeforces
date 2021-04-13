#include<iostream>
using namespace std;
int main()
{
    string s,t;
    cin>>s>>t;
    int i,j,l=s.size(),k=0,f=0;
    char n[l];
    for(i=l-1;i>=0;i--)
    {
        n[k]=t[i];
        k++;
    }
    for(i=0;i<k;i++)
    {
        if(n[i]==s[i])
        {
            f=1;
        }
        else
        {
            f=0;break;
        }
    }
    if(f)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
