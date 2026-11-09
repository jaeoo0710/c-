#include <stdio.h>

int main(void) {
    int n[3][5] = {
        {5, 8, 10, 6, 4},
        {11, 20, 1, 13, 2},
        {7, 9, 14, 22, 3}
    };
    int a, b;
    for (a = 0; a < 3; a++) {
        for (b = 0; b < 5; b++) {
            printf("%2d   ", n[a][b]);
        }
        printf("\n");
    }
    return 0;
}
```[cite: 16]