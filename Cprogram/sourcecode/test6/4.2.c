#include <stdio.h>
void rotate(int *p, int n, int m)
{
    int b[m + 1][n + 1];
    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 1; j < m + 1; j++)
            b[m - j + 1][i] = *(p + (i - 1) * (m + 1) + (j - 1));
    }
    for (int i = 1; i < m + 1; i++)
    {
        for (int j = 1; j < n + 1; j++)
            printf("%d ", b[i][j]);
        printf("\n");
    }
}
int main(void)
{
    int n, m;
    scanf("%d%d", &n, &m);
    int a[n + 1][m + 1];
    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 1; j < m + 1; j++)
            scanf("%d", &a[i][j]);
    }
    int *p = &a[1][1];
    rotate(p, n, m);
    return 0;
}