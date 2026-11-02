#include <stdio.h>

int main(void) {
    int n, a;
    char b;
    while (1) {
        scanf("%d %d", &n, &a);
        printf("Triangle area = %.1f\n", (n * a) / 2.0);
        printf("Continue? ");
        scanf(" %c", &b);
        if (b != 'Y' && b != 'y') {
            break;
        }
    }
    return 0;
}