#include<iostream>
using namespace std;
int main()
{
    int t,x,n,c;
    cin>>t;
    while(t--)
    {
        c=0;
        cin>>x;
        n=x%10;
        while(x)
        {
            x=x/10;
            c++;
        }
        if(c==4)
        {
            cout<<((n-1)*10)+10<<endl;
        }
        else if(c==3)
        {
            cout<<((n-1)*10)+6<<endl;
        }
        else if(c==2)
        {
            cout<<((n-1)*10)+3<<endl;
        }
        else
            cout<<((n-1)*10)+1<<endl;
    }
    return 0;
}
