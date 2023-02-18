#include <stdio.h>

int main()
{
    int max = -1, n, m, k;

    int a[9][9] = {0};
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            scanf("%i", &k);
            a[i][j] = k;
        }
    }

    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if (a[i][j] > max)
            {
                max = a[i][j], n = i, m = j;
            }
        }
    }

    printf("%i\n%i %i", max, n + 1, m + 1);
}