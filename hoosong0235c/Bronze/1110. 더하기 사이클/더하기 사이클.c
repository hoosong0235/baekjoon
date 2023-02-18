#include <stdio.h>

int main(void) {
    int n, m, count = 1;
    scanf("%d", &n);
    if (n < 10) n *= 10;
    m = ((n % 10) * 10) + (((n / 10) + (n % 10)) % 10);
    while (n != m) {
        m = ((m % 10) * 10) + (((m / 10) + (m % 10)) % 10);
        count += 1;
    }
    printf("%d", count);

    return 0;
}