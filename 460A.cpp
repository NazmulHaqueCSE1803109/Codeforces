#include<iostream>
using namespace std;
int main()
{
    int n,m,i;
    cin>>n>>m;
    for(i=m;i<=n;i +=m)
    {
        n++;
    }
    cout<<n<<endl;
    return 0;
}
