#include <stdio.h>

int main(void) {
    int n;
    while (1) {
        scanf("%d", &n);
        if (n < 0 || n > 100) {
            break;
        }
        if (n >= 80) {
            printf("Pass\n");
        } else {
            printf("Fail\n");
        }
    }
    return 0;
}