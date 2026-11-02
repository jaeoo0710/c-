#include <stdio.h>

int main(void) {
    int n, a;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        for (a = 1; a <= n - i; a++) {
            printf(" ");
        }
        for (a = 1; a <= i; a++) {
            printf("%d", a);
        }
        printf("\n");
    }
    return 0;
}