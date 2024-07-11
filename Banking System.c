#include <stdio.h>
int main()
{
    int ac, num, b, amount;
    printf("Account NO.:");
    scanf("%d", &ac);
    printf("ADD Initial balance:");
    scanf("%d", &b);
    while (1)
    {
        printf("1.Credit\t 2.Debit \t3.Exit\n");
        scanf("%d", &num);
        if(num == 1)
        {
            scanf("%d", &amount);
            b=b+amount;
        }
        else if(num == 2)
        {
            scanf("%d", &amount);
            b=b-amount;
        }
        else if(num == 3)
        {
            break;
        }
    }
    printf("Your Current Balance is: %d Taka", b);

    return 0;
}
