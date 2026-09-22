#include <stdio.h>

void printn(int n){
    if(n==0){
        return;
    }

    printn(n-1);
    printf("%d\n10",n);

}

int main(void){
    int n;
    printf("n값 입력 :");
    scanf("%d",&n);

    printn(n);

    return 0;
}