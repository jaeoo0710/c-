#include <stdio.h>

int main(void) {
    int n = 'a', a = 1;
    for (int i = 1; i <= 4; i++) {
        for (int b = 1; b <= 5 - i; b++) {
            printf("%c ", n++);
        }
        for (int c = 1; c <= i; c++) {
            printf("%d ", a++);
        }
        printf("\n");
    }
    return 0;
}