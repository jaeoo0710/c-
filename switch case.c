#include <stdio.h>

int main(){

    int score;
    char grades;

    printf("그라 점수를 입력하세요(1~100):");
    scanf("%d",&score);

    switch(score/10){
        case 10:
        case 9:
            grades = 'A';
            break;

        case 8:
            grades = 'B';
            break;

        case 7:
            grades = 'C';
            break;

        case 6:
            grades = 'D';
            break;

        case 5:
        case 4:
        case 3:
        case 2:
        case 1:
        case 0:
            grades = 'F';
            break;
    }

    printf("학점은: %c\n",grades);

    return 0;
}
