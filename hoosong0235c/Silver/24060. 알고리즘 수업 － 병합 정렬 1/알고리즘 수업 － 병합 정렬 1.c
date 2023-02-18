#include <stdio.h>

int num = -1;

int merge(int[], int, int, int, int);
int mergeSort(int[], int, int, int);

int main()
{
    int n, m, k;
    scanf("%i %i", &n, &k);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%i", &m);
        arr[i] = m;
    }

    mergeSort(arr, 0, n - 1, k);
    printf("%i", num);
}

int merge(int arr[], int l, int m, int h, int k)
{
    int i = l, j = m + 1, t = 0, len = (h - l) + 1;
    int temp[len];
    while (i <= m && j <= h)
    {
        if (arr[i] <= arr[j])
            temp[t++] = arr[i++];
        else
            temp[t++] = arr[j++];
    }
    while (i <= m)
        temp[t++] = arr[i++];
    while (j <= h)
        temp[t++] = arr[j++];

    i = l;
    t = 0;
    while (i <= h)
    {
        if (!--k)
            num = temp[t];
        arr[i++] = temp[t++];
    }

    return k;
}

int mergeSort(int arr[], int l, int h, int k)
{
    if (l < h)
    {
        int m = (l + h) / 2;
        int k1 = mergeSort(arr, l, m, k);
        int k2 = mergeSort(arr, m + 1, h, k1);
        return merge(arr, l, m, h, k2);
    }
    else
        return k;
}