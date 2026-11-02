#include <stdio.h>

int main(void) {
    int n, a = 0, b = 0;
    for (int i = 0; i < 10; i++) {
        scanf("%d", &n);
        if (n % 3 == 0) {
            a++;
        }
        if (n % 5 == 0) {
            b++;
        }
    }
    printf("Multiples of 3 : %d\n", a);
    printf("Multiples of 5 : %d", b);
    return 0;
}