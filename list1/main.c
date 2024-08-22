#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node *next;
} Node;

// 노드 생성 함수
Node* create_node(int data) {
    Node *new_node = malloc(sizeof(Node));
    new_node->data = data;
    new_node->next = NULL;
    return new_node;
}

// 리스트 출력 함수
void print_list(Node *head) {
    Node *p = head;
    while (p != NULL) {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}

// 리스트 메모리 해제 함수
void free_list(Node *head) {
    Node *temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }
}

int main(void) {
    Node *ptr;
    Node *p;

    // 노드 생성 및 연결
    ptr = create_node(1);
    ptr->next = create_node(3);
    ptr->next->next = create_node(4);

    // 리스트 출력
    print_list(ptr);

    // 메모리 해제
    free_list(ptr);

    return 0;
}
