#include <stdio.h>

int main(void) {
    int n, a = 0, b = 0;
    while (1) {
        scanf("%d", &n);
        if (n < 50) {
            a++;
        } else {
            b++;
        }
        if (n >= 100) {
            break;
        }
    }
    printf("small : %d\n", a);
    printf("large : %d\n", b);
    return 0;
}