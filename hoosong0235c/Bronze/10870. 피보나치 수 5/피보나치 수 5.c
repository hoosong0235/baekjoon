#include <stdio.h>

int solve(int);

int main()
{
    int n;
    scanf("%i", &n);
    printf("%i", solve(n));
}

int solve(int n)
{
    if (!n)
        return 0;
    else if (n == 1)
        return 1;
    else
        return solve(n - 1) + solve(n - 2);
}