#include "stdio.h"
char *strcpy(char *, char *);
void main(void)
{
    char a[60], b[60] = "there is a boat on the lake.";
    printf("%s\n", strcpy(a, b));
}
char *strcpy(char *s, char *t)
{
    int ans;
    while (*s++ = *t++)
        ans++;
    while (ans--)
        s--;
    return (s);
}