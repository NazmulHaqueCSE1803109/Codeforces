#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;
    int a[n][2];
    for(i=0;i<n;i++)
    {
        for(j=0;j<2;j++)
        {
            cin>>a[i][j];
        }
    }

    int g=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i!=j)
            {
                if(a[i][1]==a[j][0])
                    g++;
            }
        }
    }
    cout<<g<<endl;
    return 0;
}
