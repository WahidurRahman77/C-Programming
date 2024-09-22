#include <stdio.h>
#include <math.h>
 
int is_square_beautiful_matrix(char s[], int n) 
{
    int x = (int)sqrt(n);  
    if (x * x != n) 
    {
        return 0; 
    }
 
    for (int i = 0; i < x; i++) 
    {
        if (s[i] != '1' || s[n - x + i] != '1') 
        {  
            return 0;
        }
    }
 
    for (int i = 0; i < x; i++) {
        if (s[i * x] != '1' || s[(i + 1) * x - 1] != '1')
        {  
            return 0;
        }
    }
 
    return 1;  
}
 
int main() 
{
    int t;  
    scanf("%d", &t);
 
    while (t--) 
    {
        int n;  
        scanf("%d", &n);
        
        char s[n + 1];  
        scanf("%s", s);
        if (is_square_beautiful_matrix(s, n))
        {
            printf("Yes\n");
        } 
        else 
        {
            printf("No\n");
        }
    }
 
    return 0;
}