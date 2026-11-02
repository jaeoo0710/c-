#include <stdio.h>

int main(void) {
    int n = 50;
    n = 75;
    int a = n;
    if (n >= 80) {
        n += 10;
    } else {
        n -= 5;
    }
    int b = n;
    n--;
    int c = n;
    printf("%d %d %d\n", a, b, c);
    return 0;
}