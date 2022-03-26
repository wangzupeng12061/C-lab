#include <stdio.h>
int main()
{
    int i, x, x1, x2;
    int k, flag;
    for (x = 100; x <= 999; x++)
    {
        for (i = 2, flag = 0, k = x >> 1; i <= k; i++) //保证flag每次刷新
        {
            if (!(x % i))
            {
                flag = 1;
                break;
            }
        }
        if (flag == 1)
        {
            x1 = x / 10;
            for (i = 2, flag = 0, k = x1 >> 1; i <= k; i++) //保证flag每次刷新
            {
                if (!(x1 % i))
                {
                    flag = 1;
                    break;
                }
            }
        }
        if (flag == 1)
        {
            x2 = x1 / 10;
            for (i = 2, flag = 0, k = x2 >> 1; i <= k; i++) //保证flag每次刷新
            {
                if (!(x2 % i))
                {
                    flag = 1;
                    break;
                }
            }
        }
        if (flag == 1)
            printf("%2d", x);
    }
    return 0;
}
