#include <stdio.h>

// swap 함수 수정
void swap(int *pa, int *pb) {
    int tmp = *pa; // *pa를 tmp에 저장
    *pa = *pb;     // *pb를 *pa에 저장
    *pb = tmp;     // tmp를 *pb에 저장
}

int main(void) {
    int a, b;
    a = 100;
    b = 200;
    
    printf("a -> %d\t b -> %d\n", a, b);
    
    // swap 호출
    swap(&a, &b);
    
    printf("a -> %d\t b -> %d\n", a, b);
    
    return 0;
}

