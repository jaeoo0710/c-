#include <stdio.h>

int main(void) {
    int n, a;
    scanf("%d", &n);
    for (a = 1; a <= 10; a++) {
        printf("%d ", n * a);
    }
    return 0;
}