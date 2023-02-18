#include <stdio.h>

int main(void) {
    int c = 0;
    scanf("%d", &c);

    for (int i = 0; i < c; i++) {
        float sum = 0;
        int n = 0, m = 0, count = 0;
        scanf("%d", &n);
        int a[n];
        for (int j = 0; j < n; j++) a[j] = 0;

        for (int j = 0; j < n; j++) {
            scanf("%d", &m);
            a[j] = m;
            sum += m;
        }
        for (int j = 0; j < n; j++) {
            if (a[j] > (sum / n)) count += 1;
        }

        printf("%.3f%%\n", 100.0 * count / n);
    }

    return 0;
}