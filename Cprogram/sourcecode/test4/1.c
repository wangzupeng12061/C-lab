#include<stdio.h>
#define SUM (a+b)
#define DIF (a-b)//1
#define SWAP(a,b)  t=a,a=b,b=t//2
int main() 
{
    int a,b,t;//3
    printf("Input two integers a, b:");
    scanf("%d %d", &a,&b);
    printf("\nSUM=%d\n the difference between square of a and square of b is:%d",SUM, SUM*DIF);
    SWAP(a,b);
    printf("\nNow a=%d,b=%d\n",a,b);
    return 0;
}