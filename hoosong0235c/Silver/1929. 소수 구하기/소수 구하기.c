#include <stdio.h>
#include <math.h>

int solve(int);

int main(void) {
    int n, m;
    scanf("%i %i", &n, &m);
    for (int i = n; i <= m; i++) if (solve(i)) printf("%i\n", i);

    return 0;
}

int solve(int n) {
    if (n == 1) return 0;
    for (int i = 2; i <= sqrt(n); i++) if (n % i == 0) return 0;
    return 1;
}