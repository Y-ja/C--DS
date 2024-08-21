#ifndef QUEUE_H
#define QUEUE_H

#define MAX_SIZE 100

typedef struct {
    int data[MAX_SIZE];
    int front;
    int rear;
} Queue;

// 큐를 초기화하는 함수
void initQueue(Queue *q);

// 큐에 데이터를 추가하는 함수
void push(Queue *q, int data);

// 큐에서 데이터를 제거하는 함수
int pop(Queue *q);

#endif // QUEUE_H

