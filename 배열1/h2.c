#include <stdio.h>

int main(void) {
    int n[5], a;
    for (a = 0; a < 5; a++) {
        scanf("%d", &n[a]);
    }
    printf("%d", n[0] + n[2] + n[4]);
    return 0;
}