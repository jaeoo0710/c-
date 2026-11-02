#include <stdio.h>

int main(void) {
    int n, a;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        for (a = 1; a <= i; a++) {
            printf("*");
        }
        printf("\n");
    }
    for (int i = n - 1; i >= 1; i--) {
        for (a = 1; a <= i; a++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}