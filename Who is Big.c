#include <stdio.h>
#include <string.h>

int main()
{
    int number_of_test_case, i;
    char longest_str[10000] = "";
    char str[10000];

    scanf("%d", &number_of_test_case);
    getchar();

    for (i = 0; i < number_of_test_case; i++)
    {
        fgets(str);
        if (strlen(str) > strlen(longest_str))
        {
            strcpy(longest_str, str);
        }
    }
    puts(longest_str);

    return 0;
}
