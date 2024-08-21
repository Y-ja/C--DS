#include "queue.h"

// 큐를 초기화하는 함수
void initQueue(Queue *q) {
    q->front = 0;
    q->rear = 0;
}

// 큐에 데이터를 추가하는 함수
void push(Queue *q, int data) {
    q->data[q->rear] = data;
    q->rear = (q->rear + 1) % MAX_SIZE;
}

// 큐에서 데이터를 제거하는 함수
int pop(Queue *q) {
    int value = q->data[q->front];
    q->front = (q->front + 1) % MAX_SIZE;
    return value;
}

