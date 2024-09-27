#include<stdio.h>
int main() 
{
    int a, arr[1006], b=0;
    printf("Enter the number: ");
    scanf("%d", &a);
    printf("The digits are:");
    int n = a, i = 0;
    
    while(n != 0) {
        b = (n % 10);    
        arr[i++] = b;    
        n /= 10;         
    }
    for(int j = i - 1; j >= 0; j--) {
        printf("%d ", arr[j]);
    }
    
    return 0;
}