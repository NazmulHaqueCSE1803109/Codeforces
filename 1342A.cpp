#include <cstdio>
#include <algorithm>
#define LL long long
using namespace std;
LL sum;
int main(){
	int t,x,y,a,b;
	scanf("%d",&t);
	while(t--){
		sum=0;
		scanf("%d%d%d%d",&x,&y,&a,&b);
		if(x<y)swap(x,y);//x>=y
		if(2*a<b)sum+=(LL)a*(x+y);
		else{
			sum+=(LL)y*b;
			sum+=(LL)(x-y)*a;
		}
		printf("%lld\n",sum);
	}
	return 0;
}
