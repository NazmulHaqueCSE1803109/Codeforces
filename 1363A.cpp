#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int t,n,x,i,odd,even;
    cin>>t;
    while(t--)
    {
        odd=0;even=0;
        cin>>n>>x;
        vector<int> a(n);
        for(i=0;i<n;i++)
            cin>>a[i];
        for(i=0;i<n;i++)
        {
            if(a[i]%2!=0)
                odd++;
            else
                even++;
        }
        if(!odd)
            cout<<"NO"<<endl;
        else
        {
            odd--;x--;
            while(x>0)
            {
                if(odd>=2 && x>=2)
                {
                    odd -=2; x -=2;
                }
                else if(even)
                {
                    even--; x--;
                }
                else
                    break;
            }
            if(x)
                cout<<"NO"<<endl;
            else
                cout<<"YES"<<endl;
        }
    }
    return 0;
}
