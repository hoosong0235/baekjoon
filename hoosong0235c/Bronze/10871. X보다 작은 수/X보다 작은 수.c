#include <stdio.h>

int main(void) {
    int n, x;
    scanf("%d %d", &n, &x);
    for (int i = 0; i < n; i++) {
        int j;
        scanf("%d", &j);
        if (j < x) printf("%d ", j);
    }

    return 0;
}