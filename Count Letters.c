#include <stdio.h>
#include <string.h>

int main()
{
    char str[1000000];
    int count[27] = {0};
    scanf("%s", str);
    for (int i = 0; str[i] != '\0'; i++)
    {
        count[str[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (count[i] > 0)
        {
            printf("%c : %d\n", i + 'a', count[i]);
        }
    }

    return 0;
}
