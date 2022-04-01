#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,l,c,d,p,nl,np,t1,t2,t3,t,toast;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    t1=(k*l)/nl;
    t2=c*d;
    t3=p/np;
    t=min(t1,t2);
    toast=min(t,t3);
    cout<<toast/n<<endl;
    return 0;
}
