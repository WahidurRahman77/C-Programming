#include <stdio.h>
#include <math.h>
int main()
{
    int n, i, num, m, digit, count, sum;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &num);
        m = num;
        count = 0;
        while (m != 0)
        {
            m /= 10;
            count++;
        }
        m = num;
        sum = 0;
        while (m != 0)
        {
            digit = m % 10;
            sum += pow(digit, count);
            m /= 10;
        }
        if (sum == num)
        {
            printf("Case %d: Yes\n", i);
        }
        else
        {
            printf("Case %d: No\n", i);
        }
    }
    return 0;
}
