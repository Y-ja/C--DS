#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>
#include "list.h"

// 리스트 초기화
void initializeList(List *plist, int eleSize) {
    plist->head = malloc(sizeof(Node));
    assert(plist->head != NULL); // 메모리 할당 실패 시 프로그램 종료
    plist->head->next = NULL;
    plist->eleSize = eleSize;
}

// 첫 번째 노드에 데이터 삽입
void insertFirstNode(List *plist, const void *pData) {
    Node *newNode = malloc(sizeof(Node));
    assert(newNode != NULL); // 메모리 할당 실패 시 프로그램 종료

    newNode->data = malloc(plist->eleSize);
    assert(newNode->data != NULL); // 메모리 할당 실패 시 프로그램 종료

    memcpy(newNode->data, pData, plist->eleSize);
    newNode->next = plist->head->next;
    plist->head->next = newNode;
}

// 특정 노드 뒤에 데이터 삽입
void insertNodeAfter(List *plist, const void *pPrevData, const void *pData) {
    Node *current = plist->head->next;

    while (current && memcmp(current->data, pPrevData, plist->eleSize) != 0) {
        current = current->next;
    }

    if (current) {
        Node *newNode = malloc(sizeof(Node));
        assert(newNode != NULL); // 메모리 할당 실패 시 프로그램 종료

        newNode->data = malloc(plist->eleSize);
        assert(newNode->data != NULL); // 메모리 할당 실패 시 프로그램 종료

        memcpy(newNode->data, pData, plist->eleSize);
        newNode->next = current->next;
        current->next = newNode;
    }
}

// 노드 삭제
void deleteNode(List *plist, const void *pData) {
    Node *current = plist->head->next;
    Node *prev = plist->head;

    while (current && memcmp(current->data, pData, plist->eleSize) != 0) {
        prev = current;
        current = current->next;
    }

    if (current) {
        prev->next = current->next;
        free(current->data); // 데이터 메모리 해제
        free(current);       // 노드 메모리 해제
    }
}

// 리스트 출력
void printList(const List *plist, void (*printFunc)(const void *)) {
    Node *current = plist->head->next;
    printf("[");
    while (current) {
        printFunc(current->data);
        current = current->next;
        if (current) printf(", ");
    }
    printf("]\n");
}

// 메모리 해제
void cleanupList(List *plist) {
    Node *current = plist->head;
    while (current) {
        Node *next = current->next;
        free(current->data); // 데이터 메모리 해제
        free(current);       // 노드 메모리 해제
        current = next;
    }
}
