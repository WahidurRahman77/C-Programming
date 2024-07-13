#include <stdio.h>
int main() 
{
    int x;
    scanf("%d", &x);
    for (int i = 0; i < x; i++) 
    {
        int n, f = 0;
        scanf("%d", &n);
        if (n <= 1) 
        {
            printf("%d nao eh primo\n", n);
            continue;
        }
        for (int j = 2; j * j <= n; j++) 
        {
            if (n % j == 0) 
            {
                f = 1;
                break;
            }
        }
        if (f == 0)
        {
            printf("%d eh primo\n", n);
        } 
        else 
        {
            printf("%d nao eh primo\n", n);
        }
    }
    return 0;
}
