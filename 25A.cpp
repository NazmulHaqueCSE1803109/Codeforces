#include<iostream>
using namespace std;
int main()
{
    int n,i,ep=0,e=0,o=0,op=0;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            e++;
            ep=i;
        }
        else
        {
            o++;
            op=i;
        }
    }
    if(e==1)
    {
        cout<<ep+1<<endl;
    }
    else
        cout<<op+1<<endl;
}
