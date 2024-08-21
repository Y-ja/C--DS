#include <stdio.h>
#include "stack.h"

int main(void) {
    Stack s1, s2;

    // 스택 초기화
    initStack(&s1, 10);
    initStack(&s2, 100);

    // s1에 값 추가
    push(&s1, 100);
    push(&s1, 200);
    push(&s1, 300);
    
    // s1에서 값 제거 및 출력
    int re;
    pop(&s1, &re);  printf("s1 1st pop() -> %d\n", re);
    pop(&s1, &re);  printf("s1 2nd pop() -> %d\n", re);
    pop(&s1, &re);  printf("s1 3rd pop() -> %d\n", re);

    // s2에 값 추가
    push(&s2, 600);
    push(&s2, 700);
    push(&s2, 800);
    
    // s2에서 값 제거 및 출력
    pop(&s2, &re);  printf("s2 1st pop() -> %d\n", re);
    pop(&s2, &re);  printf("s2 2nd pop() -> %d\n", re);
    pop(&s2, &re);  printf("s2 3rd pop() -> %d\n", re);

    // 스택 메모리 해제
    cleanupStack(&s1);
    cleanupStack(&s2);

    return 0;
}

