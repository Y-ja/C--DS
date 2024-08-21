#include <stdio.h>
#include "queue.h"

int main(void) {
    Queue q1, q2;
    
    // 큐 초기화
    initQueue(&q1, 10); // 큐 크기를 10으로 설정
    initQueue(&q2, 10); // 큐 크기를 10으로 설정
    
    // q1에 데이터 추가
    printf("q1에 데이터 추가 중...\n");
    push(&q1, 100);
    push(&q1, 200);
    push(&q1, 300);
    
    // q2에 데이터 추가
    printf("q2에 데이터 추가 중...\n");
    push(&q2, 600);
    push(&q2, 700);
    push(&q2, 800);
    
    // q1에서 데이터 제거 및 출력
    printf("q1에서 데이터 제거 및 출력:\n");
    int value;
    while ((value = pop(&q1)) != -1) {
        printf("q1: pop() -> %d\n", value);
    }
    
    // q2에서 데이터 제거 및 출력
    printf("q2에서 데이터 제거 및 출력:\n");
    while ((value = pop(&q2)) != -1) {
        printf("q2: pop() -> %d\n", value);
    }
    
    // 큐 메모리 정리
    cleanupQueue(&q1);
    cleanupQueue(&q2);

    return 0;
}
