#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,m,i,f=0,j;
    cin>>n>>m;
    char a[n][m];
    for(i=0;i<n;i +=2)
    {
        for(j=0;j<m;j++)
        {
                a[i][j]='#';
        }
    }

     for(i=1;i<n;i +=2)
    {
        int x=ceil((double(i)/(double)2));
        if(x%2!=0)
        {
            for(j=0;j<m-1;j++)
             {
                a[i][j]='.';
             }
             a[i][m-1]='#';
        }
        else
        {
             a[i][0]='#';
            for(j=1;j<m;j++)
             {
                a[i][j]='.';
             }
        }
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cout<<a[i][j];
        }
        cout<<endl;
    }
    return 0;
}
