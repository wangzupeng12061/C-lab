#define  R
#include<assert.h>
#include<stdio.h>//1
int integer_fraction(float x);//2
int main(void)
{
	float  r, s;
	int s_integer=0;
    printf ("Input a number: ");
    scanf("%f",&r);
    #ifdef  R
       s=3.14159*r*r;
       printf("Area of round is: %f\n",s);
       s_integer=integer_fraction(s);
       assert((s-s_integer)<1);
       if((s-s_integer)<0.5)
       printf("The integer fraction of area is %d\n", s_integer);
       else
       printf("The integer fraction of area is %d\n", s_integer+1);
    #endif
    return 0;
}

int integer_fraction(float x)
{
  int i=x;
  return i;
}
