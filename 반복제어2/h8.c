#include <stdio.h>

int main(void) {
    int n, a;
    scanf("%d %d", &n, &a);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= a; j++) {
            printf("%d ", i * j);
        }
        printf("\n");
    }
    return 0;
}