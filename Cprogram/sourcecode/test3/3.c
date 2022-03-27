/*	下面是计算fibonacci数列前n项和的源程序，现要求单步执行该程序，在watch窗口中观察Ik,sum,n值。具体操作如下：
（1）设输入5，观察刚执行完“scanf("%d",&k);”语句时，sum、k的值是多少？
（2）在从main函数第一次进入fibonacci函数前的一刻，观察各变量的值是多少？返回后光条停留在哪个语句上？
（3）在从main函数第一次进入fibonacci函数后的一刻，观察光条从main函数“sum+=fibonacci(i);”语句调到了哪里？
（4）在fibonacci函数内部单步执行，观察函数的递归执行过程。体会递归方式实现的计算过程是如何完成数计算的，
并特别注意什么时刻结束递归，然后直接从第一个return语句返回到了哪里？
（5）在fabonacci函数递归执行过程中观察参数n的变化情况，并回答为什么k、sum在fabonacci函数内部不可见？*/
/*实验3-3跟踪调试题程序：计算fabonacci数列前n项和*/
#include<stdio.h> 
int main(void)
{
    int i,k;
    long sum=0,fabonacci(int n);
    printf("Input n:");
    scanf("%d",&k);
    for(i=1;i<=k;i++){
        sum+=fabonacci(i);
        printf("i=%d\tthe sum is %ld\n",i,sum);
    }
    return 0;
}
long fabonacci(int n)
{
    if(n==1 || n==2)
        return 1;
    else
        return fabonacci(n-1)+fabonacci(n-2);
}	
