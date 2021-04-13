#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    long long int n,m,a,x;
    cin>>n>>m>>a;
    x=ceil((double)n/(double)a)*ceil((double)m/(double)a);
    cout<<x<<endl;
    return 0;
}
