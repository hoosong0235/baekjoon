#include <stdio.h>

int main(void) {
    unsigned long int a, b, v;
    scanf("%lu %lu %lu", &a, &b, &v);
    if ((v - a) % (a - b)) printf("%lu", (v - a) / (a - b) + 1 + 1);
    else printf("%lu", (v - a) / (a - b) + 1);

    return 0;
}