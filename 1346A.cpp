#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int t,n,k,n1,n2,n3,n4,x,y;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
        n1=n/(1+k+(k*k)+(k*k*k));
        n2=k*n1;
        n3=k*k*n1;
        n4=k*k*k*n1;
        cout<<n1<<" "<<n2<<" "<<n3<<" "<<n4<<endl;
	}
	return 0;
}