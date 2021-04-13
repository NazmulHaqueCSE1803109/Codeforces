#include<iostream>
using namespace std;
int main()
{
    int i,n;
    cout<<"enter the number of elements : ";
    cin>>n;
    int a[n];
    cout<<endl<<"enter the value of this array : ";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<endl<<"print the last half elements of this array : ";
    for(i=(n/2);i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    return 0;
}
