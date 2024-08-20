#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int size;
    
    // 사용자로부터 배열의 크기를 입력받음
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // 동적 메모리 할당
    int *array = (int *)malloc(size * sizeof(int));
    if (array == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
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

    // 동적 메모리 해제
    free(array);

    return 0;
}

