#include <stdio.h>

unsigned int solve(unsigned int k, unsigned int n);

int main(void) {
    unsigned int t, k, n;
    scanf("%u", &t);
    for (unsigned int i = 0; i < t; i++) {
        scanf("%u\n%u", &k, &n);
        printf("%u\n", solve(k, n));
    }

    return 0;
}

unsigned int solve(unsigned int k, unsigned int n) {
    if (k == 0) return n;
    unsigned int sum = 0;
    for (unsigned int i = 1; i <= n; i++) sum += solve(k - 1, i);
    return sum;
 }