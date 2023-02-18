#include <stdio.h>

int main()
{
    int answer[26];
    char a[101];
    char *pa = a;
    scanf("%s", pa);

    for (int i = 0; i < 26; i++)
    {
        answer[i] = -1;
    }

    for (int i = 0; *(pa + i); i++)
    {
        int index = *(pa + i) - 'a';
        if (answer[index] == -1)
        {
            answer[index] = i;
        }
    }

    for (int i = 0; i < 26; i++)
    {
        printf("%i ", answer[i]);
    }
}