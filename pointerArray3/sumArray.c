#include <stdio.h>

// 배열의 합계를 계산하고 반환하는 함수
int sumArray(const int *pArr, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += pArr[i];
    }
    return sum; // 합계를 반환
}

int main(void) {
    int nums[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int size = sizeof(nums) / sizeof(nums[0]); // 배열의 크기 계산
    int sum = sumArray(nums, size); // 배열의 합계를 계산
    
    printf("sum -> %d\n", sum); // 합계를 출력
    return 0;
}

