#include<iostream>
using namespace std;
int main()
{
    int n,m,i,j;
    cin>>n;
    int a[n][n];
    for(i=0;i<n;i++)
    {
        a[i][0]=1;
    }
    for(j=0;j<n;j++)
    {
        a[0][j]=1;
    }
    for(i=1;i<n;i++)
    {
        for(j=1;j<n;j++)
        {
            a[i][j]=a[i-1][j]+a[i][j-1];
        }
    }
    m=a[n-1][n-1];
    cout<<m<<endl;
    return 0;
}
