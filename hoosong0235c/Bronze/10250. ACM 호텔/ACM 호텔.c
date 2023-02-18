#include <stdio.h>

int main(void) {
    unsigned int t, h, w, n;
    scanf("%u", &t);
    for (unsigned int i = 0; i < t; i++) {
        scanf("%u %u %u", &h, &w, &n);
        printf("%u%s%u\n", n % h ? n % h : h, (n % h ? n / h + 1 : n / h) > 9 ? "" : "0", n % h ? n / h + 1 : n / h);
    }

    return 0;
}