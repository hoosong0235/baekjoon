#include <stdio.h>
#include <limits.h>

int main(void) {
    int max = INT_MIN;
    int index;
    for (int i = 0; i < 9; i++) {
        int j;
        scanf("%d", &j);
        if (j > max) { index = i + 1; max = j; }
    }
    printf("%d\n%d", max, index);

    return 0;
}