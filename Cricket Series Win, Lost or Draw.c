#include <stdio.h>
#include <string.h>

int main()
{
    int N, win, loose;
    char str[1006];
    scanf("%d", &N);
    getchar();
    for (int i = 0; i < N; i++)
    {
        gets(str);
        win = loose = 0;
        for(int j = 0; j < strlen(str); j++)
        {
            if(str[j] == '1')
            {
                win++;
            }
            else if(str[j] == '0')
            {
                loose++;
            }
        }
        if(win > loose)
        {
            printf("BD HAS WON THE SERIES\n");
        }
        else if(loose > win)
        {
            printf("BD HAS LOST THE SERIES\n");
        }
        else if(win == loose)
        {
            printf("SERIES DRAWN\n");
        }
    }


    return 0;
}
