#include <stdio.h>
int main(void)
{
	double pai=0;
	int i;
	for(i=1;(1.0/(2.0*i-1))>1e-5;i++)
	{
		if(i%2==0) pai=pai-(4.0/(2.0*i-1));
		else pai=pai+4.0/(2.0*i-1);
	}
	printf("%lf",pai);
	return 0;
}
