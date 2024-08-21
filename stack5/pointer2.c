#include <stdio.h>

int main(void)
{
    int num;
    int nums[5] = {1, 2, 3, 4, 5};
    
    int *p;
    p = &num;
    *p = 100;
    
    p = &nums[1];
    *p = 7;
    
    // 수정된 부분: num 변수를 올바르게 출력
    printf("num -> %d\n", num);
    
    // 배열 nums의 값을 출력
    printf("nums -> ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");

    return 0;
}

