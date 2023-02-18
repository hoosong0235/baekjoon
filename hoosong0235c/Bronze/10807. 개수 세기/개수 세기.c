#include <stdio.h>

int main(void) {
    int n, v, count = 0;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) {
        int j;
        scanf("%d", &j);
        a[i] = j;
    }
    scanf("%d", &v);
    for (int i = 0; i < n; i++) if (a[i] == v) count += 1;
    printf("%d", count);

    return 0;
}