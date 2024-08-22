#ifndef LIST_H
#define LIST_H

typedef struct node {
    int data;
    struct node *next;
} Node;

typedef struct {
    Node *ptr;
} List;

void initializeList(List *plist);
void insertFirstNode(List *plist, int data);
void insertNode(List *plist, int prevData, int count);
void deleteNode(List *plist, int data);
void printList(const List *plist);
void cleanupList(List *plist);

#endif // LIST_H
