#include<iostream>
#include<math.h>
using namespace std;

int div(int num)
{
    long long int j,c=0;
    for(j=1;j<=sqrt(num+1);j++)
        {
            if(num%j==0)
            {
                if(num/j==j)
                    c++;
                else
                    c +=2;
            }
        }
        return c;
}

int main()
{
    int n,i,c,j;
    cin>>n;
    long long int num;
    for(i=0;i<n;i++)
    {
        cin>>num;
        c=div(num);

        if(c==3)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
