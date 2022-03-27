#include <stdio.h>
#include <string.h>
#define CHANGE 0
#define n 100
char change(char c);
int main()
{
    char s[n];
    scanf("%s", s);
    int len = strlen(s);
#if CHANGE
    for (int i = 0; i < len; i++)
    {
        s[i] = change(s[i]);
    }
    printf("%s", s);
#else

    printf("%s", s);
#endif
}

char change(char c)
{
    if (c >= 'A' && c <= 'Z')
        return c - 'A' + 'a';
    else if (c >= 'a' && c <= 'z')
        return c - 'a' + 'A';
    else
        return c;
}