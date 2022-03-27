#include<stdio.h>
#include<string.h>
void task0(void);
void task1(void);
void task2(void);
void task3(void);
void task4(void);
void task5(void);
void task6(void);
void task7(void);
void scheduler(char *p);
void execute(void (*p[])(void), int n);
int main(void)
{
    char s[100];
    scanf("%s", s);
    scheduler(s);
}
void scheduler(char *p)
{   
    int n = strlen(p);
    void (*pr[n])(void);
    for (int i = 0; i < n;i++)
    {
        int temp = *(p + i) - '0';
        switch(temp)
        {
            case 0:pr[i] = task0;break;
            case 1:pr[i] = task1;break;
            case 2:pr[i] = task2;break;
            case 3:pr[i] = task3;break;
            case 4:pr[i] = task4;break;
            case 5:pr[i] = task5;break;
            case 6:pr[i] = task6;break;
            case 7:pr[i] = task7;break;
        }
    }
    execute(pr, n);
}
void execute(void (*p[])(void), int n)
{
    for (int i = 0; i < n;i++)
    {
        p[i]();
    }
}
void task0(void)
{
    printf("task0 is called!\n");
}
void task1(void)
{
    printf("task1 is called!\n");
}
void task2(void)
{
    printf("task2 is called!\n");
}
void task3(void)
{
    printf("task3 is called!\n");
}
void task4(void)
{
    printf("task4 is called!\n");
}
void task5(void)
{
    printf("task5 is called!\n");
}
void task6(void)
{
    printf("task6 is called!\n");
}
void task7(void)
{
    printf("task7 is called!\n");
}