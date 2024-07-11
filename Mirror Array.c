#include <stdio.h>

int main()
{
    int M, N, i, j;
    scanf("%d %d", &M, &N); //M is row and N is column
    int arr[M][N], arr1[M][N];
    for(i=0; i < M ;i++)
    {
        for(j=0; j < N; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for(i=0; i < M ;i++)
    {
        for(j=N-1; j >= 0; j--)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
