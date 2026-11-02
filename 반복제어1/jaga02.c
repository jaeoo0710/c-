#include <stdio.h>

int main(void) {
    int n, a = 1, b = 0;
    scanf("%d", &n);
    while (a <= n) {
        b += a;
        a++;
    }
    printf("%d\n", b);
    return 0;
}