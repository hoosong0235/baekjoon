#include <stdio.h>

int solve(int, int);

int main()
{
    int n, m = 0;
    scanf("%i", &n);

    for (int i = 1; i < n; i++)
        if (solve(i, n))
        {
            m = i;
            break;
        }

    printf("%i", m);
}

int solve(int n, int m)
{
    int k = n;
    while (n > 0)
    {
        k += n % 10;
        n /= 10;
    }
    if (k == m)
        return 1;
    else
        return 0;
}