#include <math.h>
#include <stdio.h>
#define max(a, b, c) (a) >= (b) ? ((a) >= (c) ? (a) : (c)) : ((b >= c) ? (b) : (c))
#define min(a, b, c) (a) <= (b) ? ((a) <= (c) ? (a) : (c)) : ((b <= c) ? (b) : (c))
#define mid(a, b, c) (a) >= (b) ? ((a) <= (c) ? (a) : ((b) >= (c) ? (b) : (c))) : ((a) >= (c) ? (a) : ((b) <= (c) ? (b) : (c)))
#define s(a, b, c) ((double)(a + b + c) / 2.0)
#define area(a, b, c, s) sqrt(s *(s - a) * (s - b) * (s - c))
int main()
{
    double max, mid, min;
    double a, b, c, s, area;
    printf("please input three sides:");
    while (scanf("%lf %lf %lf", &a, &b, &c) != EOF)
    {
        max = max(a, b, c);
        mid = mid(a, b, c);
        min = min(a, b, c);
        if ((min + mid) > max)
        {
            s = s(a, b, c);
            area = area(a, b, c, s);
            printf("the s is %lf\nthe area is %lf", s, area);
        }
        else
            printf("Error! please input again\n");
    }
    return 0;
}