//（1）输入一个整数，将它在内存中二进制表示的每一位转化成对应的数字字符并且存放到一个字符数组中，然后输出该整数的二进制表示。
#include<stdio.h>
void transform(int x, char a[]);
int main(void)
{
    int x;
    char a[100];
    while(scanf("%d", &x)!=EOF)
    transform(x, a);
}
void transform(int x,char a[])
{
    int i = 1, j = 0;
    a[0] = '\0';
    while(x!=0)
    {
        a[i++] = x % 2+48;
        x = x / 2;
    }
    char b[100];
    for (j = 0; j < i;j++)
    {
        b[j] = a[i - j-1];
    }
    printf("%s\n", b);
}