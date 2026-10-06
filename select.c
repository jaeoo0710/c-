#include <stdio.h>

int main()
{
    int a[5] = {5, 3, 4, 1, 2};
    int i, j, min, temp;

    for (i = 0; i < 4; i++)
    {
        min = i;//가장 작은수 임시 설정

        // i 다음부터 작은 숫자를 찾음
        for (j = i + 1; j < 5; j++)
        {
            if (a[j] < a[min])
            {
                min = j;
            }
        }

        // 찾은 작은 숫자와 임시로 저장한 숫자를 자리 바꾸기
        temp = a[i];//temp에 작은 숫자를 임시저장후
        a[i] = a[min];//a에 저장되잇던 수를 저장
        a[min] = temp;//temp에 저장했던 작은수를 최소값에 저장
    }

    // 정렬된 숫자 출력
    for (i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
