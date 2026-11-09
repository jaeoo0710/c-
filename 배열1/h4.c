#include <stdio.h>

int main(void) {
    int n;
    double a, b = 0.0;
    for (n = 0; n < 6; n++) {
        scanf("%lf", &a);
        b += a;
    }
    printf("%.1f", b / 6);
    return 0;
}