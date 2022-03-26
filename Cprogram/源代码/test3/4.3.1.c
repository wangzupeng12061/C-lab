
#include <math.h>
#include <stdio.h>
void ZIMISHU(int n);
int main(void)
{
    int n = 0;
    while (scanf("%d", &n) != 0)
    {
        ZIMISHU(n);
    }
    return 0;
}
void ZIMISHU(int n)
{
    long long a = 0, b = 0, c = 0, d = 0, num = 0, s = 0, q = 0, q1;
    long long A[10] = {0};
    long long B[10] = {0};
    a = pow(10, n - 1);
    b = pow(10, n);
    for (; a < b; a++)
    {
        num = a;
        while (a > 0)
        {
            A[c] = a % 10;
            a = a / 10;
            c++;
        }
        for (; d < c; d++)
        {
            s = pow(A[d], n) + s;
        }
        /*if (q != 0)
        {
            goto A;
        }
        q = 0;
    A:*/
        if (s == num)
        {
            B[q] = num;
            q++;
        }
        q1 = q;
        a = num;
        c = 0;
        d = 0;
        num = 0;
        s = 0;
    }
    printf("%d位数的自幂数共有%lld个,分别是:", n, q1);
    int i;
    for (i = 0; i < q1; i++)
    {
        if (i == q1 - 1)
        {
            printf("%lld", B[i]);
            break;
        }
        printf("%lld,", B[i]);
    }
    printf("\n");
}