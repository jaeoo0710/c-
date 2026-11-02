#include <stdio.h>

int main(void) {
    int n, a = 0;
    while (1) {
        scanf("%d", &n);
        if (n == 0) {
            break;
        }
        if (n % 3 != 0 && n % 5 != 0) {
            a++;
        }
    }
    printf("%d\n", a);
    return 0;
}