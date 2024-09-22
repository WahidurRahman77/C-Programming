#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int n, i, j, hasUpper, hasLower, hasDigit, hasSpecial;
    scanf("%d", &n);
    getchar();
    for (i = 0; i < n; i++)
        {
        char str[10000];
        fgets(str, sizeof(str), stdin);
        str[strcspn(str, "\n")] = '\0';

        hasUpper = hasLower = hasDigit = hasSpecial = 0;

        for (j = 0; j < strlen(str); j++)
        {
            if (isupper(str[j]))
            {
                hasUpper = 1;
            }
            else if (islower(str[j]))
            {
                hasLower = 1;
            }
            else if (isdigit(str[j]))
            {
                hasDigit = 1;
            }
            else if (ispunct(str[j]))
            {
                hasSpecial = 1;
            }
        }

        if (hasUpper && hasLower && hasDigit && hasSpecial)
        {
            printf("STRONG\n");
        }
        else
        {
            printf("WEAK\n");
        }
    }

    return 0;
}