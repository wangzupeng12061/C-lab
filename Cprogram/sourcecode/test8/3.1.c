#include <stdio.h>
#include <string.h>
int replace(char str[], char key[], char swap[]);
int main()
{
    FILE *fp;
    int count = 0;
    fp = fopen("txt.txt", "r");
    char str1[1000] = {0}, key1[10] = {"my"}, swap1[10] = {"you"};
    fseek(fp, 0, SEEK_END);
    long long length = ftell(fp);
    fseek(fp, 0, SEEK_SET);
    fread(str1, sizeof(char), length, fp);
    printf("%s\n", str1);
    count = replace(str1, key1, swap1);
    printf("%s\n", str1);
    fclose(fp);
    fp = fopen("txt.txt", "w");
    fwrite(str1, sizeof(char), strlen(str1), fp);
    printf("%d\n", count);
    return 0;
}
int replace(char str[], char key[], char swap[]) //定义替换函数
{
    int l1, l2, l3, i, j, flag, ans = 0;
    char tmp[1000]; //临时存放字符串
    l1 = strlen(str);
    l2 = strlen(key);
    l3 = strlen(swap);
    for (i = 0; i < l1 - l2; i++)
    {
        flag = 1;
        for (j = 0; j < l2; j++) //开始查找字符串
        {
            if (str[i + j] != key[j])
            {
                flag = 0;
                break;
            }
        }
        if (flag) //找到字符串
        {
            strcpy(tmp, str);                   //将源串赋值到临时数组tmp中
            strcpy(&tmp[i], swap);              //用swap中的字符串替换tmp中的i之后的部分
            strcpy(&tmp[i + l3], &str[i + l2]); //将str除去key后的后半部分赋值给tmp
            strcpy(str, tmp);                   //再将tmp赋值到str中
            i += l3 - 1;
            l1 = strlen(str);
            ans++;
        }
    }
    return ans;
}