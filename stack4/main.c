#include <stdio.h>
#include "stack.h"

int main(void)
{ 
    Stack s1, s2;
    
    // 스택 초기화
    initStack(&s1);
    initStack(&s2);

    // s1에 값 추가
    push(&s1, 100);
    push(&s1, 200);
    push(&s1, 300);
    
    // s1에서 값 제거 및 출력
    printf("s1 1st pop() -> %d\n", pop(&s1));
    printf("s1 2nd pop() -> %d\n", pop(&s1));
    printf("s1 3rd pop() -> %d\n", pop(&s1));
    
    // s2에 값 추가
    push(&s2, 600);
    push(&s2, 700);
    push(&s2, 800);
    
    // s2에서 값 제거 및 출력
    printf("s2 1st pop() -> %d\n", pop(&s2));
    printf("s2 2nd pop() -> %d\n", pop(&s2));
    printf("s2 3rd pop() -> %d\n", pop(&s2)); 

    return 0;
}

