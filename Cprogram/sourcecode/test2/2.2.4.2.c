#include <stdio.h>
int main()
{
    int n, x, y, z;
    int i, j, flag;
    while(scanf("%d", &n)!=EOF)
    {
    for (x = 12345; x <= 98765; x++)
    {
        int a[10] = {0};//初始化数组a
        flag = 1;
        z = x;//存储x的数值
        if (x % n == 0)//可以整除
        {
            y = x / n;//取除数，注意可能没有5位，但之前已经初始化为0
            for (i = 4; i >= 0; i--)//装入数组a
            {
                a[i] = y % 10;//个位数放到a4，以此类推，最高位放到a0
                y = y / 10;
            }
        }
        for (i = 9; i >= 5; i--)//除不尽除尽，都放x原值
        {
            a[i] = z % 10;//同理取放
            z = z / 10;
        }
        for (i = 0; i < 9; i++)
        {
            for (j = i + 1; j <= 9; j++)
            {
                if (a[i] == a[j])//判断两个五位数是否出现重复数字，若a0-a4不放，显然符合条件
                {
                    flag = 0;
                    break;//第一次跳出
                }
            }
            if (flag == 0)
            {
                break;//第二次跳出
            }
        }
        if (flag == 1)//无重复数字，达成目标
        {
            for (i = 5; i <= 9; i++)
            {
                printf("%d", a[i]);
            }
            printf("/");
            for (i = 0; i < 5; i++)
            {
                printf("%d", a[i]);
            }
            printf("=%d\n", n);
        }
    }
    }return 0;
}