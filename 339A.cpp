#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    //
    string s;
    int i,j;
    cin>>s;
    char ch;
    int l=s.size();
    for(i=0;i<l;i +=2)
    {
        for(j=i+2;j<l;j +=2)
        {
            if(s[i]>s[j])
             {
                ch=s[i];
                s[i]=s[j];
                s[j]=ch;
             }
        }
    }
    cout<<s<<endl;
    return 0;
}
