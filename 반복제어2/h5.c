#include <stdio.h>

int main(void) {
    int n, a = 0, b = 0;
    for (int i = 0; i < 10; i++) {
        scanf("%d", &n);
        if (n % 2 == 0) {
            a++;
        } else {
            b++;
        }
    }
    printf("even : %d\n", a);
    printf("odd : %d", b);
    return 0;
}