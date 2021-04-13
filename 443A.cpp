#include<iostream>
#include<set>

using namespace std;
int main()
{
    int i;
    char ch;
    string st;
    getline(cin,st);
    set<char> s;
    for(i=0;i<st.size();i++)
    {
        ch=st[i];
        if(ch>='a'&&ch<='z')
            s.insert(ch);
    }
    cout<<s.size()<<endl;
    return 0;
}
