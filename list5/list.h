#ifndef LIST_H
#define LIST_H

#include <stddef.h> // For size_t

typedef struct node {
    void *data;
    struct node *next;
} Node;

typedef struct {
    Node *head;
    int eleSize; // Change size_t to int
} List;

void initializeList(List *plist, int eleSize); // Update function prototype
void insertFirstNode(List *plist, const void *pData);
void insertNodeAfter(List *plist, const void *pPrevData, const void *pData);
void deleteNode(List *plist, const void *pData);
void printList(const List *plist, void (*printFunc)(const void *));
void cleanupList(List *plist);

#endif // LIST_H
