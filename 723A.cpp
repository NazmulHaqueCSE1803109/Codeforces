#include<iostream>
using namespace std;
int main()
{
    int x1,x2,x3,i,j;
    cin>>x1>>x2>>x3;
    int a[3],t;
    a[0]=x1;a[1]=x2;a[2]=x3;
    for(i=0;i<3;i++)
    {
        for(j=i+1;j<3;j++)
        {
            if(a[i]<a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    int dis=abs(a[1]-a[0])+abs(a[1]-a[2]);
    cout<<dis<<endl;
    return 0;
}
