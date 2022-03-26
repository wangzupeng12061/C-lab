//编写函数strnins(s,t,n),其功能是：可将字符数组 t中的字符串插入到字符数组 s中字符串的第n个字符的后面。
#include <stdio.h>
#include <string.h>
#define m 100
void strnins(char s[], char t[], int n);
int main()
{
    char s[m], t[m];
    int n;
A:
    printf("input s t n\n");
    scanf("%s", s);
    scanf("%s", t);
    scanf("%d", &n);
    int len = strlen(s);
    if (n > len)
        goto A;
    strnins(s, t, n);
}
void strnins(char s[], char t[], int n)
{
    int i = 0, j = 0;
    int len = strlen(t);
    int len1 = strlen(s);
    for (i = len1; i >= n; i--)
    {
        s[i + len] = s[i];
    }
    for (i = n, j = 0; j < len; i++, j++)
    {
        s[i] = t[j];
    }
    s[len1 + len + 1] = '\0';
    printf("%s", s);
}