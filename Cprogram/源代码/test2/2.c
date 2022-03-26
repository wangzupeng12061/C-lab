#include <stdio.h>
int max(int p, int q);
int min(int m, int n);
int a, b, p, q;
int main()
{
    int i, x[1000];
    while (scanf("%d %d", &a, &b) != EOF)
    {
        if (max(a, b) % min(a, b) == 0)
        {
            printf("%d %d\n", min(a, b), max(a, b));
        }
        else
        {
            x[0] = max(a, b) % min(a, b);
            x[1] = min(a, b) % x[0];
            if (x[1] == 0)
            {
                printf("%d %d", x[0], a * b / x[0]);
            }
            else
            {
                x[2] = 1;
                for (i = 2; x[i] != 0; i++)
                {
                    x[i] = x[i - 2] % x[i - 1];
                    if (x[i] == 0)
                    {
                        break;
                    }
                }
                printf("%d %d\n", x[i - 1], a * b / x[i - 1]);
            }
        }
    }
}
int max(int p, int q)
{
    if (p > q)
        return p;
    else
        return q;
}
int min(int m, int n)
{
    if (m > n)
        return n;
    else
        return m;
}
