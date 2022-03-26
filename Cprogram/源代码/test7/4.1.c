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
void sort(score *head);
int main(void)
{
    int c;
    double average1[10];
    score *head = (score *)malloc(sizeof(score));
    while(1){
    A:printf("1:input data\n2:output data\n3:change data\n4:static average score\n5:out put all data\n6:sort data\n");
    scanf("%d", &c);
    switch (c)
    {
    case 1:input(&head);break;
    case 2:output(head);break;  /* code */
    case 3:change(head);break;
    case 4:average(head, average1);break;
    case 5:op(head);break;
    case 6:sort(head);break;
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
void sort(score *head)
{
    score *p1=head, *p2;
    int len = 0, i, j, t;
    char s[10];
    while(p1){
        len++;
        p1 = p1->next;
    }
    for (i = 0,p1 = head; i < len - 1;i++,p1=p1->next)
        for (j = i + 1, p2 = p1->next; j < len;j++,p2=p2->next)
        if((p1->cp+p1->physic+p1->math)>(p2->math+p2->cp+p2->physic))
        {
            t = p1->physic;p1->physic = p2->physic;p2->physic = t;
            t = p1->cp;p1->cp = p2->cp;p2->cp = t;
            t = p1->math;p1->math = p2->math;p2->math = t;
            strcpy(s, p1->number);strcpy(p1->number, p2->number);strcpy(p2->number, s);
            strcpy(s, p1->name);strcpy(p1->name, p2->name);strcpy(p2->name, s);
        }
}