#include<stdio.h>
int main()
{
    int alpha_arr[26] = {0};
    int str_size;
    char ch;
    scanf("%d\n", &str_size);
    for(int i=0; i<str_size; i++)
    {
        ch = getchar();
        alpha_arr[ch - 'a']++;
    }
    for(int i=0; i<26; i++)
    {
        for(int j=0; j<alpha_arr[i]; j++)
        {
            putchar('a' + i);
        }
    }
    return 0;
}