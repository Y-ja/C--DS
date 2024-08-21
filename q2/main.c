#include <stdio.h>
#include "queue.h"

int main(void) {
    Queue q1, q2;

    // 큐 초기화
    initQueue(&q1);
    initQueue(&q2);

    // q1에 데이터 추가
    push(&q1, 100);
    push(&q1, 200);
    push(&q1, 300);
    
    // q2에 데이터 추가
    push(&q2, 600);
    push(&q2, 700);
    push(&q2, 800);
    
    // q1에서 데이터 제거 및 출력
    printf("q1 - 1st pop() -> %d\n", pop(&q1));
    printf("q1 - 2nd pop() -> %d\n", pop(&q1));
    printf("q1 - 3rd pop() -> %d\n", pop(&q1));
    
    // q2에서 데이터 제거 및 출력
    printf("q2 - 1st pop() -> %d\n", pop(&q2));
    printf("q2 - 2nd pop() -> %d\n", pop(&q2));
    printf("q2 - 3rd pop() -> %d\n", pop(&q2));
    
    return 0;
}

