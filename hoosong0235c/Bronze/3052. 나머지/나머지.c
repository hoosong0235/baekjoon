#include <stdio.h>

int main(void) {
    int a[42] = { [0 ... 41] = 0 };
    int count = 0;
    for (int i = 0; i < 10; i++) {
        int j;
        scanf("%d", &j);
        if (!a[j % 42]) {
            a[j % 42] = 1;
            count += 1;
        }
    }
    printf("%d", count);
    return 0;
}