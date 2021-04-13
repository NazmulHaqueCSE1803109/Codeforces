#include<iostream>
using namespace std;
int main()
{
    int s,n,x,y,i,f=0,k=0,j,t;
    cin>>s>>n;
    int ax[n],ay[n];
    for(i=0;i<n;i++)
    {
        cin>>x>>y;
        ax[k]=x;ay[k]=y;
        k++;
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(ax[i]>ax[j])
            {
                t=ax[i];
                ax[i]=ax[j];
                ax[j]=t;

                t=ay[i];
                ay[i]=ay[j];
                ay[j]=t;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        if(s>ax[i])
        {
            s +=ay[i];f=1;
        }
        else
        {
            f=0;break;
        }
    }
    if(f)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
