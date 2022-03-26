#include <math.h>
#include <stdio.h>
int SUSHU(int n);
void KUAISU(long long n);
void PERFECT(long long n);
int main()
{
    long long n;
    /*while (scanf("%lld", &n) != EOF)
    {
        int i;
        for (i = 2; i < 15; i++)
        {
            long long x;
            if (n == pow(2, i - 1) * (pow(2, i) - 1))
                x = SUSHU(pow(2, i) - 1);
            else
            {
                if (i < 14)
                    continue;
                else
                    printf("%lld is not a perfect number\n", n);
                break;
            }
            if (x != 0)
            {
                printf("%lld is a perfect number\n", n);
                break;
            }
            else
            {
                printf("%lld is not a perfect number\n", n);
                break;
            }
        }
    }*/
    //PERFECT(6);
    KUAISU(6);
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
void PERFECT(long long n)
{

    for (n = 6; n < pow(10, 8); n += 2)
    {
        int i;
        for (i = 2; i < 15; i++)
        {
            long long x;
            if (n != pow(2, i - 1) * (pow(2, i) - 1))
                continue;
            x = SUSHU(pow(2, i) - 1);
            if (x == 0)
                continue;
            printf("%lld=1", n);
            for (long long j = 2; j <= n/2; j++)
            {
                if (n % j == 0)
                    printf("+%lld", j);
                if (j == n /2)
                    printf("\n");
            }
            break;
        }
    }
}
void KUAISU(long long n)
{
    for (int i = 2; i < 20; i++)
    {
        SUSHU(pow(2, i) - 1);
        if (SUSHU(pow(2, i) - 1) == 0)
            continue;
        n = pow(2, i - 1) * (pow(2, i) - 1);
        printf("%lld=1", n);
        for (long long j = 2; j <= n/2; j++)
        {
            if (n % j == 0)
                printf("+%lld", j);
            if (j == n/2 )
                printf("\n");
        }
        
    }
}