#include <stdio.h>

int main(void) {
    int n, a, b = 0, c = 0;
    scanf("%d %d", &n, &a);
    if (n > a) {
        int temp = n;
        n = a;
        a = temp;
    }
    for (int i = n; i <= a; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            b += i;
            c++;
        }
    }
    double avg = (double)b / c;
    printf("sum : %d\n", b);
    printf("avg : %.1f", avg);
    return 0;
}