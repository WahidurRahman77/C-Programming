#include <stdio.h>
#include <string.h>

int main()
{
    char str[101];
    gets(str);
    int i=strlen(str)-1;
    if(str[i] % 2 == 0)
    {
        printf("The number is even");
    }
    else {
        printf("The number is odd");
    }

    return 0;
}