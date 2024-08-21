#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "queue.h"

// 큐를 초기화하는 함수
void initQueue(Queue *q, int size) {
    if (size <= 0) {
        printf("큐의 크기는 1 이상의 값이어야 합니다.\n");
        exit(EXIT_FAILURE); // 유효하지 않은 크기일 때 프로그램 종료
    }
    q->pArr = (int *)malloc(size * sizeof(int)); // 동적 메모리 할당
    assert(q->pArr != NULL); // 메모리 할당 실패 시 프로그램 종료
    q->front = 0;
    q->rear = 0;
    q->capacity = size;
}

// 큐 메모리를 정리하는 함수
void cleanupQueue(Queue *q) {
    if (q->pArr != NULL) {
        free(q->pArr); // 동적 메모리 해제
        q->pArr = NULL;
    }
    q->front = 0;
    q->rear = 0;
    q->capacity = 0;
}

// 큐에 데이터를 추가하는 함수
void push(Queue *q, int data) {
    if (q->capacity <= 0) {
        printf("큐가 초기화되지 않았습니다.\n");
        return;
    }
    if ((q->rear + 1) % q->capacity == q->front) {
        // 큐가 가득 찼을 때
        printf("큐가 가득 찼습니다\n");
        return;
    }
    q->pArr[q->rear] = data;
    q->rear = (q->rear + 1) % q->capacity;
}

// 큐에서 데이터를 제거하는 함수
int pop(Queue *q) {
    if (q->capacity <= 0) {
        printf("큐가 초기화되지 않았습니다.\n");
        return -1; // 오류 값
    }
    if (q->front == q->rear) {
        // 큐가 비어 있을 때
        printf("큐가 비어 있습니다\n");
        return -1; // 오류 값
    }
    int value = q->pArr[q->front];
    q->front = (q->front + 1) % q->capacity;
    return value;
}
