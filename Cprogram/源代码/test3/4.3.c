#include <math.h>
#include <stdio.h>
int SUSHU(int n);
void ZIMISHU(int n);
int main()
{
    int k;
    while (scanf("%d", &k) != 0)
    {
        ZIMISHU(k);
    }
}
void ZIMISHU(int n)
{

    long long i,m;
    int q;
    long long b[100];
    for (i = pow(10, n - 1); i < pow(10, n); i++)
    {
        m = i;
        int j;
        long long sum = 0;
        int a[100];
        for (j = 0; j < n; j++)
        {
            a[j] = i % 10;
            if (0 <= i && i <= 9)
            {
                break;
            }
            i = i / 10;
        }
        for (j = 0; j < n; j++)
        {
            sum += pow(a[j], n);
        }
        /*if (q != 0)
        {
            goto A;
        }
        q = 0;
    A:*/
        if (sum == m)
        {
            /*b[q] = i;
            q++;*/
            printf("%lld ", sum);
        }
    }
    /*printf("%d %d:", n, q);
    for (i = 0; i < q; i++)
    {
        printf("%lld,", b[i]);
    }
    printf("\n");*/
}
