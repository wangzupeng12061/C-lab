//问题描述：给定n种不同价值，不同重量的物品和一背包。物品i的重量为wi，价值为vi，背包容量为c。
//选择装入背包的物品，使物品的总价值最大。
#include <stdio.h>
#define N 5//物品数量
#define C 10//背包重量
#define max(a, b) ((a) > (b) ? (a) : (b))
int m(int i, int j);
void printans(int c, int n);
int w[N + 1] = {0, 2, 2, 3, 5, 4}; //重量
int v[N + 1] = {0, 6, 3, 6, 4, 1}; //价值
int d[N + 1][C + 1];               //子问题最优值
int x[N + 1];                      //最优方案

//记忆化搜索计算m(i,j)
int m(int i, int j)//背包容量为j，可选择i，i+1，...，n物品的最优值
{
    if (d[i][j] >= 0)
        return d[i][j]; //避免重复
    if (i == N+1)
        return (d[i][j] = (j >= w[i] ? v[i] : 0)); //已到终点
    if (j < w[i])
        return (d[i][j] = m(i + 1, j));                             //放不下第i个物品，继续搜索
    return (d[i][j] = max(m(i + 1, j), m(i + 1, j - w[i]) + v[i])); //放得下，进入递归比较，两种状态取最大值，决策
}

//构造最优值并输出
void printans(int c, int n)
{
    int i;
    for (i = 1; i < n; i++)
    {
        if (d[i][c] == d[i + 1][c])
            x[i] = 0;
        else
        {
            x[i] = 1;
            c -= w[i];
        }
    }
    x[n] = (d[n][c] > 0) ? 1 : 0;
    for (i = 1; i <= n; i++)
        printf("%5d", x[i]);
    printf("\n");
}

int main(void)
{
    int i, j;
    for (i = 1; i <= N;i++)
    {
        for (j = 1; j <= C;j++)
        {
            d[i][j] = -1;
        }
    }
    printf("the best value:%5d", m(1, C));
    printf("\nthe best solution: ");
    printans(C, N);
    return 0;
}