#include <stdio.h>
#include "stack.h"

int main(void) {
    Stack s1, s2;

    // 스택 초기화
    initStack(&s1, 10, sizeof(int));
    initStack(&s2, 100, sizeof(double));

    int i;
    i = 100; push(&s1, &i);
    i = 200; push(&s1, &i);
    i = 300; push(&s1, &i);
    
    // s1에서 값 제거 및 출력
    int re;
    pop(&s1, &re);  printf("s1 1st pop() -> %d\n", re);
    pop(&s1, &re);  printf("s1 2nd pop() -> %d\n", re);
    pop(&s1, &re);  printf("s1 3rd pop() -> %d\n", re);
    
    double d;
    d = 1.1; push(&s2, &d);
    d = 2.2; push(&s2, &d);
    d = 3.3; push(&s2, &d);
    
    // s2에서 값 제거 및 출력
    double re2;
    pop(&s2, &re2);  printf("s2 1st pop() -> %f\n", re2);
    pop(&s2, &re2);  printf("s2 2nd pop() -> %f\n", re2);
    pop(&s2, &re2);  printf("s2 3rd pop() -> %f\n", re2);

    // 스택 메모리 해제
    cleanupStack(&s1);
    cleanupStack(&s2);

    return 0;
}

