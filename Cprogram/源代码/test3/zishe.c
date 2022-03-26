#include <stdio.h>                
#include <string.h>
int huiwen(int k) //判断回文数
{
    int a[10], i = 0, j;
    while (k > 0)
    {
        a[i] = k % 10;
        k /= 10;
        i++;
    }
    for (j = 0; j < i; j++)
        if (a[j] != a[i - j - 1])
            return 0;
    return 1;
}

int hwlength(int k) //计算回文数的长度
{
    int a[10], i = 0;
    while (k > 0)
    {
        a[i] = k % 10;
        k /= 10;
        i++;
    }
    return (i);
}

int prime(int k) //判断质数
{
    int i;
    for (i = 3; i * i <= k; i += 2) //这样可以减少好多次循环
        if (k % i == 0)
            return 0;
    return 1;
}
int main()
{
    int a, b, i, j;
    scanf("%d %d", &a, &b);
    for (i = a; i <= b; i++)
    {
        if (i % 2 == 0 && i != 2) //排除2的倍数
            continue;
        if (i % 3 == 0 && i != 3) //排除3的倍数
            continue;
        if (i % 5 == 0 && i != 5) //排除5的倍数
            continue;
        if (hwlength(i) % 2 == 0 && i != 11) //回文数的长度为偶且不为11
            continue;                      
        if (!huiwen(i))                      //不是回文直接跳过
            continue;
        if (prime(i))
            printf("%d\n", i);
        
    }
    return 0;
}
