#include <stdio.h>
#include "list.h"

// 출력 함수
void print_int(const void *data) {
    printf("%d", *(int*)data);
}

void print_double(const void *data) {
    printf("%f", *(double*)data);
}

int main(void) {
    List list1, list2;
    
    // 리스트 초기화
    initializeList(&list1, sizeof(int));  // int 리스트 초기화
    initializeList(&list2, sizeof(double)); // double 리스트 초기화

    // 정수 리스트에 데이터 삽입
    int i;
    i = 4; insertFirstNode(&list1, &i);
    i = 3; insertFirstNode(&list1, &i);
    i = 1; insertFirstNode(&list1, &i);

    // printf("Integer list: ");
    printList(&list1, print_int);

    // 실수 리스트에 데이터 삽입
    double d;
    d = 2.0; insertFirstNode(&list2, &d);
    d = 3.0; insertFirstNode(&list2, &d);
    d = 1.0; insertFirstNode(&list2, &d);

    // printf("Double list: ");
    printList(&list2, print_double);

    // int 리스트에서 1 뒤에 2를 삽입
    i = 1; insertNodeAfter(&list1, &i, &(int){2});
    // printf("Integer list after insertions: ");
    printList(&list1, print_int);

    // int 리스트에서 값이 3인 노드 삭제
    i = 3; deleteNode(&list1, &i);
    printf("Integer list after deleting 3: ");
    printList(&list1, print_int);

    // 메모리 해제
    cleanupList(&list1);
    cleanupList(&list2);

    return 0;
}
