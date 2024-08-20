#ifndef STACK_H
#define STACK_H

// 스택 구조체 정의
typedef struct {
    int *pArr;   // 동적 배열
    int size;    // 배열 크기
    int tos;     // Top of stack
} Stack;

// 함수 선언
void initStack(Stack *s, int size);
void cleanupStack(Stack *s);
void push(Stack *s, int data);
int pop(Stack *s);

#endif // STACK_H

