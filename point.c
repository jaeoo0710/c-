    #include <stdio.h>

int main() {
    int value = 10;
    int *p;

    p = &value;
    int result;

    value = 10;
    result = (*p)++;
    printf("(*p)++: %d, 연산 후: %d\n", result, *p);
    /* (*p)++: 현재 값을 반환하고 이후 값을 증가*/

    value = 10;
    result = (*p) + 1;
    printf("(*p)+1: %d, 연산 후: %d\n", result, *p);
    /**p)+1: 값을 변경하지 않고 1만큼 더한 결과 반환 */

    value = 10;
    *p += 1;
    printf("*p+=1 연산 후 : %d\n", *p);
    /**p+=1: 값을 1 증가시키고 결과를 다시 저장 */

    value = 10;
    (*p) += 1;
    printf("(*p)+=1 연산 후: %d\n", *p);
    /*(*p)+=1: *p+=1과 동일 *p=*p+1: 값을 1 더하고 결과를 저장 */

    value = 10;
    *p = *p + 1;
    printf("*p=*p+1 연산 후 : %d\n", *p);
    /*++*p: 값을 먼저 1 증가시키고 증가된 값을 반환 */

    value = 10;
    result = ++(*p);
    printf("++(*p): %d, 연산 후 변수 값: %d\n", result, *p);
    /* ++(*p): ++*p와 동일하며, 연산 순서를 표현*/

    return 0;
}
