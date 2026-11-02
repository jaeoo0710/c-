#include <stdio.h>

int main(void) {
    int n, a, b = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a);
        b += a;
    }
    double avg = (double)b / n;
    printf("avg : %.1f\n", avg);
    if (avg >= 80) {
        printf("pass");
    } else {
        printf("fail");
    }
    return 0;
}