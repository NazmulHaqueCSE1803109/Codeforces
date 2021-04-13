#include<iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    char ch;
    int i;
    for(i=0;i<s.size();i++)
    {
        if(s[i]!='A'&&s[i]!='E'&&s[i]!='I'&&s[i]!='O'&&s[i]!='U'&&s[i]!='Y'&&s[i]!='a'&&s[i]!='e'&&s[i]!='i'&&s[i]!='o'&&s[i]!='u'&&s[i]!='y')
        {
            ch=tolower(s[i]);
            cout<<"."<<ch;
        }
    }
    return 0;
}
