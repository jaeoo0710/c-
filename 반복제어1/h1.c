#include <stdio.h>

int main(void) {
    int n, a = 1;
    scanf("%d", &n);
    while (a <= n) {
        printf("%d ", a);
        a++;
    }
    printf("\n");
    return 0;
}