#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int compare(const void *a, const void *b) { return *(int *)a - *(int *)b; }

// todo: modify to binary search
int getIndex(int a[], int x, int lo, int hi)
{
    int mid = (lo + hi) / 2;

    if (a[mid] < x)
        return getIndex(a, x, mid + 1, hi);
    else if (a[mid] > x)
        return getIndex(a, x, lo, mid - 1);
    else
        return mid;
}

int main()
{
    int n, x;
    scanf("%i", &n);

    int a[n], sa[n], ss[n], cnt = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%i", &x);
        a[i] = x, sa[i] = x, ss[i] = INT_MAX;
    }

    qsort(sa, n, sizeof(int), compare);

    for (int i = 0; i < n; i++)
    {
        if (i == n - 1 || sa[i] != sa[i + 1])
        {
            ss[cnt++] = sa[i];
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%i ", getIndex(ss, a[i], 0, n - 1));
    }
}