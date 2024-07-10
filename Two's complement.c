#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], str1[100]={0};
    printf("Enter a binary number: ");
    gets(str);
    int i, j;
    for(i=strlen(str)-1; i >= 0 ;i--)
    {
        str1[i]=str[i];
        if(str[i] == '1')
        {
            break;
        }
    }
    for(j=i-1; j >=0 ;j--)
    {
        if(str[j] == '0')
        {
            str1[j]= '1';
        }
        else
        {
            str1[j]= '0';
        }
    }
    printf("Two's complement: %s\n", str1);

    return 0;
}
