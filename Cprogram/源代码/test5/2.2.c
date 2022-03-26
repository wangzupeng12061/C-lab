#include <stdio.h>
#define M 12
#define N 3
int main(void)
{
    int a[M], b[M + 1] = {0}; //a数组存出圈人的编号，b数组标记
    int i, j, k;
    for (i = M, j = 1; i >= 1; i--) //每次标记一个人，直到剩一个人时结束循环
    {
        for (k = 1; k <= N;) //未标记的人报数
        {
            if (!b[j]) //跳过标记
            {
                k++; //有标记，不自加
            }
            if (++j > M) //j=M时，j=1重新循环
            {
                j = 1;
            }
        }
        if (j == 1)
            b[M] = 1;
        else
            b[j - 1] = 1;                //标记出圈人，
        a[M - i] = (j == 1 ? M : (j - 1)); //j=1说明到恰好是第M个人报到N，否则是编号为j-1的人
    }
    for (i = 0; i < M - 1; i++) /* 按次序输出出圈人的编号 */
        printf("%6d", a[i]);
    printf("\n%6d", j - 1); /* 输出圈中最后一个人的编号 */
    return 0;
}
