#include <stdio.h>

int main(void)
{
    int num1[5] = {1, 2, 3, 4, 5};
    int *p = num1; // 포인터 p를 num1 배열의 첫 번째 요소를 가리키도록 설정

    // 배열의 값을 증가시키는 단계
    for (int i = 0; i < 5; i++) {
        num1[i]++; // 배열의 각 요소를 증가시킵니다.
    }

    // 배열의 각 요소를 인덱스를 통해 출력
    printf("배열의 요소 출력:\n");
    for (int i = 0; i < 5; i++) {
        printf("num1[%d] -> %d\n", i, num1[i]);
    }

    // 포인터 연산을 사용하여 배열의 각 요소 출력
    printf("\n포인터 연산을 사용한 출력:\n");
    for (int i = 0; i < 5; i++) {
        printf("*(num1 + %d) -> %d\n", i, *(num1 + i));
    }

    // 포인터를 사용하여 배열의 각 요소 출력
    printf("\n포인터 p를 사용한 출력:\n");
    for (int i = 0; i < 5; i++) {
        printf("*(p + %d) -> %d\n", i, *(p + i));
    }

    // 포인터를 배열처럼 접근하여 각 요소 출력
    printf("\n포인터 p를 배열처럼 접근한 출력:\n");
    for (int i = 0; i < 5; i++) {
        printf("p[%d] -> %d\n", i, p[i]);
    }

    return 0;
}

