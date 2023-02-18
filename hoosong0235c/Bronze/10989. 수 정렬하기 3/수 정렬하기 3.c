#include <stdio.h>

const int RANGE = 10000;

int main() {
    int n, m, i, j;
    scanf("%i", &n);

    int count[RANGE + 1];
    for (i = 0; i <= RANGE; i++) count[i] = 0;

    for (i = 0; i < n; i++) {
        scanf("%i", &m);
        count[m]++;
    }
    for (i = 1; i <= RANGE; i++) if (count[i]) for (j = 0; j < count[i]; j++) printf("%i\n", i);
}