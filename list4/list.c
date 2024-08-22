#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "list.h"

// 함수를 사용하는 가장 큰 이유는 바로 반복적인 프로그래밍을 피할 수 있기 때문 입니다...

// 노드 생성 함수
static Node *createNode(int data, Node *next) {
    Node *p = malloc(sizeof(Node));
    assert(p);  // 메모리 할당 실패 시 종료
    p->data = data;
    p->next = next;  // 매개변수 'next' 사용
    return p;
}

// 리스트 초기화 함수
void initializeList(List *plist) {
    plist->ptr = createNode(-1, NULL);  // 더미 노드로 초기화
}

// 리스트의 첫 번째 노드에 단일 노드 삽입
void insertFirstNode(List *plist, int data) {
    plist->ptr->next = createNode(data, plist->ptr->next);
}

// 리스트의 특정 노드 뒤에 노드 삽입
void insertNode(List *plist, int prevData, int data) {
    Node *ptr = plist->ptr->next;
    while (ptr) {
        if (ptr->data == prevData) {
            Node *newNode = createNode(data, ptr->next);
            ptr->next = newNode;
            return;  // 노드를 삽입한 후 종료
        }
        ptr = ptr->next;
    }
    // prevData가 리스트에 없을 경우에는 노드가 삽입되지 않음
}

// 리스트에서 노드 삭제
void deleteNode(List *plist, int data) {
    Node *ptr1 = plist->ptr->next;
    Node *ptr2 = plist->ptr;

    while (ptr1) {
        if (ptr1->data == data) {
            ptr2->next = ptr1->next;
            free(ptr1);  // 삭제할 노드
            return;  // 노드를 삭제한 후 종료
        }
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }
}

// 리스트 출력 함수
void printList(const List *plist) {
    Node *p = plist->ptr->next;
    printf("[");
    while (p) {
        printf("%d", p->data);
        p = p->next;
        // 다음 노드가 있으면 쉼표와 공백 추가, 그렇지 않으면 아무 것도 추가하지 않음
        /*
            Side Effect -> 프로그래밍에서 함수나 연산이 
            본래의 목적 외에 외부 상태를 변경하는 경우를 말합니다.
        */  
        printf("%s", p ? ", " : "");
    }
    printf("]\n"); // 대괄호와 개행 추가
}

// 리스트 메모리 해제 함수
void cleanupList(List *plist) {
    Node *p = plist->ptr;
    while (p) {
        Node *tmp = p;
        p = p->next;
        free(tmp);
    }
}
