#include <stdio.h>

void bubbleSort(int [], int);
void insertionSort(int [], int);

main() {
    int n, m;
    scanf("%i", &n);
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%i", &m);
        a[i] = m;
    }

    //bubbleSort(a, n);
    insertionSort(a, n);

    for (int i = 0; i < n; i++) printf("%i\n", a[i]);
}

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

void bubbleSort(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) swap(&a[j], &a[j + 1]);
        }
    }
}

void insertionSort(int a[], int n) {
    for (int i = 1; i < n; i++) {
        int temp = a[i];
        for (int j = i - 1; j >= 0 && a[j] > temp; j--) {
            swap(&a[j], &a[j + 1]);
        }
    }
}