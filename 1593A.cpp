#include<iostream>
using namespace std;

int main()
{
    int t;
    long long int a,b,c;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
        if(b>=c)
        {
            if(a>b)
                cout<<0<<" ";
            else
                cout<<(b-a)+1<<" ";
        }
        else
        {
            if(a>c)
                cout<<0<<" ";
            else
                cout<<(c-a)+1<<" ";
        }




        if(a>=c)
        {
            if(b>a)
                cout<<0<<" ";
            else
                cout<<(a-b)+1<<" ";
        }
        else
        {
            if(b>c)
                cout<<0<<" ";
            else
                cout<<(c-b)+1<<" ";
        }




        if(a>=b)
        {
            if(c>a)
                cout<<0<<" ";
            else
                cout<<(a-c)+1<<" ";
        }
        else
        {
            if(c>b)
                cout<<0<<" ";
            else
                cout<<(b-c)+1<<" ";
        }
        cout<<endl;
    }
    return 0;
}
