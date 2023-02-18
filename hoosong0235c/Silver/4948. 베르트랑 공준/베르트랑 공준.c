#include <stdio.h>
#include <math.h>

int solve(int);

int main(void) {
    int i, count;
    while (1) {
        scanf("%i", &i);
        count = 0;
        if (i == 0) break;
        for (int j = i + 1; j <= i * 2; j++) if (solve(j)) count++;
        printf("%i\n", count);
    }

    return 0;
}

int solve(int n) {
    if (n == 1) return 0;
    int m = sqrt(n);
    for (int i = 2; i <= m; i++) if (n % i == 0) return 0;
    return 1;
}