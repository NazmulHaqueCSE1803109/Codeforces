#include<iostream>
using namespace std;
int main()
{
    int n,i,sum=0,cube=0,h=0;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        sum +=i;
        cube +=sum;
        if(cube<=n)
        {
            h++;
        }
        else
            break;
    }
    cout<<h<<endl;
    return 0;
}
