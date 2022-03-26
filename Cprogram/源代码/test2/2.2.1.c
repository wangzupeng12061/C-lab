/* 实验2-1改错题程序：合数判断器*/
#include <stdio.h>
int main()
{
    int i, x, k, flag; //注意flag的作用域
    printf("本程序判断合数，请输入大于1的整数，以Ctrl+Z结束\n");
    while (scanf("%d", &x) != EOF)
    {
        for (i = 2, flag = 0, k = x >> 1; i <= k; i++) //保证flag每次刷新1
        {
            if (!(x % i))//2
            {
                flag = 1;
                break;
            }
        }
        if (flag == 1)//3
            printf("%d is he su", x);
        else
            printf("%d is not he su", x);
    }
    return 0;
}
