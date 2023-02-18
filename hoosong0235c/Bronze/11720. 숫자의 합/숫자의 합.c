#include <stdio.h>

int main()
{
    int n, sum = 0;
    scanf("%i", &n);

    char a[101];
    char *pa = a;
    scanf("%s", pa);

    while (*pa)
    {
        sum += *pa++ - '0';
    }

    printf("%i", sum);
}