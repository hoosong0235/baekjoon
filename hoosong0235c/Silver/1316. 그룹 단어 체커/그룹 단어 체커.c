#include <stdio.h>

int test(char *s)
{
    int contains[26] = {0};

    while (*s)
    {
        if (contains[*s - 'a'])
        {
            if (*s == *(s - 1))
            {
                s++;
                continue;
            }
            else
            {
                return 0;
            }
        }
        else
        {
            contains[*s - 'a'] = 1;
        }

        s++;
    }

    return 1;
}

int main()
{
    int n, count = 0;
    char a[101];
    scanf("%i", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%s", a);
        count += test(a);
    }

    printf("%i", count);
}