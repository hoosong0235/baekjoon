#include <stdio.h>

int main(void) {
    int h, m, t;
    scanf("%d %d\n%d", &h, &m, &t);
    if (m + (t % 60) >= 60) printf("%d %d", (h + (t / 60) + 1) % 24, (m + (t % 60)) % 60);
    else printf("%d %d", (h + (t / 60)) % 24, (m + (t % 60)) % 60);

    return 0;
}