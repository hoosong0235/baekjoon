#include <stdio.h>

int main(void) {
    int a[30] = { [0 ... 29] = 1 };
    for (int i = 0; i < 28; i++) {
        int j;
        scanf("%d", &j);
        a[j - 1] = 0;
    }
    for (int i = 0; i < 30; i++) {
        if (a[i]) printf("%d\n", i + 1);
    }
    return 0;
}