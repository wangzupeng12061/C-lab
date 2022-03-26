#include<stdio.h>
struct bits
{
    unsigned int bit0 : 1, bit1 : 1, bit2 : 1, bit3 : 1, bit4 : 1, bit5 : 1, bit6 : 1, bit7 : 1; /* data */
};
void f0( int n)
{
	printf("the function %d is called!\n",n);
}
void f1( int n)
{
	printf("the function %d is called!\n",n);
}
void f2( int n)
{
	printf("the function %d is called!\n",n);
}
void f3( int n)
{
	printf("the function %d is called!\n",n);
}
void f4( int n)
{
	printf("the function %d is called!\n",n);
}
void f5( int n)
{
	printf("the function %d is called!\n",n);
}
void f6( int n)
{
	printf("the function %d is called!\n",n);
}
void f7( int n)
{
	printf("the function %d is called!\n",n);
}
int main(void)
{
    struct bits bit = {0};
    void (*p_fun[8])(int)={f0,f1,f2,f3,f4,f5,f6,f7};
    unsigned int c;
    scanf("%d", &c);
    for (int i = 0; i < 8;i++,c>>= 1){
        if (c&1)
        {
            switch(i)
            {
                case 0:bit.bit0 = 1;p_fun[0](0);break;
                case 1:bit.bit1 = 1;p_fun[1](1);break;
                case 2:bit.bit2 = 1;p_fun[2](2);break;
                case 3:bit.bit3 = 1;p_fun[3](3);break;
                case 4:bit.bit4 = 1;p_fun[4](4);break;
                case 5:bit.bit5 = 1;p_fun[5](5);break;
                case 6:bit.bit6 = 1;p_fun[6](6);break;
                case 7:bit.bit7 = 1;p_fun[7](7);break;    
            }
        }
    }
    return 0;
}