#include <stdio.h>

int main(){
    int score;
    printf("점수를 입력하세요:");
    scanf("%d",&score);
    printf("%s",(score%2==0)?"even":"odd");
    return 0;
}

