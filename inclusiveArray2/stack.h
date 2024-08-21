#ifndef STACK_H
#define STACK_H

// 스택 구조체 정의
typedef struct {
    void *pArr;        // 동적 배열 (void 포인터 사용)
    int size;          // 배열 크기
    int tos;           // Top of stack
    int elementSize;   // 각 요소의 크기
} Stack;

// 함수 선언
void initStack(Stack *s, int size, int elementSize);
void cleanupStack(Stack *s);
void push(Stack *s, const void *data);
void pop(Stack *s, void *pResult);

#endif // STACK_H

