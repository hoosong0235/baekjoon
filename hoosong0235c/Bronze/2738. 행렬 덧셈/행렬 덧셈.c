#include <stdio.h>

int main()
{
    int n, m, i, j, k;
    scanf("%i %i", &n, &m);

    int a[n][m];
    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
        {
            scanf("%i", &k);
            a[i][j] = k;
        }

    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
        {
            scanf("%i", &k);
            a[i][j] += k;
        }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("%i ", a[i][j]);
        }
        printf("\n");
    }
}