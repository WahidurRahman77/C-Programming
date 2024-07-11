#include <stdio.h>
int main()
{
    int n, arr[1006], i, j, x;
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i=0;i<n-1;i++)
    {
        x = i;
        for(j=i+1;j<n;j++)
        {
            if (arr[j] < arr[x])
            {
                x = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[x];
        arr[x] = temp;
    }
    for(i=0;i<n;i++)
    {
        printf("%d ", arr[i]);
    }
 
    return 0;
}
