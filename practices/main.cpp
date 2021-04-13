#include<bits/stdc++.h>

using namespace std;
int main()
{
    list<int> l;

    int n1,n2,rn1,rn2;
    cin>>n1>>n2;
    while(n1&n2)
    {
       rn1=n1%10;
       rn2=n2%10;
       n1=n1/10;
       n2=n2/10;

       if(rn1==rn2)
       {
           l.push_back(1);
       }
       else
       {
           l.push_back(0);
       }
    }
    l.reverse();
    list<int>::iterator it;
    for(it=l.begin();it!=l.end();it++)
        cout<<*it;
    return 0;
}
