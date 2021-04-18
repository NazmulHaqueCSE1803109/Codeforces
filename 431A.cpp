#include<iostream>
using namespace std;
int main()
{
    int a1,a2,a3,a4,i;
    long long int c=0;
    string s;
    cin>>a1>>a2>>a3>>a4;
    cin>>s;
    for(i=0;i<s.size();i++)
    {
        if(s[i]=='1')
            c +=a1;
        else if(s[i]=='2')
            c +=a2;
        else if(s[i]=='3')
            c +=a3;
        else
            c +=a4;
    }
    cout<<c<<endl;
    return 0;
}
