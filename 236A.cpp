#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    sort(s.begin(), s.end());
    s.erase(unique(s.begin(), s.end()), s.end());
    if (s.size() % 2 == 0) {
        cout << "CHAT WITH HER!"<<endl;
    }
    else {
        cout << "IGNORE HIM!"<<endl;
    }
    return 0;
}
