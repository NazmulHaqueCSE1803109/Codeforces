#include<iostream>
using namespace std;

int maxrepeat(int* arr, int n, int k)
{
    for (int i = 0; i< n; i++)
        arr[arr[i]%k] += k;

    int m = arr[0], result = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > m)
        {
            m = arr[i];
            result = i;
        }
    }
    return result;
}

int main()
{
    int t,i,j,n,w,W,s,k,mr,c;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n>>W;
        int a[n];
        for(j=0;j<n;j++)
        {
            cin>>a[j];
        }
         s = sizeof(a)/sizeof(a[0]);
         k = n;
         mr=maxrepeat(a,s,k);
         cout<<mr<<endl;
         c=0;
        for(j=0;j<n;j++)
        {
            if(a[j]==mr)
                c++;
        }
        cout<<c<<endl;
    }
    return 0;
}
