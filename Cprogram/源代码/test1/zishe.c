#include <stdio.h>
int main()
{
    int a, b = 0;
    printf("please input a number：\n");
    scanf("%d", &a);
    do
    {
        b *= 10;//十进制下左移1位
        b += a % 10;//取a的个位加b，b得到初始值
        a /= 10;//a右移一位，舍弃小数
    } 
    while (a!=0);
    printf("new number is：\n%d", b);
    return 0;
}