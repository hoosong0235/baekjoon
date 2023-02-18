#include <stdio.h>

int main(void) {
    int h, m;
    scanf("%d %d", &h, &m);
    if (m < 45) {
        if (h < 1) printf("23 %d", 15 + m);
        else printf("%d %d", h - 1, 15 + m);
    } else printf("%d %d", h, m - 45);

    return 0;
}