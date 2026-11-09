#include <stdio.h>

int main(void) {
    int n[100], a = 0, b = 0, c = 0;
    while (a < 100) {
        scanf("%d", &n[a]);
        if (n[a] == 0) {
            break;
        }
        if (n[a] % 5 == 0) {
            b++;
            c += n[a];
        }
        a++;
    }
    printf("Multiples of 5 : %d\n", b);
    printf("sum : %d\n", c);
    printf("avg : %.1f\n", b > 0 ? (double)c / b : 0.0);
    return 0;
}
```[cite: 16]