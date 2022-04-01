#include<bits/stdc++.h>
#define N 510
using namespace std;

int main()
{
	int n,c=0,i,j;
	cin>>n;
	char M[N][N];
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			cin>>M[i][j];
		}
	}
    for(i=2;i<n;i++)
    {
    	for(j=2;j<n;j++)
    	{
    		if(M[i][j]=='X' && M[i-1][j-1]=='X' && M[i-1][j+1]=='X' && M[i+1][j-1]=='X' && M[i+1][j+1]=='X')
    			c++;
    	}
    }
    cout<<c<<endl;
    return 0;
}