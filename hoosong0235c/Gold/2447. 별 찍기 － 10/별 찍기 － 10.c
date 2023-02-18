#include <stdio.h>

void solve(int);

int main()
{
    int n;
    scanf("%i", &n);
    solve(n);
}

void solve(int n)
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            int isBlank = 0, temp = 1;
            while (temp < n)
            {
                temp *= 3;
                if (((temp / 3) <= (i % temp)) && ((i % temp) < 2 * (temp / 3)) && ((temp / 3) <= (j % temp)) && ((j % temp) < 2 * (temp / 3)))
                    isBlank = 1;
            }

            if (isBlank)
                printf(" ");
            else
                printf("*");
        }
        printf("\n");
    }
}