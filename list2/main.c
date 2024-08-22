#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node *next;
} Node;

Node* create_node(int data) {
    Node *new_node = malloc(sizeof(Node));
    new_node->data = data;
    new_node->next = NULL;
    return new_node;
}

void print_list(Node *head) {
    for (Node *p = head; p != NULL; p = p->next)
        printf("%d ", p->data);
    printf("\n");
}

Node* delete_node(Node *head, int value) {
    while (head && head->data == value) {
        Node *temp = head;
        head = head->next;
        free(temp);
    }
    Node *current = head;
    while (current && current->next) {
        if (current->next->data == value) {
            Node *temp = current->next;
            current->next = temp->next;
            free(temp);
        } else {
            current = current->next;
        }
    }
    return head;
}

void free_list(Node *head) {
    while (head) {
        Node *temp = head;
        head = head->next;
        free(temp);
    }
}

int main(void) {
    Node *ptr = create_node(1);
    ptr->next = create_node(2);
    ptr->next->next = create_node(3);
    ptr->next->next->next = create_node(4);
    ptr->next->next->next->next = create_node(5);

    printf("Original list: ");
    print_list(ptr);

    ptr = delete_node(ptr, 3);

    printf("List after deleting 3: ");
    print_list(ptr);

    free_list(ptr);

    return 0;
}
