#include <stdio.h>
void strcate(char[], char[]);
void strdelc(char[], char);
int main(void)
{
    char a[30] = "Language", b[30] = "Programming";//1
    printf("%s %s\n", b, a);
    strcate(b, a);
    printf("%s %s\n", b, a);
    strdelc(b, 'a');
    printf("%s\n", b);
    return 0;
}
void strcate(char t[], char s[])
{
    int i = 0, j = 0;
    while (t[i++])
        ;
    i = i - 1;//2
    while ((t[i++] = s[j++]) != '\0')
        ;
}
void strdelc(char s[], char c)
{
    int j, k;
    for (j = k = 0; s[k] != '\0'; j++)//3
        if (s[j] != c)
            s[k++] = s[j];
}
