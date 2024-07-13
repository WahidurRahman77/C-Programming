#include <stdio.h>
#include <string.h>

int main()
{
    char url[10000];
    int index = 0, i;
    // Read the URL string from standard input
    scanf("%s", url);
    // Find the start of the query part
    char *query_start = strchr(url, '?') + 1;
    // Split the query into individual parameters
    char *parameters[5];
    char *param = strtok(query_start, "&");

    while (param != NULL)
    {
        parameters[index++] = param;
        param = strtok(NULL, "&");
    }
    // Extract and print the key-value pairs
    for (i = 0; i < 5; i++)
    {
        char *key = strtok(parameters[i], "=");
        char *value = strtok(NULL, "=");
        printf("%s: %s\n", key, value);
    }

    return 0;
}
