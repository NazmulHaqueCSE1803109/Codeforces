#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int i,n,c=0;
    cin>>n;
    for(i=1;i<sqrt(n+1);i++)
    {
        if(n%i==0)
        {
            if((n/i)==i)
                c++;
            else
                c +=2;
        }
    }
    cout<<c-1<<endl;
    return 0;
}
