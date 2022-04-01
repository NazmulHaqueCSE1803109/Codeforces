

#include<bits/stdc++.h>
using namespace std;

#define all(X) (X).begin(), (X).end()

void oreo() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    	cin>>a[i];
    int mx = *max_element(all(a));
    int cur = 0;
    int cnt = 0;
    for (int i = n - 1; i >= 0; --i) {
        if (a[i] == mx) {
            cout << cnt << endl;
            return;
        }
        if (a[i] > cur) {
            cur = a[i];
            cnt ++;
        }
    }
    cout << cnt << endl;
}
 
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
#ifdef ambarsariya
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
 
    int t = 1;
    cin >> t;
    while (t--) oreo();
    return 0;
}


/*int main()
{
	int t,n,i,j,x,x1,ne=0,p;
	
	cin>>t;
	while(t--)
	{
		cin>>n;
	vector<int> a,l,r;
    for(i=0;i<n;i++)
    	{
    		cin>>p;
    		a.push_back(p);
    	}
    x1=*max_element(a.begin(),a.end());
    while(1)
    {
    	int li=0,ri=0;
    	if(x1==a[n-1])
    		break;
    	else
    	{
    		x=a[n-1];
    	for(i=0;i<n;i++)
    	{
    		if(a[i]<=x)
    			{
    				l[li]=a[i];
    				li++;
    			}
    		else
    			{
    				r[ri]=a[i];
    				ri++;
    			}
    	}
    	for(i=0;i<li;i++)
    		a[i]=l[i];
    	for(j=0;j<ri;j++)
    		a[li+j]=r[j];
    	ne++;
    	}
    	
    }
    cout<<ne<<endl;
	}
	return 0;
}
*/


