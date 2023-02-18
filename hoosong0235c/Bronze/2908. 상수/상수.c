#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void *reverse(char *ps)
{
    int len = strlen(ps);
    char temp;

    for (int i = 0; i < len / 2; i++)
    {
        temp = *(ps + i);
        *(ps + i) = *(ps + len - i - 1);
        *(ps + len - i - 1) = temp;
    }
}

int main()
{
    char a[4], b[4];
    char *pa = a, *pb = b;
    scanf("%s %s", pa, pb);

    reverse(pa);
    reverse(pb);

    int na = atoi(pa), nb = atoi(pb);
    printf("%i", na > nb ? na : nb);
}