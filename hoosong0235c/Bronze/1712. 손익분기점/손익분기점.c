#include <stdio.h>

int main(void) {
    unsigned long long int a, b, c;
    scanf("%llu %llu %llu", &a, &b, &c);
    if (b >= c) printf("-1");
    else printf("%llu", a / (c - b) + 1);

    return 0;
}