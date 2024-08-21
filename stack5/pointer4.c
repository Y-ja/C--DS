#include <stdio.h>

int main(void)
{
    int a;
    int *p;
    int **pa;
    
    a = 100;       // 변수 a를 100으로 초기화
    
    p = &a;        // 포인터 p를 변수 a의 주소로 설정
    pa = &p;       // 포인터 pa를 포인터 p의 주소로 설정
    
    **pa = 200;    // **pa를 통해 변수 a의 값을 200으로 변경
    
    printf("a -> %d\n", a); // 변수 a의 값을 출력
    
    return 0;
}

