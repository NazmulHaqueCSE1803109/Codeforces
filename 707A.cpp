#include<iostream>
using namespace std;
int main()
{
    int n,m,i,j,f=0;
    cin>>n>>m;
    char ch[n][m];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>ch[i][j];
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(ch[i][j]=='W'||ch[i][j]=='G'||ch[i][j]=='B')
                f=0;
            else
            {
                f=1;break;
            }
        }
        if(f)
            break;
    }
    if(f)
        cout<<"#Color"<<endl;
    else
        cout<<"#Black&White"<<endl;
    return 0;
}
