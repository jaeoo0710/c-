#include <stdio.h>

int main(void) {
    int n, a, b = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a);
        b += a;
    }
    double avg = (double)b / n;
    printf("%.2f", avg);
    return 0;
}