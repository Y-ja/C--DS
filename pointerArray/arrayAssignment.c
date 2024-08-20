#include <stdio.h>

int main(void)
{
    // 배열을 올바르게 초기화
    int nums1[] = {1, 2, 3, 4, 5};
    int nums2[5];
    
    // nums1의 요소를 nums2로 복사
    for(int i = 0; i < 5; i++) {
        nums2[i] = nums1[i];
    }
    
    // nums2의 요소를 출력
    for(int i = 0; i < 5; i++) {
        printf("%d ", nums2[i]);
    }
    printf("\n");

    return 0;
}

