#include<iostream>
using namespace std;
int main()
{
    int n,i,x,t=0,h=0,c=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x;
        if(x>0)
        {
            h +=x;
        }
        else
            {
                c +=1;
            }
        if(h==0&&c>0)
            {
                t++;c=0;
            }
        if(h==c)
        {
            h=0;c=0;
        }
    }
    cout<<t<<endl;
    return 0;
}
