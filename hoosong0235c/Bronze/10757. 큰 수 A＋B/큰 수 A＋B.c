#include <stdio.h>
#include <string.h>

void reverse(char *s)
{
    int len = strlen(s);
    char temp;

    for (int i = 0; i < len / 2; i++)
    {
        temp = *(s + i);
        *(s + i) = *(s + len - i - 1);
        *(s + len - i - 1) = temp;
    }
}

int isCarry(int a, int b, int c) { return a + b + c >= 10; }
int onesPlace(int a, int b, int c) { return (a + b + c) % 10; }

int main()
{
    char a[10001] = {0}, b[10001] = {0}, c[100002] = {0};
    scanf("%s %s", a, b);

    reverse(a);
    reverse(b);

    int carry = 0;
    char *pa, *pb, *pc;
    for (pa = a, pb = b, pc = c; *pa || *pb; pa++, pb++, pc++)
    {
        *pc = onesPlace(*pa - '0' > 0 ? *pa - '0' : 0, *pb - '0' > 0 ? *pb - '0' : 0, carry) + '0';
        carry = isCarry(*pa - '0' > 0 ? *pa - '0' : 0, *pb - '0' > 0 ? *pb - '0' : 0, carry);
    }
    if (carry)
        *pc++ = '1';
    *pc = '\0';
    reverse(c);

    printf("%s", c);
}