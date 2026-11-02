#include <stdio.h>

int main(void) {
    int n, a;
    scanf("%d", &n);
    for (a = 2; a <= n; a += 2) {
        printf("%d ", a);
    }
    return 0;
}