#include <stdio.h>
#include <stdlib.h>

struct user
{
    int age;
    char name[101];
};

int compare(struct user *a, struct user *b)
{
    if (a->age > b->age)
        return 1;
    else if (a->age == b->age)
        return 0;
    else
        return -1;
}

int main()
{
    int n;
    scanf("%i", &n);

    struct user users[100000];
    for (int i = 0; i < n; i++)
    {
        scanf("%i %s", &users[i].age, users[i].name);
    }

    qsort(users, n, sizeof(struct user), compare);

    for (int i = 0; i < n; i++)
    {
        printf("%i %s\n", users[i].age, users[i].name);
    }
}