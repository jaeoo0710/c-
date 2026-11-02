#include <stdio.h>

int main(void) {
    int n, a = 1, b = 'A';
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        for (int c = 1; c <= n - i + 1; c++) {
            printf("%d ", a++);
        }
        for (int c = 1; c <= i; c++) {
            printf("%c ", b++);
        }
        printf("\n");
    }
    return 0;
}