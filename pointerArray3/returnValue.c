#include <stdio.h>

// f1 함수: 상수 100을 반환
int f1(void) {
    return 100;
}

// f2 함수: 포인터를 통해 값을 200으로 변경
void f2(int *p) {
    *p = 200;
}

int main(void) {
    int re;

    // f1 호출 후 반환값을 re에 저장
    re = f1();
    printf("re -> %d\n", re); // re의 값 출력 (100)

    // f2 호출하여 re의 값을 200으로 변경
    f2(&re);
    printf("re -> %d\n", re); // re의 값 출력 (200)

    return 0;
}

