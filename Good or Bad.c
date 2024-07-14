#include <stdio.h>
#include <string.h>

int main()
{
    int number_of_testcase, i;
    scanf("%d", &number_of_testcase);
    char str[100001];
    for (i = 0; i < number_of_testcase; i++)
    {
        scanf("%s", str);
        if (strstr(str, "010") != NULL || strstr(str, "101") != NULL)
        {
            printf("Good\n");
        }
        else
        {
            printf("Bad\n");
        }
    }

    return 0;
}
