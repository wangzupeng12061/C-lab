#include <stdio.h>
#include <string.h>
int main()
{
    char s[1000];
START:
    while (scanf("%s", s) != EOF)
    {
        int len = strlen(s);
        int i = 0, flag = 1;
        if (s[0] == '+')
        {
            for (i = 0; i < len - 1; i++)
            {
                s[i] = s[i + 1];
            }
            goto NEST;
        }
        else if (s[0] == '-')
        {
            flag = 0;
            for (i = 0; i < len - 1; i++)
            {
                s[i] = s[i + 1];
            }
            goto NEST;
        }
    NEST:
        for (i = 0; i < len; i++)
        {
            if (s[i] == 'x' || s[i] == 'a' || s[i] == 'b' || s[i] == 'c' || s[i] == 'd' || s[i] == 'e' || s[i] == 'f' || s[i] == 'l' || s[i] == 'u')
            {
                s[i] = s[i] - 32; //小写变大写
            }
        }
        if (!(s[len - 1] == 'U' || s[len - 1] == 'L'))
        {
            if (s[0] == '0' && s[1] == 'X')
            {
                if (len == 2)
                {
                    printf("NO\n"); //特判0x是否合法
                    goto START;
                }
                for (i = 2; i < len; i++)
                {
                    if (!(('0' <= s[i] && s[i] <= '9') || ('A' <= s[i] && s[i] <= 'F')))
                    {
                        printf("NO\n");
                        goto START;
                    }
                    printf("YES\n");
                    goto START;
                }
            }
            if (s[0] == '0' && s[1] != 'X')
            {
                for (i = 1; i < len; i++)
                {
                    if (!('0' <= s[i] && s[i] <= '7'))
                    {
                        printf("NO\n");
                        goto START;
                    }
                }
                printf("YES\n");
                goto START;
            }
            if (s[0] != '0')
            {
                for (i = 0; i < len; i++)
                {
                    if (!('0' <= s[i] && s[i] <= '9'))
                    {
                        printf("NO\n");
                        goto START;
                    }
                }
                printf("YES\n");
                goto START;
            }
        }
        if ((s[len - 1] == 'U' || s[len - 1] == 'L'))
        {
            if (!(((s[len - 1] == 'U' || s[len - 1] == 'L') && (s[len - 2] != 'U' && s[len - 2] != 'L')) || (((s[len - 2] == 'L' && s[len - 1] == 'U') || (s[len - 2] == 'L' && s[len - 1] == 'L') || (s[len - 2] == 'U' && s[len - 1] == 'L')) && (s[len - 3] != 'U' && s[len - 3] != 'L')) || ((s[len - 3] == 'U' && s[len - 2] == 'L' && s[len - 1] == 'L') || (s[len - 3] == 'L' && s[len - 2] == 'L' && s[len - 1] == 'U'))))
            {
                printf("NO\n");
                goto START;
            }
            if ((s[len - 1] == 'U' || s[len - 1] == 'L') && (s[len - 2] != 'L' && s[len - 2] != 'U'))
            {
                if (flag == 0 && s[len - 1] == 'U')
                {
                    printf("NO\n");
                    goto START;
                }
                if (s[0] == '0' && s[1] == 'X')
                {
                    if (len == 3)
                    {
                        printf("NO\n");
                        goto START;
                    }
                    for (i = 2; i < len - 1; i++)
                    {
                        if (!(('0' <= s[i] && s[i] <= '9') || ('A' <= s[i] && s[i] <= 'F')))
                        {
                            printf("NO\n");
                            goto START;
                        }
                    }
                    printf("YES\n");
                    goto START;
                }
                if (s[0] == '0' && s[1] != 'X')
                {
                    for (i = 1; i < len - 1; i++)
                    {
                        if (!('0' <= s[i] && s[i] <= '7'))
                        {
                            printf("NO\n");
                            goto START;
                        }
                    }
                    printf("YES\n");
                    goto START;
                }
                if (s[0] != '0')
                {
                    if (len == 1)
                    {
                        printf("NO\n");
                        goto START;
                    }
                    for (i = 0; i < len - 1; i++)
                    {
                        if (!('0' <= s[i] && s[i] <= '9'))
                        {
                            printf("NO\n");
                            goto START;
                        }
                    }
                    printf("YES\n");
                    goto START;
                }
            }
            if (((s[len - 2] == 'U' && s[len - 1] == 'L') || (s[len - 2] == 'L' && s[len - 1] == 'L') || (s[len - 2] == 'L' && s[len - 1] == 'U')) && (s[len - 3] != 'L' && s[len - 3] != 'U'))
            {
                if (flag == 0 && (s[len - 1] == 'U' || s[len - 2] == 'U'))
                {
                    printf("NO\n");
                    goto START;
                }
                if (s[0] == '0' && s[1] == 'X')
                {
                    if (len == 4)
                    {
                        printf("NO\n");
                        goto START;
                    }
                    for (i = 2; i < len - 2; i++)
                    {
                        if (!(('0' <= s[i] && s[i] <= '9') || ('A' <= s[i] && s[i] <= 'F')))
                        {
                            printf("NO\n");
                            goto START;
                        }
                    }
                    printf("YES\n");
                    goto START;
                }
                if (s[0] == '0' && s[1] != 'X')
                {
                    for (i = 1; i < len - 2; i++)
                    {
                        if (!('0' <= s[i] && s[i] <= '7'))
                        {
                            printf("NO\n");
                            goto START;
                        }
                    }
                    printf("YES\n");
                    goto START;
                }
                if (s[0] != '0')
                {
                    if (len == 2)
                    {
                        printf("NO\n");
                        goto START;
                    }
                    for (i = 0; i < len - 2; i++)
                    {
                        if (!('0' <= s[i] && s[i] <= '9'))
                        {
                            printf("NO\n");
                            goto START;
                        }
                    }
                    printf("YES\n");
                    goto START;
                }
            }
            if (((s[len - 3] == 'U' && s[len - 2] == 'L' && s[len - 1] == 'L') || (s[len - 3] == 'L' && s[len - 2] == 'L' && s[len - 1] == 'U')))
            {
                if (flag == 0 && (s[len - 1] == 'U' || s[len - 3] == 'U'))
                {
                    printf("NO\n");
                    goto START;
                }
                if (s[0] == '0' && s[1] == 'X')
                {
                    if (len == 5)
                    {
                        printf("NO\n");
                        goto START;
                    }
                    for (i = 2; i < len - 3; i++)
                    {
                        if (!(('0' <= s[i] && s[i] <= '9') || ('A' <= s[i] && s[i] <= 'F')))
                        {
                            printf("NO\n");
                            goto START;
                        }
                    }
                    printf("YES\n");
                    goto START;
                }
                if (s[0] == '0' && s[1] != 'X')
                {
                    for (i = 1; i < len - 3; i++)
                    {
                        if (!('0' <= s[i] && s[i] <= '7'))
                        {
                            printf("NO\n");
                            goto START;
                        }
                    }
                    printf("YES\n");
                    goto START;
                }
                if (s[0] != '0')
                {
                    if (len == 3)
                    {
                        printf("NO\n");
                        goto START;
                    }
                    for (i = 0; i < len - 3; i++)
                    {
                        if (!('0' <= s[i] && s[i] <= '9'))
                        {
                            printf("NO\n");
                            goto START;
                        }
                    }
                    printf("YES\n");
                    goto START;
                }
            }
        }
    }
}