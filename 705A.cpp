#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    if(n>1)
    {
        for(i=1;i<=n;i++)
        {
            if(i<n)
            {
                if(i%2!=0)
                    cout<<"I hate that"<<" ";
                else
                    cout<<"I love that"<<" ";
            }
            else
            {
                if(i%2!=0)
                    cout<<"I hate it"<<" ";
                else
                    cout<<"I love it"<<" ";
            }
        }
    }
    else
        cout<<"I hate it"<<" ";
    return 0;
}
