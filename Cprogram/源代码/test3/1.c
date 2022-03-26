/*实验3-1改错题程序：计算s=1!+2!+3!+…+n!*/
#include <stdio.h>
long long sum_fac(int n); //1
int main(void)
{
    int k;
    for (k = 1; k <= 20; k++)
        printf("k=%d\tthe sum is %lld\n", k, sum_fac(k));
    return 0;
}
long long s = 0;         //5
long long sum_fac(int n) //2
{
    long long i, fac = 1;    //3
    for (i = 1; i <= n; i++) //4
        fac *= i;
    s += fac;

    return s;
}
