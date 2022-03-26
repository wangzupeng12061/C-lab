#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define M 3
#define N 2
int main(void)
{
    char s1[M + N + 2], s2[M + N + 2], s3[M + N + 3];
    scanf("%s%s", s1, s2);
    char *p1, *p2, *p3;
    s3[M + N + 2] = '\0';
    s3[0] = '0';
    p1 = (char *)malloc(strlen(s1) + 1);
    p2 = (char *)malloc(strlen(s2) + 1);
    p3 = (char *)malloc(strlen(s3) + 1);
    p1 = &s1[M + N];
    p2 = &s2[M + N];
    p3 = s3;
    int temp;
    for (int i = M + N + 1; i >= 0; i--)
    {
        if (i == M + N + 1)
        {
            s3[i] = ((*p1 - '0') + (*p2 - '0')) % 10 + '0';
            temp = ((*p1 - '0') + (*p2 - '0')) / 10;
            p1--;
            p2--;
            continue;
        }
        if (i == N + 1)
        {
            s3[i] = '.';
            p1--;
            p2--;
            continue;
        }
        if (i == 0)
        {
            s3[i] = temp + '0';
            continue;
        }
        s3[i] = (((*p1 - '0') + (*p2 - '0')) % 10 + temp)%10 + '0';
        temp = (((*p1 - '0') + (*p2 - '0'))%10+temp) / 10;
        p1--;
        p2--;
    }
    if (s3[0] == '0')
        p3++;
    printf("%s", p3);
    return 0;
}