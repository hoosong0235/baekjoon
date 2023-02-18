#include <stdio.h>

int main()
{
    int x, y, w, h;
    scanf("%i %i %i %i", &x, &y, &w, &h);

    int horizontal = x < w - x ? x : w - x;
    int vertical = y < h - y ? y : h - y;
    printf("%i", horizontal < vertical ? horizontal : vertical);
}