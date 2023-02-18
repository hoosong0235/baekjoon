#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare(const void *a, const void *b)
{
    if (strlen(a) > strlen(b))
        return 1;
    else if (strlen(a) < strlen(b))
        return -1;
    else
        return strcmp(a, b);
}

int main()
{
    int n;
    scanf("%i", &n);

    char a[20000][51];
    for (int i = 0; i < n; i++)
    {
        scanf("%s", a[i]);
    }

    qsort(a, n, 51 * sizeof(char), compare);

    for (int i = 0; i < n; i++)
    {
        if (strcmp(a[i - 1], a[i]))
            printf("%s\n", a[i]);
    }
}