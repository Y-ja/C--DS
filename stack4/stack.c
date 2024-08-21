#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "stack.h"

// 스택 초기화 함수
void initStack(Stack *s, int size) {
    s->pArr = (int *)malloc(size * sizeof(int));
    assert(s->pArr != NULL);  // 메모리 할당 실패 시 종료
    s->size = size;
    s->tos = -1; // 스택이 비어있음을 나타내는 초기값
}

// 스택 메모리 해제 함수
void cleanupStack(Stack *s) {
    free(s->pArr);
}

// 스택에 데이터를 푸시하는 함수
void push(Stack *s, int data) {
    assert(s->tos < s->size - 1); // 스택이 가득 찼는지 확인
    s->pArr[++(s->tos)] = data;
}

// 스택에서 데이터를 팝하는 함수
int pop(Stack *s) {
    assert(s->tos >= 0); // 스택이 비어 있는지 확인
    return s->pArr[s->tos--];
}

