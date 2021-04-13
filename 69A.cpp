#include<iostream>
using namespace std;
int main()
{
    int t,i,a,b,c,ap=0,an=0,bn=0,bp=0,cp=0,cn=0;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>a>>b>>c;
        if(a>=0)
            ap +=a;
        else
            an +=a;
        if(b>=0)
            bp +=b;
        else
            bn +=b;
        if(c>=0)
            cp +=c;
        else
            cn +=c;
    }
    if((ap+an)==0&& (bp+bn)==0 && (cp+cn)==0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
