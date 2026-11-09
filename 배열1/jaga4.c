#include <stdio.h>

int main(void) {
    int n, a;
    double b[7] = {0.0, 85.6, 79.5, 83.1, 80.0, 78.2, 75.0};
    scanf("%d %d", &n, &a);
    printf("%.1f", b[n] + b[a]);
    return 0;
}