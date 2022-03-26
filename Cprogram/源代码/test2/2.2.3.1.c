#include <stdio.h>
int main()
{
    double x;
    scanf("%lf", &x);
    if (0 <= x && x < 1000)
        printf("%.2f\n", x);
    else if (1000 <= x && x < 2000)
        printf("%.2f\n", (x - 999) * 0.05);
    else if (2000 <= x && x < 3000)
        printf("%.2f\n", (x - 1999) * 0.1 + 50);
    else if (3000 <= x && x < 4000)
        printf("%.2f\n", (x - 2999) * 0.15 + 150);
    else if (4000 <= x && x < 5000)
        printf("%.2f\n", (x - 3999) * 0.2 + 300);
    else
        printf("%.2f\n", (x - 4999) * 0.25 + 500);
    switch ((int)((int)x / 1000))
    {
    case 0:
        printf("%.2f", x);
        break;
    case 1:
        printf("%.2f", (x - 999) * 0.05);
        break;
    case 2:
        printf("%.2f", (x - 1999) * 0.1 + 50);
        break;
    case 3:
        printf("%.2f", (x - 2999) * 0.15 + 150);
        break;
    case 4:
        printf("%.2f", (x - 3999) * 0.2 + 300);
        break;
    default:
        printf("%.2f", (x - 4999) * 0.25 + 500);
    }
    return 0;
}