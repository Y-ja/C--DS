#ifndef STACK_H
#define STACK_H

#define STACKSIZE 100

typedef struct {
    int array[STACKSIZE];
    int tos; // top of stack
} Stack;

// 함수 선언
void initStack(Stack *s);
void push(Stack *s, int data);
int pop(Stack *s);

#endif // STACK_H

