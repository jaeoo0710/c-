#include <stdio.h>

int main(void) {
    int n[100], a = 0, b, c;
    while (a < 100) {
        scanf("%d", &b);
        if (b == 0) {
            break;
        }
        n[a++] = b;
    }
    b = n[0];
    c = n[0];
    for (int i = 1; i < a; i++) {
        if (n[i] > b) {
            b = n[i];
        }
        if (n[i] < c) {
            c = n[i];
        }
    }
    printf("%d", b + c);
    return 0;
}