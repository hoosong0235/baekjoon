#include <stdio.h>

int solve(int);

int main(void) {
    int n = 0, m = 0, count = 0;
    scanf("%i", &n);

    for (int i = 0; i < n; i++) {
        scanf("%i", &m);
        if (solve(m)) count++;
    }

    printf("%i", count);

    return 0;
}

int solve(int n) {
    if (n == 1) return 0;
    for (int i = 2; i < n; i++) if (n % i == 0) return 0;
    return 1;
}