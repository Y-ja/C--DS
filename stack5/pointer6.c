#include <stdio.h>

int main(void)
{
    int a = 100;
    double d = 3.14;
    void *p;
    
    // void 포인터를 int형 변수 a의 주소로 설정
    p = &a;
    *(int *)p = 200; // void 포인터를 int형 포인터로 캐스팅하여 a의 값을 변경
    // void 포인터를 int형 포인터로 캐스팅하여 a의 값을 출력
    printf("a -> %d\n", *(int *)p);
    
    // void 포인터를 double형 변수 d의 주소로 설정
    p = &d;
    *(double *)p = 2.718; // void 포인터를 double형 포인터로 캐스팅하여 d의 값을 변경
    // void 포인터를 double형 포인터로 캐스팅하여 d의 값을 출력
    printf("d -> %f\n", *(double *)p);
    
    return 0;
}

