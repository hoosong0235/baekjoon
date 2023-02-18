#include <stdio.h>

int main()
{
    char a[21];
    char *pa = a;

    int t, r;
    scanf("%i", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%i", &r);
        scanf("%s", pa);
        while (*pa)
        {
            char c = *pa++;
            for (int i = 0; i < r; i++)
            {
                printf("%c", c);
            }
        }
        pa = a;
        printf("\n");
    }
}