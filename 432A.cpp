#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,k,i,c=0;
    cin>>n>>k;
    int y[n];
    for(i=0;i<n;i++)
    {
        cin>>y[i];
    }
    sort(y,y+n);
    for(i=0;i<n;i++)
    {
        if((y[i]+k)<=5)
            c++;
        else
            break;
    }
    cout<<c/3<<endl;
    return 0;
}
