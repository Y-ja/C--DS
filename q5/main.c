#include <stdio.h>
#include "queue.h"

int main(void) {
    // 큐 테스트
    Queue q1, q2;

    // 큐 초기화
    initQueue(&q1, 10, sizeof(int)); // 큐 크기를 10으로 설정
    initQueue(&q2, 10, sizeof(int)); // 큐 크기를 10으로 설정

    // q1에 데이터 추가
    printf("q1에 데이터 추가 중...\n");
    int data1 = 100, data2 = 200, data3 = 300;
    push(&q1, &data1);
    push(&q1, &data2);
    push(&q1, &data3);

    // q2에 데이터 추가
    printf("q2에 데이터 추가 중...\n");
    int data4 = 600, data5 = 700, data6 = 800;
    push(&q2, &data4);
    push(&q2, &data5);
    push(&q2, &data6);

    // q1에서 데이터 제거 및 출력
    printf("q1에서 데이터 제거 및 출력:\n");
    int value;
    pop(&q1, &value);  printf("q1 1st pop() -> %d\n", value);
    pop(&q1, &value);  printf("q1 2nd pop() -> %d\n", value);
    pop(&q1, &value);  printf("q1 3rd pop() -> %d\n", value);

    // q2에서 데이터 제거 및 출력
    printf("q2에서 데이터 제거 및 출력:\n");
    pop(&q2, &value);  printf("q2 1st pop() -> %d\n", value);
    pop(&q2, &value);  printf("q2 2nd pop() -> %d\n", value);
    pop(&q2, &value);  printf("q2 3rd pop() -> %d\n", value);

    // 큐 메모리 정리
    cleanupQueue(&q1);
    cleanupQueue(&q2);

    return 0;
}
