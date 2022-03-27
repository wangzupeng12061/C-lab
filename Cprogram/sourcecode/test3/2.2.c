#include <stdio.h>
double mulx(double x, int n);
long fac(int n);
double sum(double x, int n)
{
    double c;
    double z = 1.0;
    if (n == 1)
    {
        c = z + x;
    }
    //if(sum(x,n-1)!=-1)
    //
    else
    {
        c = sum(x, n - 1) + mulx(x, n) / fac(n);
    }
    return c;
}
double mulx(double x, int n)
{
    int i;
    double z = 1.0;
    for (i = 0; i < n; i++)
    {
        z = z * x;
    }
    return z;
}
long fac(int n)
{
    int c;
    if (n == 1)
    {
        c = 1;
    }
    else
    {
        c = fac(n - 1) * n;
    }
    return c;
}
int main()
{
    double x;
    int n;
    printf("Input x and n:");
    while (scanf("%lf %d", &x, &n) != EOF)
    {
        printf("The result is %lf\n", sum(x, n));
        printf("Input x and n:");
    }
    return 0;
}
