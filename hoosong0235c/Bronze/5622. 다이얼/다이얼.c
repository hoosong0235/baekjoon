#include <stdio.h>

int solve(char c)
{
    int index = (c - 'A') / 3;
    if (c == 'S' || c == 'V' || c == 'Y' || c == 'Z')
        index--;

    return index + 3;
}

int main()
{
    char a[16];
    int sum = 0;
    scanf("%s", a);

    for (char *pa = a; *pa; pa++)
    {
        sum += solve(*pa);
    }

    printf("%i", sum);
}