#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d,x[5],k=0,i;
    cin>>a>>b>>c;
    x[0]=(a+b)*c;
    x[1]=(a*b)+c;
    x[2]=a*(b+c);
    x[3]=a*b*c;
    x[4]=a+b+c;
    int m=x[0];
    for(i=1;i<5;i++)
    {
        if(m<x[i])
            m=x[i];
    }
    cout<<m<<endl;
    return 0;
}
