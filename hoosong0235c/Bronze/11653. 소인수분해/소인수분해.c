#include <stdio.h>

int main(void) {
    int n;
    scanf("%i", &n);
    while (n != 1) for (int i = 2; ; i++) if (n % i == 0) {
        printf("%i\n", i);
        n /= i;
        break;
    }

    return 0;
}