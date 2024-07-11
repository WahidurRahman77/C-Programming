#include <stdio.h>
int main()
{
    int n, A[1006], i, j, x;
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        scanf("%d", &A[i]);
    }
    for(i=0;i<n-1;i++)
    {
        x = i;
        for(j=i+1;j<n;j++)
        {
            if (A[j] < A[x])
            {
                x = j;
            }
        }
        int temp = A[i];
        A[i] = A[x];
        A[x] = temp;
    }
    for(i=0;i<n;i++)
    {
        printf("%d ", A[i]);
    }
 
    return 0;
}
