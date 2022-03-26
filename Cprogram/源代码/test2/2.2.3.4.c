#include <stdio.h>
int main()
{
    int x, y;
    for (x = 100; x <= 999; x++)
    {
        y = x * x;
        y = y % 1000;
        if (x == y)
        {
            printf("%d\n", x);
        }
    }
    return 0;
}