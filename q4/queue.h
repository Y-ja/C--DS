#ifndef QUEUE_H
#define QUEUE_H

#define MAX_SIZE 100

typedef struct {
    int *pArr;    // 동적 메모리로 할당된 배열을 가리키는 포인터
    int front;    // 큐의 앞쪽 인덱스
    int rear;     // 큐의 뒤쪽 인덱스
    int capacity; // 큐의 용량
} Queue;

// 큐를 초기화하는 함수
void initQueue(Queue *q, int size);

// 큐 메모리를 정리하는 함수
void cleanupQueue(Queue *q);

// 큐에 데이터를 추가하는 함수
void push(Queue *q, int data);

// 큐에서 데이터를 제거하는 함수
int pop(Queue *q);

#endif // QUEUE_H
