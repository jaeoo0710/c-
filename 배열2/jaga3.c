#include <stdio.h>

int main(void) {
    int n[100], a, b = 0;
    scanf("%d", &n[1]);
    n[0] = 100;
    printf("%d %d ", n[0], n[1]);
    a = 2;
    while (1) {
        n[a] = n[a - 2] - n[a - 1];
        printf("%d ", n[a]);
        if (n[a] < 0) {
            break;
        }
        a++;
    }
    return 0;
}
```[cite: 16]