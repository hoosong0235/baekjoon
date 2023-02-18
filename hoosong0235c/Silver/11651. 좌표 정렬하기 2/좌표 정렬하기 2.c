#include <stdio.h>
#include <string.h>

void solve(int [][2], int, int);

int main(void) {
    int n, a, b;
    scanf("%i", &n);
    int arr[n][2];
    for (int i = 0; i < n; i++) {
        scanf("%i %i", &a, &b);
        arr[i][0] = a;
        arr[i][1] = b;
    }

    solve(arr, 0, n - 1);

    for (int i = 0; i < n; i++) printf("%i %i\n", arr[i][0], arr[i][1]);
}

void merge(int arr[][2], int l, int m, int r) {
    int n1 = m - l + 1;
    int n2 = r - m;
    int L[n1][2], R[n2][2];
    for (int i = 0; i < n1; i++) {
        L[i][0] = arr[l + i][0];
        L[i][1] = arr[l + i][1];
    }
    for (int i = 0; i < n2; i++) {
        R[i][0] = arr[(m + 1) + i][0];
        R[i][1] = arr[(m + 1) + i][1];
    }

    int i = 0, j = 0, k = l;
    while (i < n1 && j < n2) {
        if (L[i][1] > R[j][1]) {
            arr[k][0] = R[j][0];
            arr[k][1] = R[j][1];
            k++;
            j++;
        } else if (L[i][1] < R[j][1]) {
            arr[k][0] = L[i][0];
            arr[k][1] = L[i][1];
            k++;
            i++;
        } else {
            if (L[i][0] >= R[j][0]) {
                arr[k][0] = R[j][0];
                arr[k][1] = R[j][1];
                k++;
                j++;
            } else {
                arr[k][0] = L[i][0];
                arr[k][1] = L[i][1];
                k++;
                i++;
            }
        }
    }
    while (i < n1) {
        arr[k][0] = L[i][0];
        arr[k][1] = L[i][1];
        k++;
        i++;
    }
    while (j < n2) {
        arr[k][0] = R[j][0];
        arr[k][1] = R[j][1];
        k++;
        j++;
    }
}

void solve(int arr[][2], int l, int r) {
    if (l < r) {
        int m = (l + r) / 2;

        solve(arr, l, m);
        solve(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}