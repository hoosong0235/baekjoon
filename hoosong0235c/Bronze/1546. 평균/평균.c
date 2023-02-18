#include <stdio.h>
#include <limits.h>

int main(void) {
    int n;
    int max = INT_MIN;
    scanf("%d", &n);
    int a[n];
    float sum;
    for (int i = 0; i < n; i++) {
        int j;
        scanf("%d", &j);
        if (j > max) max = j;
        a[i] = j;
    }
    for (int i = 0; i < n; i++) {
        sum += ((float) a[i] / max) * 100;
    }
    printf("%f", sum / n);
    
    return 0;
}