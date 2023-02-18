#include <stdio.h>

int N, M;
void solve(int [], int [], int, int);

int main(void) {
    scanf("%i %i", &N, &M);
    int a[N + 1];
    int b[M + 1];
    for (int i = 1; i <= N; i++) a[i] = 1;
    for (int i = 1; i <= M; i++) b[i] = 1;

    solve(a, b, N, M);
}

void solve(int a[], int b[], int n, int m) {
    if (m == 0) {
        for (int i = 1; i <= M; i++) {
            printf("%i ", b[i]);
        }
        printf("\n");
        return;
    }
    for (int i = 1; i <= n; i++) {
        if (a[i]) {
            a[i] = 0;
            b[M - m + 1] = i;
            solve(a, b, n, m - 1);
            a[i] = 1;
            b[M - m + 1] = 0;
        }
    }
}