#include <stdio.h>
#include <math.h>

void solve(int, int, int);

int main()
{
    int n;
    scanf("%i", &n);

    printf("%i\n", (int)pow(2, n) - 1);
    solve(1, 3, n - 1);
}

void solve(int a, int b, int k)
{
    if (!k)
        printf("%i %i\n", a, b);
    else
    {
        solve(a, (6 - a - b), k - 1);
        printf("%i %i\n", a, b);
        solve((6 - a - b), b, k - 1);
    }
}