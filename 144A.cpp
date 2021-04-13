#include<iostream>
using namespace std;
int main()
{
    int t,s=0;
    cin>>t;
    int a[t],i,j,tmp;
    for(i=0;i<t;i++)
    {
        cin>>a[i];
    }
    for(i=0,j=t-1;i<t-1,j>0;i++,j--)
    {
       if(a[i]<a[i+1])
       {
           tmp=a[i];
           a[i]=a[i+1];
           a[i+1]=tmp;
           s++;
       }
       if(a[j]>a[j-1])
       {
           tmp=a[j];
           a[j]=a[j-1];
           a[j-1]=tmp;

           s++;
       }
    }
   cout<<s<<endl;
   return 0;
}
