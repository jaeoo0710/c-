#include <stdio.h>

int main(void) {
    int n[3][3] = {{3, 5, 4}, {2, 6, 7}, {8, 10, 1}}, a, b;
    for (a = 0; a < 3; a++) {
        for (b = 0; b < 3; b++) {
            printf("%d ", n[a][b]);
        }
        printf("\n");
    }
    return 0;
}
```[cite: 16]