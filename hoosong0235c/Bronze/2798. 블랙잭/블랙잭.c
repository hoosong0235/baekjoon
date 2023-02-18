#include <stdio.h>
#include <limits.h>
#include <math.h>

void solve(int[], int, int, int);

int main()
{
    int k, n, m, val = 0, sum = 0;
    scanf("%i %i", &n, &m);

    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%i", &k);
        a[i] = k;
    }

    for (int i = 0; i < n; i++)
    {
        sum += a[i];
        for (int j = i + 1; j < n; j++)
        {
            sum += a[j];
            for (int k = j + 1; k < n; k++)
            {
                sum += a[k];
                if ((sum <= m) && (m - sum < m - val))
                    val = sum;
                sum -= a[k];
            }
            sum -= a[j];
        }
        sum -= a[i];
    }

    printf("%i", val);
}