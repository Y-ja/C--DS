#include <stdio.h>
#include "list.h"

int main(void) {
    List list;
    initializeList(&list);  // 리스트를 초기화

    insertFirstNode(&list, 4);
    printList(&list);

    insertFirstNode(&list, 3);
    printList(&list);

    insertFirstNode(&list, 1);
    printList(&list);

    insertNode(&list, 1, 2);  // 1 뒤에 2개의 노드를 삽입
    printList(&list);

    deleteNode(&list, 3);  // 값이 3인 노드 삭제
    printList(&list);

    cleanupList(&list);  // 리스트의 모든 노드 메모리 해제

    return 0;
}
