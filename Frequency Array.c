#include <stdio.h>

int main()
{
    int N, M, i;
    scanf("%d %d", &N, &M);
    int arr[N], freq[M+1];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }
    // Initialize the frequency array with zero
    for(i = 0; i <= M; i++)
    {
        freq[i] = 0;
    }
    // Count the frequency of each number in the array
    for (i = 0; i < N; i++)
    {
        freq[arr[i]]++;
    }
    // Print the frequency of each number from 1 to M
    for (i = 1; i <= M; i++)
    {
        printf("%d\n", freq[i]);
    }

    return 0;
}
