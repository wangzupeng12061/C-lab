#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(void)
{
    char *(*p[2])(char *, const char *);
    p[0] = strcpy;
    p[1] = strcat;
    char *pr1,*pr2,s[100];
    pr1=(char *)malloc(strlen(s)+1);
    pr2=(char *)malloc(strlen(s)+1);
    scanf("%s", s);
    p[0](pr1, s);
    printf("%s\n", pr1);
    scanf("%s", s);
    p[0](pr2, s);
    printf("%s", p[1](pr1, pr2));
    return 0;
}