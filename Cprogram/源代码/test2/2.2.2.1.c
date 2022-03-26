#include <stdio.h>
int main()
{
    int i, x, k, flag=0; //注意flag的作用域
    printf("本程序判断合数，请输入大于1的整数，以Ctrl+Z结束\n");
    while (scanf("%d", &x) != EOF)
    {
        for (i = 2, k = x >> 1; i <= k&&flag==0; i++) //保证flag每次刷新
        {
            if (!(x % i))
            {
                flag = 1;
            }
        }
        if (flag == 1)
            printf("%d is he su", x);
        else
            printf("%d is not he su", x);
        flag = 0;//刷新
    }
    return 0;
}
