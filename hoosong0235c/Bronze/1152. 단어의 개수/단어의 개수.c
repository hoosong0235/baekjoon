#include <stdio.h>

int main()
{
    int count = 0, isEmpty = 1;
    char a[1000001];
    scanf("%[^\n]", a);

    for (char *pa = a; *pa; pa++)
    {
        if (('a' <= *pa && *pa <= 'z') || ('A' <= *pa && *pa <= 'Z'))
            isEmpty = 0;

        if (pa == a || !*(pa + 1))
            continue;
        else if (*pa == ' ')
            count++;
    }

    if (isEmpty)
        printf("0");
    else
        printf("%i", count + 1);
}