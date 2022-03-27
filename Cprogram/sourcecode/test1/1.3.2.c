#include<stdio.h>
int main()
{
    unsigned short m,n,x;
    scanf("%hx%hd%hd",&x,&m,&n);
    if(0<=m&&m<=15&&1<=n&&n<=16-m)
    {
        x=x>>m;
        x=(unsigned short)x<<(16-(n));
        printf("%x",x);
    }
    else
    printf("error");
    return 0;
}