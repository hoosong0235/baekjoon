#include <stdio.h>

int main()
{
    int a[100][100] = {0};
    int n, r, c, count = 0;
    scanf("%i", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%i %i", &r, &c);
        for (int j = r; j < r + 10; j++)
        {
            for (int k = c; k < c + 10; k++)
            {
                a[j][k] = 1;
            }
        }
    }

    for (int i = 0; i < 100; i++)
    {
        for (int j = 0; j < 100; j++)
        {
            if (a[i][j])
            {
                count++;
            }
        }
    }

    printf("%i", count);
}