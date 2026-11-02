#include <stdio.h>

int main(void) {
    int n, a;
    for (n = 2; n <= 6; n++) {
        for (a = 0; a < 5; a++) {
            printf("%d ", n + a);
        }
        printf("\n");
    }
    return 0;
}