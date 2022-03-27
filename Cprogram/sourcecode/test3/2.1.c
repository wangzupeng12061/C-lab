//根据 将实验3-1改错题程序中sum_fac函数修改为一个递归函数，用递归的方式计算 。
#include <stdio.h>
long long sum_fac(int m);
long long fac_1(int n);
int n;
int main(void)
{
    while (scanf("%d", &n) != EOF)
    {
       int k;
    for (k = 1; k <= n; k++)
        printf("k=%d\tthe sum is %lld\n", k, sum_fac(k));
       // sum_fac(k);
    }
    return 0;
}
long long sum_fac(int m)
{
    long long s;
    long long i, fac = 1;
    if (m == 1)
    {
        s = 1;
        //goto A;
    }
    else                           
    {
        for (i = 1; i <= m; i++)
        {
            fac *= i;           
        }
        s = fac+sum_fac(m - 1);
      // A: printf("%lld\n", s);
        /*s = fac_1(m) + sum_fac(m - 1);*/
    }
    return s;
}
/*long long fac_1(int n)
{
    int c;
    if (n == 1)
    {
        c = 1;
    }
    else
    {
        c = fac_1(n - 1) * n;
    }
    return c;
}*/
