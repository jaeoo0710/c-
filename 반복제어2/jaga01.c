#include <stdio.h>

int main(void) {
    char n;
    int a;
    scanf("%c", &n);
    for (a = 0; a < 20; a++) {
        printf("%c", n);
    }
    return 0;
}