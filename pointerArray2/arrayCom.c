#include <stdio.h>

int main(void) {
    int nums1[5] = {1, 2, 3, 4, 5};
    int nums2[5] = {1, 2, 3, 4, 5};
    
    int are_equal = 1; // 배열이 동일하다고 가정

    for (int i = 0; i < 5; i++) {
        if (nums1[i] != nums2[i]) {
            are_equal = 0; // 요소가 다르면 동일하지 않음
            break; // 비교를 중지
        }
    }
    
    if (are_equal) {
        printf("두 배열은 같습니다.\n");
    } else {
        printf("두 배열은 다릅니다.\n");
    }

    return 0;
}

