#include <stdio.h>
#define max(a, b) ((a > b) ? a : b)

int main(void) {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (a == b & b == c) printf("1%d", 1000 * a);
    else if (a == b) printf("1%d", 100 * a);
    else if (b == c) printf("1%d", 100 * b);
    else if (a == c) printf("1%d", 100 * c);
    else printf("%d", 100 * max(a, max(b, c)));

    return 0;
}