#include<iostream>
using namespace std;
int main()
{
    int i,j,a[5][5],x,y,z;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            cin>>a[i][j];
        }
    }
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(a[i][j]==1)
            {
                x=i;y=j;
                break;
            }
        }
    }
    z=abs(3-(x+1))+abs(3-(y+1));
    cout<<z<<endl;
    return 0;
}
