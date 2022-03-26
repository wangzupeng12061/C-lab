#include<stdio.h>
int main(void)
{
    unsigned long x=1012;
    unsigned char *p=(unsigned char*)&x;
    p += 3;
    for (int i = 4; i > 0;i--)
    {
        unsigned int temp1,temp2;
        temp1 =temp2= *p;
        printf("%x %x\n", temp1>>4,temp2&0xf);
        --p;
    }
    return 0;
}