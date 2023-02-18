#include <stdio.h>

int main(void) {
    unsigned long int n, m = 1, count = 1;
    scanf("%lu", &n);
    for (unsigned long int i = 6; m < n; m += i, i += 6) count ++;
    printf("%lu", count);

    return 0;
}