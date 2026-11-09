#include <stdio.h>

int main(void) {
    int n, a, b = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a);
        if (a > b) {
            b = a;
        }
    }
    printf("%d", b);
    return 0;
}