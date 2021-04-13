#include<iostream>
using namespace std;
int main()
{
    int n,i,f=0,x;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x;
        if(x==0)
        {
            f=0;
        }
        else
        {
            f=1;break;
        }
    }
    if(f==0)
        cout<<"EASY"<<endl;
    else
        cout<<"HARD"<<endl;
    return 0;
}
