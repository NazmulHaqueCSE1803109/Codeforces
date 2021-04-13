#include<iostream>
using namespace std;
int main()
{
    int i,s1,s2,s3,s4,j;
    cin>>s1>>s2>>s3>>s4;
    int a[4];
    a[0]=s1;a[1]=s2;a[2]=s3;a[3]=s4;
    int k=0,f;
    int b[4];
    b[k]=a[0];
    k++;
    for(i=1;i<4;i++)
    {
        f=0;
        for(j=0;j<k;j++)
        {
            if(a[i]!=b[j])
                f=1;
            else
            {
                f=0;break;
            }
        }
        if(f)
        {
            b[k]=a[i];
            k++;
        }
    }
    cout<<4-k<<endl;
    return 0;
}
