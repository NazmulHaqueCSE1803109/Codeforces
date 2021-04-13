#include<iostream>
using namespace std;
int main()
{
    int t,l,i;
    string s;
    cin>>t;
    while(t--)
    {
       cin>>s;
       l=s.size();
       for(i=0;i<l;i +=2)
       {
           cout<<s[i];
       }
       cout<<s[l-1]<<endl;
    }
    return 0;
}
