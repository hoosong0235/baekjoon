#include <stdio.h>
#include <string.h>

void solve(char [], int, int);

int main(void) {
    char arr[10];
    scanf("%s", &arr);

    solve(arr, 0, strlen(arr) - 1);

    for (int i = 0; i < strlen(arr); i++) printf("%c", arr[i]);
}

void merge(char arr[], int l, int m, int r) {
    int n1 = m - l + 1;
    int n2 = r - m;
    int L[n1], R[n2];
    for (int i = 0; i < n1; i++) L[i] = arr[l + i];
    for (int i = 0; i < n2; i++) R[i] = arr[(m + 1) + i];

    int i = 0, j = 0, k = l;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) arr[k++] = R[j++];
        else arr[k++] = L[i++];
    }
    while (i < n1) arr[k++] = L[i++];
    while (j < n2) arr[k++] = R[j++];
}

void solve(char arr[], int l, int r) {
    if (l < r) {
        int m = (l + r) / 2;

        solve(arr, l, m);
        solve(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}