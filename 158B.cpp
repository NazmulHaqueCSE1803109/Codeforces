#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,i,c4=0,c3=0,c2=0,c1=0,s,t=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>s;
        if(s==4)
            c4++;
        else if(s==3)
            c3++;
        else if(s==2)
            c2++;
        else
            c1++;
    }
    t +=c4;
    while(c1!=0&&c3!=0)
    {
        t++;
        c1--;c3--;
    }
    if(c3)
        t +=c3;
    int x=ceil((double)((c2*2)+c1)/(double)4);
    t +=x;
    cout<<t<<endl;
    return 0;
}
