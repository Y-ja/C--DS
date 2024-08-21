#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

int queue[MAX_SIZE];
int front = 0;
int rear = 0;

// 큐에 데이터를 추가하는 함수
void push(int data) {
    // 원형 큐에서 rear가 MAX_SIZE에 도달하면 0으로 돌아가야 함
    queue[rear] = data;
    rear = (rear + 1) % MAX_SIZE;
}

// 큐에서 데이터를 제거하는 함수
int pop(void) {
    // 원형 큐에서 front가 rear와 같으면 큐가 비어있는 것으로 간주
    int value = queue[front];
    front = (front + 1) % MAX_SIZE;
    return value;
}

int main(void) {
    // 큐에 데이터 추가
    push(100);
    push(200);
    
    // 큐에서 데이터 제거 및 출력
    printf("1st pop() -> %d\n", pop());
    
    push(300);
    printf("2nd pop() -> %d\n", pop());
    printf("3rd pop() -> %d\n", pop());
    
    return 0;
}

