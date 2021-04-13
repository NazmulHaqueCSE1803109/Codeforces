#include<iostream>
using namespace std;
int main()
{
    int n,i,X=0;
    cin>>n;
    string s;
    for(i=0;i<n;i++)
    {
        cin>>s;
        if(s[0]=='+')
            X++;
        if(s[0]=='-')
            X--;
        if(s[2]=='+')
            X++;
        if(s[2]=='-')
            X--;
    }
    cout<<X<<endl;
    return 0;
}
