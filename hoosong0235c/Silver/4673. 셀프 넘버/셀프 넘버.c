#include <stdio.h>

int d(int n);

int main(void) {
    int a[10000] = { [0 ... 9999] = 1 };
    for (int i = 0; i < 10000; i++) if (d(i) <= 10000) a[d(i) - 1] = 0;
    for (int i = 0; i < 10000; i++) if (a[i]) printf("%d\n", i + 1);

    return 0;
}

int d(int n) {
    int sum = n;
    for (int i = 1; n >= i; i *= 10) sum += (n % (i * 10) - n % i) / i;
    return sum;
}