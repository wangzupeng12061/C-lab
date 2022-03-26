#include <stdio.h>
#define COPY 0
#define START 1
int main()
{
    char c;
    int state;
    state = COPY;
    while ((c = getchar()) != EOF)
        switch (state)
        {
        case COPY:
            if (c == ' ')
            {
                putchar(c);
                state = START;
                break;
            }
            else
            {
                putchar(c);
                break;
            }
        case START:
            if (c == ' ')
            {
                break;
            }
            else
            {
                putchar(c);
                state = COPY;
                break;
            }
        }
    return 0;
}
