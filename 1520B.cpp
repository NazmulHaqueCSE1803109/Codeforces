#include<iostream>

using namespace std;

int main()
{
    int t,n,c,pow,digit;
    cin>>t;
    while(t--)
    {
        c=0;
        cin>>n;
        for(pow=1;pow<=n;pow=pow*10+1)
        {
            for(digit=1;digit<=9;digit++)
            {
                if(pow*digit<=n)
                    c++;
            }
        }
        cout<<c<<endl;
    }
    return 0;
}
