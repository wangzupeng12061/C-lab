#include<stdio.h>
int main()
{
    unsigned long x,y,a,b,c,d;
    while(scanf("%ld",&x)!=EOF)
    {
        y=0xff;
        a=x&y;
        x>>=8;
        b=x&y;
        x>>=8;
        c=x&y;
        x>>=8;
        d=x&y;
        printf("\n%d.%d.%d.%d",d,c,b,a);
    }
    return 0;
}