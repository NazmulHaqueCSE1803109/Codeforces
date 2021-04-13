#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
int main()
{
    char s[105];
    scanf("%s",s);
    int a=0,i;
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]<91)
            a++;
    }
    if(s[0]>96&&a==strlen(s)-1)
    {
        printf("%c",s[0]-32);
        for(i=1;i<strlen(s);i++)
        {
            printf("%c",s[i]+32);
        }
    }
    else if(a==strlen(s))
    {
        for(i=0;i<strlen(s);i++)
        {
            printf("%c",s[i]+32);
        }
    }
    else
    {
        printf("%s",s);
    }
    return 0;
}
