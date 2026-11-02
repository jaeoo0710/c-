#include <stdio.h>

int main(void) {
    int n, a;
    for (n = 1; n <= 5; n++) {
        for (a = 1; a <= 5; a++) {
            printf("%d ", n);
        }
        printf("\n");
    }
    printf("\n");
    for (n = 1; n <= 5; n++) {
        for (a = 1; a <= 5; a++) {
            printf("%d ", a);
        }
        printf("\n");
    }
    return 0;
}