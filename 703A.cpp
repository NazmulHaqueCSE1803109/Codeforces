#include<iostream>
using namespace std;
int main()
{
    int n,m,c,i,mp=0,cp=0;
    cin>>n;
    while(n--)
    {
        cin>>m>>c;
        if(m>c)
            mp++;
        if(m<c)
            cp++;
    }
    if(mp>cp)
        cout<<"Mishka"<<endl;
    else if(cp>mp)
        cout<<"Chris"<<endl;
    else
        cout<<"Friendship is magic!^^"<<endl;
    return 0;
}
