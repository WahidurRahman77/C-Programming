#include <stdio.h>

int main()
{
    int n, i, a=0, b=1, series=0;
    printf("Enter the number: ");
    scanf("%d", &n);
    printf("The Fibonacci series of %d is:\n", n);
    for(i = 1; i <= n; i++)
    {
        printf("%d ", a);
        series = a + b;
        a = b;
        b = series;
    }
    
    
    return 0;
}