#include <stdio.h>

int main()
{
    int a[5] = {5, 3, 4, 1, 2};
    int i, j, temp;

    for (i = 1; i < 5; i++)
    {
        temp = a[i];

        // 앞에 있는 숫자가 더 크면 한 칸 뒤로 이동함
        j = i - 1;

        while (j >= 0 && a[j] > temp)
        {
            a[j + 1] = a[j];
            j--;
        }

        // 비어 있는 자리에 숫자를 넣음
        a[j + 1] = temp;
    }

    // 정렬된 숫자 출력함
    for (i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
