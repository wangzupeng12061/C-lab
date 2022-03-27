#include <math.h>
#include <stdio.h>
void GDBH(int n);
int SUSHU(int n);
int main()
{
    int n;
    while (scanf("%d", &n) != EOF && n >= 4 && n % 2 == 0)
    {
        GDBH(n);
    }
}
void GDBH(int n)
{
    int i, x, y;
    for (i = 2; i < n; i++)
    {
        x = SUSHU(i);
        if (x == 0)
            continue;
        y = SUSHU(n - x);
        if (y == 0)
            continue;
            if(x<=(n-x))
        printf("%d=%d+%d\n", n, x, y);
        //break;
    }
}
int SUSHU(int n)
{
    int i;
    if (n != 2)
    {
        for (i = 2; i < n; i++)
        {
            if (n % i == 0)
                return 0;
        }
        return n;
    }
    else
        return n;
}