#include <stdio.h>

int main(void) {
    char a;
    scanf("%c", &a);
    if (a == 'A') {
        printf("Excellent\n");
    } else if (a == 'B') {
        printf("Good\n");
    } else if (a == 'C') {
        printf("Usually\n");
    } else {
        printf("error\n");
    }
    return 0;
}