#include<iostream>
using namespace std;

int main()
{
	string s;
	int l,i,la=0,lo=0;
	cin>>s;
	l=s.size();
	for(i=0;i<l;i++)
	{
		if(s[i]=='a')
			la++;
		else
			lo++;
	}
	if(la>lo)
		cout<<l<<endl;
	else
		cout<<la+(la-1)<<endl;
	return 0;
}