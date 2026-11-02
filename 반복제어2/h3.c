#include <stdio.h>

int main(void) {
    int n, a, c = 0;
    scanf("%d", &n);
    for (a = 5; a <= n; a += 5) {
        c += a;
    }
    printf("%d", c);
    return 0;
}