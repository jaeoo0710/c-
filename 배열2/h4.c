#include <stdio.h>

int main(void) {
    int n[20], a, b, c;
    scanf("%d", &a);
    for (b = 0; b < a; b++) {
        scanf("%d", &n[b]);
    }
    for (b = 0; b < a - 1; b++) {
        for (c = 0; c < a - 1 - b; c++) {
            if (n[c] < n[c + 1]) {
                int temp = n[c];
                n[c] = n[c + 1];
                n[c + 1] = temp;
            }
        }
    }
    for (b = 0; b < a; b++) {
        printf("%d\n", n[b]);
    }
    return 0;
}
```[cite: 16]