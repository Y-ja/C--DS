#ifndef QUEUE_H
#define QUEUE_H

#include <stddef.h> // For size_t

typedef struct {
    void *pArr;        // 동적 메모리로 할당된 배열을 가리키는 포인터
    int front;        // 큐의 앞쪽 인덱스
    int rear;         // 큐의 뒤쪽 인덱스
    int capacity;     // 큐의 용량
    size_t elemSize;  // 데이터 요소의 크기
} Queue;

// 큐를 초기화하는 함수
void initQueue(Queue *q, int size, size_t elemSize);

// 큐 메모리를 정리하는 함수
void cleanupQueue(Queue *q);

// 큐에 데이터를 추가하는 함수
void push(Queue *q, const void *data);

// 큐에서 데이터를 제거하는 함수
void pop(Queue *q, void *pResult);

#endif // QUEUE_H
