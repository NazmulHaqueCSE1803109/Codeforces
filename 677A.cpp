#include<iostream>
using namespace std;
int main()
{
    int n,h,i,w=0,a;
    cin>>n>>h;
    for(i=0;i<n;i++)
    {
        cin>>a;
        if(a>h)
            w +=2;
        else
            w++;
    }
    cout<<w<<endl;
    return 0;
}
