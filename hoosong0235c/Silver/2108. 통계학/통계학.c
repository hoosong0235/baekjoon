#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>
#define cntArrLen 8001

struct num
{
    int val;
    int cnt;
};

int _compare(const void *a, const void *b)
{
    return *(int *)a - *(int *)b;
}

int _count(int *arr, int len, int n)
{
    int cnt = 0;
    for (int i = 0; i < len; i++)
    {
        if (arr[i] == n)
        {
            cnt++;
        }
    }
    return cnt;
}

int _max(int *arr, int len)
{
    int max = INT_MIN;
    for (int i = 0; i < len; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int _index(int *arr, int len, int n)
{
    int index = -1;
    for (int i = 0; i < len; i++)
    {
        if (arr[i] == n)
        {
            return i;
        }
    }
    return index;
}

int main()
{
    int n, m, k, sum = 0, min = INT_MAX, max = INT_MIN, mode;
    scanf("%i", &n);

    int *intArr = calloc(n, sizeof(int));
    int *cntArr = calloc(cntArrLen, sizeof(int));
    for (int i = 0; i < n; i++)
    {
        scanf("%i", &m);
        intArr[i] = m;
        cntArr[m + 4000]++;
        sum += m;
        if (m < min)
            min = m;
        if (m > max)
            max = m;
    }

    qsort(intArr, n, sizeof(int), _compare);

    if (_count(cntArr, cntArrLen, _max(cntArr, cntArrLen)) == 1)
    {
        mode = _index(cntArr, cntArrLen, _max(cntArr, cntArrLen)) - 4000;
    }
    else
    {
        cntArr[_index(cntArr, cntArrLen, _max(cntArr, cntArrLen))]--;
        mode = _index(cntArr, cntArrLen, _max(cntArr, cntArrLen)) - 4000;
    }

    printf("%i\n%i\n%i\n%i", (int)round((double)sum / n), intArr[n / 2], mode, max - min);
    free(intArr);
    free(cntArr);

    return 0;
}