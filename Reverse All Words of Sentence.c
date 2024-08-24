#include <stdio.h>
#include <string.h>

int main()
{
    char str[10006];
    int start, end, i;
    gets(str);

    int l = strlen(str);
    start = 0;
    for (i = 0; i <= l; i++)
    {
        if (str[i] == ' ' || str[i] == '\0')
        {
            end = i - 1;
            while (end >= start)
            {
                printf("%c", str[end]);
                end--;
            }
            if (str[i] == ' ')
            {
                printf(" ");
            }
            start = i + 1;
        }
    }

    return 0;
}