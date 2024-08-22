#include <stdio.h>
#include <stdlib.h>
#include "list.h"

// 리스트 초기화 함수
void initializeList(List *plist) {
    plist->ptr = malloc(sizeof(Node));
    if (plist->ptr == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        exit(1);
    }
    plist->ptr->next = NULL;
}

// 리스트의 첫 번째 노드에 단일 노드 삽입
void insertFirstNode(List *plist, int data) {
    Node *newNode = malloc(sizeof(Node));
    if (newNode == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = plist->ptr->next;
    plist->ptr->next = newNode;
}

// 리스트의 특정 노드 뒤에 노드 삽입
void insertNode(List *plist, int prevData, int data) {
    Node *ptr = plist->ptr->next;
    while (ptr) {
        if (ptr->data == prevData) {
            break;
        }
        ptr = ptr->next;
    }
    if (ptr) {
        Node *newNode = malloc(sizeof(Node));
        if (newNode == NULL) {
            fprintf(stderr, "Memory allocation failed\n");
            exit(1);
        }
        newNode->data = data;
        newNode->next = ptr->next;
        ptr->next = newNode;
    }
}

// 리스트에서 노드 삭제
void deleteNode(List *plist, int data) {
    Node *ptr1 = plist->ptr->next;
    Node *ptr2 = plist->ptr;

    while (ptr1) {
        if (ptr1->data == data) {
            break;
        }
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }
    if (ptr1) {
        ptr2->next = ptr1->next;
        free(ptr1);  // 수정: ptr1이 삭제할 노드
    }
}

// 리스트 출력 함수
void printList(const List *plist) {
    Node *p = plist->ptr->next;
    printf("[");
    while (p) {
        printf("%d", p->data);
        p = p->next;
        if (p) { // 다음 노드가 있으면 쉼표와 공백 추가
            printf(", ");
        }
    }
    // 명시적으로 NULL 값을 추가
    printf(", NULL");
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
