#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);
    n += 3;
    printf("%d\n", n);
    printf("%d %d %d\n", n - 1, n - 3, n);
    return 0;
}