#include <stdio.h>
#include <string.h>
#define m 10
char name[100][10];
int mark[100];
char we[10];
void output(int len, int a[], char b[][m]);
int delete (char a[], char b[][m], int len);
void bubblesort(int a[], int len);
void swap(int a[], int i, int j);
int input(void);
int main()
{
    int len = input();
    output(len, mark, name);
    char cg[m]={'\0'};
    scanf("%s", cg);
   
    len = delete (cg, name, len);
    printf("%d\n", len);
    output(len, mark, name);
}
int input(void)
{
    int i = 0;
    printf("please input students' mark:\ninput 'ctrl^z' to finish\n");
    while (scanf("%d", &mark[i++]) != EOF)
        ;
    printf("please input students' name:\n");
    for (int j = 0; j < i - 1; j++)
        scanf("%s", name[j]);
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
int delete (char a[], char b[][m], int len)
{
    int flag = 1, temp = 0;
    printf("%d\n", len);
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
            for (int p = i; p < len; p++)
                mark[i] = mark[i + 1];
            for (int q = i; q < len; q++)
            {
                strcpy(name[q], name[q+1]);
            }
            break;
        }
    }
    return len - 1;
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