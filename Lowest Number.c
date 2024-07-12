#include <stdio.h>
int main()
{
    int A[100006], n, i, x, j=0, sum;
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
       scanf("%d", &A[i]);
    }
    x=A[0];
    for(i=0;i<n;i++)
    {
      if(x>A[i])
      {
          x=A[i];
          j=i;
      }
 
    }
    printf("%d %d", x, (j+1));
 
}