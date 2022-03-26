#include <stdio.h>
int main()
{
	int n;
	while (scanf("%d", &n) != EOF)
	{
		long long t;	//用于偶数判断记录(n-1)*(n-2)*(n-3)
		if (n % 2 == 0) //偶数判断
		{
			t = (n - 1) * (n - 2) * (n - 3);
			int j = 3;
			while (n % j == 0)
			{		 //处理 3 ，公约数3 5 7 9...
				j++; //跳过偶数
				j++;
			}
			long long k = n * (n - 1) * (n - j); //获取到n, n-j无最小公倍数是时的值k
			if (t > k)
			{ //处理 标记3
				printf("%lld\n", t);}
			else
			{printf("%lld\n", k);}
		}
		else //奇数判断
		{
			printf("%lld\n", n * (n - 1) * (n - 2));
		}
	}
}