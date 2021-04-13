#include<iostream>
using namespace std;
int main()
{
    int n,a=0,d=0,i;
    cin>>n;
    char ch,s[n];
    for(i=0;i<n;i++)
        cin>>s[i];
    for(i=0;i<n;i++)
    {
        ch=s[i];
        if(ch=='A')
            a++;
        else
            d++;
    }
    if(a<d)
        cout<<"Danik"<<endl;
    else if(a>d)
        cout<<"Anton"<<endl;
    else
        cout<<"Friendship"<<endl;
    return 0;
}
