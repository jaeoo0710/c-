#include <stdio.h>

int main(void) {
    int n, a = 1;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        for (int b = 1; b <= i; b++) {
            printf("%d ", a++);
        }
        printf("\n");
    }
    return 0;
}