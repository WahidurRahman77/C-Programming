#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], str1[100];
    gets(str);
    int i, j;
    strcpy(str1,str);
    strrev(str);
        if(strcmp(str, str1) == 0)
        {
            printf("IT IS PELINDROME\n");
        }
        else
        {
            printf("IT IS NOT PELINDROME\n");
        }

    return 0;
}
