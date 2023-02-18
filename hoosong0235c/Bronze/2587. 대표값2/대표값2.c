#include <stdio.h>

void bubbleSort(int [], int);
void insertionSort(int [], int);

int main(void) {
    int n, sum = 0;
    int a[5];
    for (int i = 0; i < 5; i++) {
        scanf("%i", &n);
        a[i] = n;
        sum += n;
    }

    //bubbleSort(a, 5);
    insertionSort(a, 5);

    printf("%i\n%i", sum / 5, a[2]);
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