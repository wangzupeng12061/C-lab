#include <stdio.h>
int main()
{
    int i, x, k, flag; //注意flag的作用域
    while (scanf("%d", &x) != EOF)
    {
        i = 2;
        k = x >> 1;
        if (x != 2) //排除2的影响
        {
            do
            {
                flag = 0; //刷新flag
                if (!(x % i))
                {
                    flag = 1;
                    break;
                }
                else
                {
                    flag = 0; 
                }
                i++;
            } while (i <= k);
        }
        else
        {
            flag = 0;
        }
        if (flag == 1)
            printf("%d is he su\n", x);
        else
            printf("%d is not he su\n", x);
    }
    return 0;
}
