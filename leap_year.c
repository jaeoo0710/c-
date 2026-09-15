#include <stdio.h>
int main(){

    int year;
    printf("연도를 입력하세요");          /*변수 만들고 받는거 연습 필요*/
    scanf("%d,&year");

    if((year % 4==0 && year % 100 !=0)|| year % 400==0) {
        printf("윤년 입니다\n");
    }
    else{
        printf("윤년이 아닙니다\n");
    }
    return 0;
}