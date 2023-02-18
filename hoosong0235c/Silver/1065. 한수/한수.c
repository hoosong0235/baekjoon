#include <stdio.h>

int h(int x);

int main(void) {
    int n = 0, sum = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) if (h(i)) sum += 1;
    printf("%d", sum);

    return 0;
}

int h(int x) {
    if (x < 100) return 1;

    int delta = 10, curr = x % 10;
    for (int i = 10; x >= i; i *= 10) {
        int next = (x % (i * 10) - x % i) / i;
        if (delta == 10) {
            delta = next - curr;
            curr = next;
        } else if (delta == next - curr) {
            curr = next;
        } else {
            return 0;
        }
    }
    return 1;
}