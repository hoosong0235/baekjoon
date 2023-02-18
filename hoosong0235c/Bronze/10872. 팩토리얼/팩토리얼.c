#include <stdio.h>

int solve(int);

int main() {
    int n;
    scanf("%i", &n);
    printf("%i", solve(n));
}

int solve(int n) {
    if (n) return n * solve(n - 1);
    return 1;
}