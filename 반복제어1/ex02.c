#include <stdio.h>

int main(void) {
    int n = 1;
    int a = 0;
    while (n <= 10) {
        a += n;
        n++;
    }
    printf("sum = %d\n", a);
    printf("num = %d\n", n);
    return 0;
}