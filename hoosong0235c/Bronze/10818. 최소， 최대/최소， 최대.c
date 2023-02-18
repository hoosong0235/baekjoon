#include <stdio.h>
#include <limits.h>

int main(void) {
    int n;
    int max = INT_MIN;
    int min = INT_MAX;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        int j;
        scanf("%d", &j);
        if (j > max) max = j;
        if (j < min) min = j;
    }
    printf("%d %d", min, max);

    return 0;
}