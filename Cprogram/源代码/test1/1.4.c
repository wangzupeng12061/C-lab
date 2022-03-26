#include<stdio.h>
int main()
{
    char x[1010];
    char c;
    scanf("%s",&x);
    for(int i=0;i<strlen(x);i++)
    {
        c=x[i];
        char a,b,k,k1;
        a=(c&0x2a)>>1;
        b=(c&0x15)<<1;
        k=(c&0xc0);
        c=k|a|b;
        k1=k>>6;
        for(int j=1;j<=k1;j++)
        {
            char m,n;
            m=(c&0x20)>>5;
            n=(c&0x1f)<<1;
            c=m|n|k;
        }
        x[i]=c;

    }
    printf("%s",x);
    return 0; 
}