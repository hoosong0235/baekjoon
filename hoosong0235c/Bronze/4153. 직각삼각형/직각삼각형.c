#include <stdio.h>

int main()
{
    int x, y, z;
    scanf("%i %i %i", &x, &y, &z);

    while (x || y || z)
    {
        int x2 = x * x, y2 = y * y, z2 = z * z;

        if ((x2 == y2 + z2) || (y2 == x2 + z2) || (z2 == x2 + y2))
            printf("right\n");
        else
            printf("wrong\n");

        scanf("%i %i %i", &x, &y, &z);
    }
}