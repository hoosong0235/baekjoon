#include <stdio.h>

int main(void) {
    unsigned int x, sigma = 0, sum = 1, temp = 1;
    scanf("%u", &x);
    for (unsigned int i = 1; sigma < x; sigma += i, i++, temp = !temp) sum++;
    if (temp) printf("%u/%u", sum - (sigma - x + 1), sigma - x + 1);
    else printf("%u/%u", sigma - x + 1, sum - (sigma - x + 1));

    return 0;
}