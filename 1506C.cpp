#include<iostream>
using namespace std;

string X, Y;

int lcs(int i, int j, int count)
{

    if (i == 0 || j == 0)
        return count;

    if (X[i - 1] == Y[j - 1]) {
        count = lcs(i - 1, j - 1, count + 1);
    }
    count = max(count,
                max(lcs(i, j - 1, 0),
                    lcs(i - 1, j, 0)));
    return count;
}

int main()
{
    int t,n,m,c;
    cin>>t;
    while(t--)
    {
        cin>>X>>Y;
        n = X.size();
        m = Y.size();
        c=lcs(n, m, 0);
        cout<<c<<endl;
        cout<<(abs(n-c)+abs(m-c))<<endl;
    }
    return 0;
}
