#include <stdio.h>

// Function to check perfect number
int perfect_number(int num)
{
    int sum = 0, i;
    for (i = 1; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            sum += i;
        }
    }
    if (sum == num) // Check if sum of divisors equals the number
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    if (perfect_number(number))
    {
        printf("%d is a perfect number.\n", number);
    }
    else
    {
        printf("%d is not a perfect number.\n", number);
    }

    return 0;
}
