#include<iostream>
using namespace std;

int gcd(int a, int b)
{
    int x=a, y=b, d=0,r;
    while(y)
    {
        r=x%y;
        x=y;
        y=r;
    }
    while(x)
    {
        x=x/10;
        d++;
    }
    return d;
}

int main()
{
    int t,a,b,c,i,d,x,y;
    while(t--)
    {
        cin>>a>>b>>c;
        d=0;
        if(a==1)
            {
                x=1;
                    if(b==1)
                       y=1;
                else if(b==2)
                    y=10;
                else if(b==3)
                    y=100;
                else if(b==4)
                    y=1000;
                else if(b==5)
                    y=10000;
                else if(b==6)
                    y=100000;
                else if(b==7)
                    y=10;
                else if(b==8)
                    y=10000000;
                else
                    y==100000000;
                while(c)
                {
                    c=c/10;
                    d++;
                }
                for(i=0;i<9000;i++)
                {
                    int dg=gcd(x,y);
                    if(dg==d)
                    {
                        cout<<x<<" "<<y<<endl;
                        break;
                    }
                    else
                    {
                        x++;y++;
                    }
                }
            }
        else if(a==2)
            {
                x=10;
                if(b==1)
                       y=1;
                else if(b==2)
                    y=10;
                else if(b==3)
                    y=100;
                else if(b==4)
                    y=1000;
                else if(b==5)
                    y=10000;
                else if(b==6)
                    y=100000;
                else if(b==7)
                    y=10;
                else if(b==8)
                    y=10000000;
                else
                    y==100000000;
                while(c)
                {
                    c=c/10;
                    d++;
                }
                for(i=0;i<9000;i++)
                {
                    int dg=gcd(x,y);
                    if(dg==d)
                    {
                        cout<<x<<" "<<y<<endl;
                        break;
                    }
                    else
                    {
                        x++;y++;
                    }
                }
            }
        else if(a==3)
            {
                x=100;
                if(b==1)
                       y=1;
                else if(b==2)
                    y=10;
                else if(b==3)
                    y=100;
                else if(b==4)
                    y=1000;
                else if(b==5)
                    y=10000;
                else if(b==6)
                    y=100000;
                else if(b==7)
                    y=10;
                else if(b==8)
                    y=10000000;
                else
                    y==100000000;
                while(c)
                {
                    c=c/10;
                    d++;
                }
                for(i=0;i<9000;i++)
                {
                    int dg=gcd(x,y);
                    if(dg==d)
                    {
                        cout<<x<<" "<<y<<endl;
                        break;
                    }
                    else
                    {
                        x++;y++;
                    }
                }
            }
        else if(a==4)
            {
                x=1000;
                if(b==1)
                       y=1;
                else if(b==2)
                    y=10;
                else if(b==3)
                    y=100;
                else if(b==4)
                    y=1000;
                else if(b==5)
                    y=10000;
                else if(b==6)
                    y=100000;
                else if(b==7)
                    y=10;
                else if(b==8)
                    y=10000000;
                else
                    y==100000000;
                while(c)
                {
                    c=c/10;
                    d++;
                }
                for(i=0;i<9000;i++)
                {
                    int dg=gcd(x,y);
                    if(dg==d)
                    {
                        cout<<x<<" "<<y<<endl;
                        break;
                    }
                    else
                    {
                        x++;y++;
                    }
                }
            }
        else if(a==5)
            {
                x=10000;
                if(b==1)
                       y=1;
                else if(b==2)
                    y=10;
                else if(b==3)
                    y=100;
                else if(b==4)
                    y=1000;
                else if(b==5)
                    y=10000;
                else if(b==6)
                    y=100000;
                else if(b==7)
                    y=10;
                else if(b==8)
                    y=10000000;
                else
                    y==100000000;
                while(c)
                {
                    c=c/10;
                    d++;
                }
                for(i=0;i<9000;i++)
                {
                    int dg=gcd(x,y);
                    if(dg==d)
                    {
                        cout<<x<<" "<<y<<endl;
                        break;
                    }
                    else
                    {
                        x++;y++;
                    }
                }
            }
        else if(a==6)
            {
                x=100000;
                if(b==1)
                       y=1;
                else if(b==2)
                    y=10;
                else if(b==3)
                    y=100;
                else if(b==4)
                    y=1000;
                else if(b==5)
                    y=10000;
                else if(b==6)
                    y=100000;
                else if(b==7)
                    y=10;
                else if(b==8)
                    y=10000000;
                else
                    y==100000000;
                while(c)
                {
                    c=c/10;
                    d++;
                }
                for(i=0;i<9000;i++)
                {
                    int dg=gcd(x,y);
                    if(dg==d)
                    {
                        cout<<x<<" "<<y<<endl;
                        break;
                    }
                    else
                    {
                        x++;y++;
                    }
                }
            }
        else if(a==7)
            {
                x=1000000;
                if(b==1)
                       y=1;
                else if(b==2)
                    y=10;
                else if(b==3)
                    y=100;
                else if(b==4)
                    y=1000;
                else if(b==5)
                    y=10000;
                else if(b==6)
                    y=100000;
                else if(b==7)
                    y=10;
                else if(b==8)
                    y=10000000;
                else
                    y==100000000;
                while(c)
                {
                    c=c/10;
                    d++;
                }
                for(i=0;i<9000;i++)
                {
                    int dg=gcd(x,y);
                    if(dg==d)
                    {
                        cout<<x<<" "<<y<<endl;
                        break;
                    }
                    else
                    {
                        x++;y++;
                    }
                }
            }
        else if(a==8)
           {
                x=10000000;
                if(b==1)
                       y=1;
                else if(b==2)
                    y=10;
                else if(b==3)
                    y=100;
                else if(b==4)
                    y=1000;
                else if(b==5)
                    y=10000;
                else if(b==6)
                    y=100000;
                else if(b==7)
                    y=10;
                else if(b==8)
                    y=10000000;
                else
                    y==100000000;
                while(c)
                {
                    c=c/10;
                    d++;
                }
                for(i=0;i<9000;i++)
                {
                    int dg=gcd(x,y);
                    if(dg==d)
                    {
                        cout<<x<<" "<<y<<endl;
                        break;
                    }
                    else
                    {
                        x++;y++;
                    }
                }
           }
        else
            {
                x==100000000;
                if(b==1)
                       y=1;
                else if(b==2)
                    y=10;
                else if(b==3)
                    y=100;
                else if(b==4)
                    y=1000;
                else if(b==5)
                    y=10000;
                else if(b==6)
                    y=100000;
                else if(b==7)
                    y=10;
                else if(b==8)
                    y=10000000;
                else
                    y==100000000;
                while(c)
                {
                    c=c/10;
                    d++;
                }
                for(i=0;i<9000;i++)
                {
                    int dg=gcd(x,y);
                    if(dg==d)
                    {
                        cout<<x<<" "<<y<<endl;
                        break;
                    }
                    else
                    {
                        x++;y++;
                    }
                }
            }
    }
    return 0;
}
