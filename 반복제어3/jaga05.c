#include <stdio.h>

int main(void) {
    int n, a = 'A';
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        for (int b = 1; b <= n - i + 1; b++) {
            printf("%c", a++);
        }
        printf("\n");
    }
    return 0;
}