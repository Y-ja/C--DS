#include <stdio.h>

// 두 정수를 더하는 함수
int add(int a, int b) {
    return a + b;
}

// 두 정수를 빼는 함수
int sub(int a, int b) {
    return a - b;
}

int main(void) {
    // 함수 포인터 선언
    int (*fp)(int, int);
    int re;
    
    // add 함수에 대한 포인터를 fp에 할당
    fp = &add;
    re = (*fp)(4, 3); // 함수 포인터를 사용하여 add 함수 호출
    printf("Result of add -> %d\n", re);
    
    // sub 함수에 대한 포인터를 fp에 할당
    fp = &sub;
    re = (*fp)(4, 3); // 함수 포인터를 사용하여 sub 함수 호출
    printf("Result of sub -> %d\n", re);
    
    return 0;
}

