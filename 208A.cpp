#include<iostream>
using namespace std;
int main()
{
    int i,j,f=0,l;
    string s;
    cin>>s;
    l=s.size();
    char w[3]={'W','U','B'};
    for(i=0;i<l;i++)
    {
        if(s[i]=='W'&&s[i+1]=='U'&&s[i+2]=='B')
        {
            i +=2;
            if(f)
                cout<<" ";

        }
        else
        {
            f=1;
            cout<<s[i];
        }

    }
    return 0;
}
