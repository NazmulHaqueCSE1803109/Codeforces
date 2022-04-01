#include<iostream>
using namespace std;

int main()
{
	int i,t;
	cin>>t;
	char first,second,third,x,y;
	while(t--)
	{
		cin>>first>>second>>third;
		cin>>x>>y;
		char ch[3],ch2[2];
		ch[0]=first;ch[1]=second;ch[2]=third;
        ch2[0]=x;ch2[1]=y;
        for(i=0;i<3;i++)
        {
        	for(j=0;j<2;j++)
        	{
        		if(ch[i]==ch2[j])
        		{
        			cout<<ch[i]<<endl;
        			break;
        		}
        	}
        }
	}
	return 0;
}