#include <stdio.h>

int main(void) {
    int n, a = 'A', b = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        for (int c = 1; c <= n - i + 1; c++) {
            printf("%c ", a++);
        }
        for (int c = 1; c <= i - 1; c++) {
            printf("%d ", b++);
        }
        printf("\n");
    }
    return 0;
}