#include<iostream>
using namespace std;
int main()
{
    int x1,x2,x3,x4,a,b,c,i,t,j;
    cin>>x1>>x2>>x3>>x4;
    int ar[4];
    ar[0]=x1;ar[1]=x2;ar[2]=x3;ar[3]=x4;
    int m=ar[0];
    for(i=0;i<4;i++)
    {
        for(j=i+1;j<4;j++)
        {
            if(ar[i]<ar[j])
            {
                t=ar[i];
                ar[i]=ar[j];
                ar[j]=t;
            }
        }
    }
    int p=ar[0],q=ar[1],r=ar[2],s=ar[3];
    c=p-q;a=r-c;b=s-c;
    cout<<a<<" "<<b<<" "<<c<<endl;
    return 0;

}
