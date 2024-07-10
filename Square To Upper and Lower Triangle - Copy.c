#include <stdio.h>

int main()
{
    int n, i, j, m;
    scanf("%d", &n);
    int arr[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\n");
    for(i=0;i<n-1;i++)
    {
        m=0;
        for(j=n-1;j>i;j--)
        {
            printf("%d ", arr[i][m]);
            m++;
        }
        printf("\n");
    }
     for (i=1;i<n;i++)
    {
        for (j=n-1;j>i;j--)
        {
            printf("  ");
        }
        m = n - i;
        for (j = 1; j <= i; j++)
        {
            printf("%d ", arr[i][m++]);
        }
        printf("\n");
    }

    return 0;
}


