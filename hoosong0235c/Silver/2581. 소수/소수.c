#include <stdio.h>

int solve(int);

int main(void) {
    int m, n, min = -1, sum = 0;
    scanf("%i\n%i", &m, &n);
    for (int i = m; i <= n; i++) if (solve(i)) { if (min == -1) min = i; sum += i; }
    if (min == -1) printf("-1");
    else printf("%i\n%i", sum, min);

    return 0;
}

int solve(int n) {
    if (n == 1) return 0;
    for (int i = 2; i < n; i++) if (n % i == 0) return 0;
    return 1;
}