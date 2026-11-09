#include <stdio.h>

int main(void) {
    int n[5] = {95, 75, 85, 100, 50}, a, b, c;
    for (a = 0; a < 4; a++) {
        for (b = 0; b < 4 - a; b++) {
            if (n[b] > n[b + 1]) {
                c = n[b];
                n[b] = n[b + 1];
                n[b + 1] = c;
            }
        }
    }
    for (a = 0; a < 5; a++) {
        printf("%d ", n[a]);
    }
    return 0;
}
```[cite: 16]