#include<iostream>
using namespace std;
int main()
{
    int n,i,c=1;
    cin>>n;
    string s;
    char ch;
    for(i=0;i<n;i++)
    {
        ch=s[1];
        cin>>s;
        if(ch==s[0])
            c++;
    }
    cout<<c<<endl;
    return 0;
}
