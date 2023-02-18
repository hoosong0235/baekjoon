#include <stdio.h>

int main() {
    int n, sum = 0;
    for (int i = 0; i < 5; i++) {
        scanf("%i", &n);
        if (n > 40) sum += n;
        else sum += 40;
    }
    printf("%i", sum / 5);
}