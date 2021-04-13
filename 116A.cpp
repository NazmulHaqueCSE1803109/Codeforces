#include<iostream>
using namespace std;
int main()
{
    int n,a,b,i,k=0,c;
    cin>>n;
    int ar[n];
    cin>>a>>b;
    ar[k]=b;
    k++;
    c=b;
    for(i=1;i<n;i++)
    {
         cin>>a>>b;
         c -=a;
         c +=b;
         ar[k]=c;
         k++;
    }
    int m=ar[0];
    for(i=1;i<n;i++)
    {
        if(m<ar[i])
            m=ar[i];
    }
    cout<<m<<endl;
    return 0;
}
