#include <stdio.h>
#include <math.h>

int solve(int);

int main(void) {
    int n, m, a[10001] = { [1 ... 10000] = 0};
    for (int i = 1; i < 10001; i++) if (solve(i)) a[i] = 1;
    scanf("%i", &n);
    for (int i = 0; i < n; i++) {
        scanf("%i", &m);
        for (int j = m / 2; j < m; j++) if (a[m - j] && a[j]) {
            printf("%i %i\n", m - j, j);
            break;
        }
    }

    return 0;
}

int solve(int n) {
    if (n == 1) return 0;
    int m = sqrt(n);
    for (int i = 2; i <= m; i++) if (n % i == 0) return 0;
    return 1;
}