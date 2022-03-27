#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#define N 100
char *delete (char *p);
int main(void)
{
    char *p[N];
    char s[80];
    int i = 0, ans = 0;
    while(gets(s))
    {
        p[i] = (char *)malloc(strlen(s)+1);
        strcpy(p[i], s);
        p[i] = delete (p[i]);
        i++;
        ans++;
    }
    for (int i = 0; i < ans; i++)
        printf("%s\n", p[i]);
}
char *delete (char *p)
{   
    while (*p == ' ' || *p == '\t')
        ++p;
    return p;
}