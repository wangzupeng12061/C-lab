#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define n 100
#define m 10
int input(void);
void dictionarysort(int len);
void compare(char a[], char b[][m], int len);
void output(int len, int a[], char[][m]);
void bubblesort(int a[], int len);
void quicksort(int a[], int left, int right);
int part(int a[], int left, int right);
void swap(int a[], int i, int j);
int mark[n];
char name[n][m], change[m];
int left1 = 0, right1 = 0;
int main()
{
    printf("welcome to use me\n");
    while (1)
    {
        int c;
        int len;
        printf("now you have 3 choice:\n");
        printf("1:input students' mark and name\n2:output their mark\n");
        printf("3:sort their mark\n");
        printf("tip:please choose '1' first\n");
    A:
        scanf("%d", &c);
        if (c != 1)
        {
            printf("please input '1' again\n");
            goto A;
        }
        len = input();
        printf("please check your input\n");
        printf("if someone's mark is wrong,please input '0',or input '1'\n");
        scanf("%d", &c);
        if (c== 0)
        {
            printf("please input him or her name\n");
            scanf("%s", change);
            compare(change, name, len);
        }
        printf("your input is over.\nnow you can start next link\n");
        while (1)
        {
            printf("2:output their mark\n3:sort their mark3\n");
        B:
            printf("please choose '2' or '3'\n");
            scanf("%d", &c);
            switch (c)
            {
            case 2:
                output(len, mark, name);
                break;
            case 3:
                if (len > 10)
                    quicksort(mark, 0, len - 1);
                else
                    bubblesort(mark, len);
                dictionarysort(len);
                printf("sort is finished.if you want to output,please input '1',or input '0'\n");
                scanf("%d", &c);
                if (c == 1)
                    output(len, mark, name);
                break;
            default:
                printf("please input right number\n");
                goto B;
            }
            printf("if you want to input other data,please input '1',or input '0'\n");
            scanf("%d", &c);
            if (c == 0)
                break;
        }
        printf("if you want to quit,please input '0',or input '1'\n");
        scanf("%d", &c);
        if (c == 0)
            break;
    }
    printf("happy to serve you! welcome to use me again\n");
    system("pause");
}
int input(void)
{
    int i = 0;
    printf("please input students' mark:\ninput 'ctrl^z' to finish\n");
    while (scanf("%d", &mark[i++]) != EOF)
        ;
    printf("please input students' name:\n");
    for (int j = 0; j < i - 1; j++)
        scanf("%s",name[j]);
    return i - 1;
}
void output(int len, int a[], char b[][m])
{
    for (int i = len - 1; i >= 0; i--)
    {
        printf("%s:", b[i]);
        printf("%d  ", a[i]);
    }
    printf("\n");
}
void bubblesort(int a[], int len)
{
    for (int i = 0; i < len - 1; i++)
    {
        for (int j = i + 1; j < len; j++)
        {
            if (a[i] > a[j])
                swap(a, i, j);
        }
    }
}
void quicksort(int a[], int left, int right)
{
    int split;
    if (left < right)
    {
        split = part(a, left, right);
        quicksort(a, left, split - 1);
        quicksort(a, split + 1, right);
    }
}
int part(int a[], int left, int right)
{
    int i = left, j = right + 1;
    int split = (left + right) / 2;
    swap(a, left, split);
    for (;;)
    {
        while (a[++i] <= a[left] && i <= right)
            ;
        while (a[--j] > a[left])
            ;
        if (i >= j)
            break;
        swap(a, i, j);
    }
    swap(a, left, j);
    return j;
}
void swap(int a[], int i, int j)
{
    int temp;
    temp = a[i];
    a[i] = a[j];
    a[j] = temp;
    char t[m];
    strcpy(t, name[i]);
    strcpy(name[i], name[j]);
    strcpy(name[j], t);
}
void dictionarysort(int len)
{
    int i, j, x;
    for (x = 0; x < len - 1; x++)
    {
        for (i = 0; i < len - 1 - x; i++)
        {
            if (mark[i] == mark[i + 1])
            {
                for (j = 0; j < m; j++)
                {
                    if (name[i][j] < name[i + 1][j])
                    {
                        char t[m];
                        strcpy(t, name[i]);
                        strcpy(name[i], name[i + 1]);
                        strcpy(name[i + 1], t);
                        break;
                    }
                    else if(name[i][j] > name[i + 1][j])
                        break;
                }
            }
        }
    }
}
void compare(char a[], char b[][m], int len)
{
     int flag = 1, temp = 0;
    for (int i = 0; i < len; i++)
    {
        flag = 1;
        for (int j = 0; j < m; j++)
        {
            if (a[j] != b[i][j])
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
        {
            printf("please input conrect mark\n");
            scanf("%d", &temp);
            mark[i] = temp;
            break;
        }
    }
}