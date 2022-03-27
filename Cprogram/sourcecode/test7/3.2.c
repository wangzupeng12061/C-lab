/*用单向链表建立一张班级成绩单，包括每个学生的学号、姓名、英语、高等数学、普通物理、C语言程序设计四门课程的成绩。用函数编程实现下列功能：
(1) 输入每个学生的各项信息。 
(2) 输出每个学生的各项信息。
(3) 修改指定学生的指定数据项的内容。
(4) 统计每个同学的平均成绩（保留2位小数）。
(5) 输出各位同学的学号、姓名、四门课程的总成绩和平均成绩。*/
#include <stdio.h>
#include <stdlib.h>
#include<string.h>
typedef struct Score
{
    char number[10];
    char name[10]; /* data */
    int math;
    int physic;
    int cp;
    struct Score *next;
} score;
void input(score **head);
void output(score *head);
void change(score *head);
void average(score *head, double a[]);
void op(score *head);
int main(void)
{
    int c;
    double average1[10];
    score *head = (score *)malloc(sizeof(score));
    while(1){
    A:printf("1:input data\n2:output data\n3:change data\n4:static average score\n5:out put all data\n");
    scanf("%d", &c);
    switch (c)
    {
    case 1:input(&head);break;
    case 2:output(head);break;  /* code */
    case 3:change(head);break;
    case 4:average(head, average1);break;
    case 5:op(head);break;
    default:
        goto A;
    }
    printf("input 0 to quit\n");
    scanf("%d", &c);
    if(c==0)
        break;}
}
void input(score **head)
{
    int ans = 0;
    score *loc_head = (score *)malloc(sizeof(score)), *tail, *q;
    printf("input 'ctrl z' to finish\n");
    printf("number\tname\tmath\tphysic\tcp\n");
    scanf("%s%s%d%d%d", loc_head->number, loc_head->name, &loc_head->math, &loc_head->physic, &loc_head->cp);
    q = tail = loc_head;
    while (1)
    {
        if (ans > 0)
        {
            //q->next = (score *)malloc(sizeof(score));为什么这样写不对
            q = q->next;
        }
        tail->next = (score *)malloc(sizeof(score));
        tail = tail->next;
        if (scanf("%s", tail->number) == EOF)
            break;
        scanf("%s%d%d%d", tail->name, &tail->math, &tail->physic, &tail->cp);
        ans++;
    }
    q->next = NULL;
    *head = loc_head;
}
void output(score *head)
{
    printf("number\tname\tmath\tphysic\tcp\n");
    while (head)
    {
        printf("%s\t%s\t%d\t%d\t%d\n", head->number, head->name, head->math, head->physic, head->cp);
        head = head->next;
    }
}
void change(score *head)
{
    char s[10],m[10],math[]={"math"},physic[]={"physic"},cp[]={"cp"};
    int new,flag=0,flag1=1;
    printf("input name and course and new data\n");
    scanf("%s%s%d", s,m, &new);
    while(head)
    {
        if(strcmp(s,head->name)==0)
        {
            if(strcmp(m,math)==0){
                head->math = new;
                flag1 = 0;
            }
            else if(strcmp(m,physic)==0){
                head->physic = new;
                flag1 = 0;
            }
            else if(strcmp(m,cp)==0){
                head->cp = new;
                flag1 = 0;
            }
            else
                flag = 1;
            break;
        }
        else
            head = head->next;
    }
    if(flag==1||flag1==1)
        printf("error\n");
}
void average(score *head,double a[])
{
    int i = 0;
    while(head)
    {
        a[i] = (double)(head->math + head->cp + head->physic) / 3;
        head = head->next;
        i++;
    }
}
void op(score *head)
{
    printf("number\tname\tall\taverage\n");
    while(head)
    {
        printf("%s\t%s\t%d\t%.2f\n", head->number, head->name, head->cp + head->math + head->physic, (head->cp + head->math + head->physic) / 3.0);
        head = head->next;
    }
}
