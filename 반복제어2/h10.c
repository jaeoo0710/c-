#include <stdio.h>

int main(void) {
    int n, a, b;
    scanf("%d %d", &n, &a);
    if (n <= a) {
        for (b = 1; b <= 9; b++) {
            for (int i = n; i <= a; i++) {
                printf("%d * %d = %2d   ", i, b, i * b);
            }
            printf("\n");
        }
    } else {
        for (b = 1; b <= 9; b++) {
            for (int i = n; i >= a; i--) {
                printf("%d * %d = %2d   ", i, b, i * b);
            }
            printf("\n");
        }
    }
    return 0;
}