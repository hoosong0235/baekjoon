#include <stdio.h>
#include <limits.h>

int n, m, k;
int max = INT_MIN;
void solve(int [n + 2][m + 2], int [n + 2][m + 2], int, int, int, int);

int main(void) {
    int l;
    scanf("%i %i %i", &n, &m, &k);
    int a[n + 2][m + 2];
    int b[n + 2][m + 2];
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            scanf("%i", &l);
            a[i][j] = l;
            b[i][j] = 1;
        }
    }

    solve(a, b, n, m, k, 0);
    printf("%i", max);
}

void solve(int a[n + 2][m + 2], int b[n + 2][m + 2], int n, int m, int k, int sum) {
    if (k == 0) {
        if (max < sum) max = sum;
        return;
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (b[i][j]) {
                int A = 0, B = 0, C = 0, D = 0;
                b[i][j] = 0;
                if (b[i - 1][j]) {
                    b[i - 1][j] = 0;
                    A = 1;
                }
                if (b[i + 1][j]) {
                    b[i + 1][j] = 0;
                    B = 1;
                }
                if (b[i][j - 1]) {
                    b[i][j - 1] = 0;
                    C = 1;
                }
                if (b[i][j + 1]) {
                    b[i][j + 1] = 0;
                    D= 1;
                }
                sum += a[i][j];
                solve(a, b, n, m, k - 1, sum);
                b[i][j] = 1;
                if (A) b[i - 1][j] = 1;
                if (B) b[i + 1][j] = 1;
                if (C) b[i][j - 1] = 1;
                if (D) b[i][j + 1] = 1;
                sum -= a[i][j];
            }
        }
    }
}