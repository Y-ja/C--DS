#include <stdio.h>

int main(void) {
    // 고정된 배열 크기
    int array[100]; // 배열 크기 100으로 설정
    
    int size;
    
    // 사용자로부터 배열의 크기를 입력받음
    printf("Enter the size of the array (max 100): ");
    scanf("%d", &size);
    
    // 입력된 크기가 배열의 최대 크기를 초과하는지 확인
    if (size > 100) {
        fprintf(stderr, "Size exceeds maximum allowed size of 100\n");
        return 1;
    }

    // 배열에 값 할당
    for (int i = 0; i < size; i++) {
        array[i] = i + 1;
    }

    // 배열의 값 출력
    for (int i = 0; i < size; i++) {
        printf("%d\n", array[i]);
    }

    return 0;
}

