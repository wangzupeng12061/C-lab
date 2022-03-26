#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int i = 0, j = 0, a[n][n];
    for (i = 0; i < n; i++)//存入第一个和最后一个1
    {
        a[i][0] = 1;
        a[i][i] = 1;
    }
    for (i = 2; i < n; i++)//填满空隙
    {
        for (j = 1; j < i; j++)
        {
            a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
        }
    }
    for (i = 0; i < n; i++)//调整位置
    {
        for (j = 0; j < 2 * (n - i); j++)/*一位数字和一个空格占位相同，定义数组长度为4*/
        {   /*，第0行应该移位 2*n，后面依次递减两位,最后一行即n-1行是2*/                             
            printf(" ");
        }
        for (j = 0; j <= i; j++)
        {
            printf("%-4d", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
