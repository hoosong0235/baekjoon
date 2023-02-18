#include <stdio.h>

int main()
{
    int n, m;

    while (1)
    {
        scanf("%i %i", &n, &m);

        if (!n && !m)
            break;

        if (n % m == 0)
            printf("multiple\n");
        else if (m % n == 0)
            printf("factor\n");
        else
            printf("neither\n");
    }
}