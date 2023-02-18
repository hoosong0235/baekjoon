#include <stdio.h>

int main()
{
    int n, w, h, count;
    scanf("%i", &n);

    int a[n][2], ans[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%i %i", &w, &h);
        a[i][0] = w;
        a[i][1] = h;
    }

    for (int i = 0; i < n; i++)
    {
        count = 1;
        for (int j = 0; j < n; j++)
        {
            if (i != j && a[i][0] < a[j][0] && a[i][1] < a[j][1])
                count++;
        }
        ans[i] = count;
    }

    for (int i = 0; i < n; i++)
        printf("%i ", ans[i]);
}