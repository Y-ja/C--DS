# 연결 리스트 작업 설명

## 초기 설정
다음 코드는 세 개의 노드로 연결 리스트를 설정합니다

```
struct node {
    int data;
    struct node* next;
};

struct node *ptr;
ptr = malloc(sizeof(struct node));   // 첫 번째 노드를 위한 메모리 할당
ptr->data = 1;                       // 첫 번째 노드의 데이터 설정
ptr->next = malloc(sizeof(struct node));  // 두 번째 노드를 위한 메모리 할당
ptr->next->data = 3;                // 두 번째 노드의 데이터 설정
ptr->next->next = malloc(sizeof(struct node));  // 세 번째 노드를 위한 메모리 할당
ptr->next->next->data = 4;         // 세 번째 노드의 데이터 설정
ptr->next->next->next = NULL;      // 리스트 끝을 NULL로 설정

```
- 결과
```
ptr -> [1 | *] -> [3 | *] -> [4 | NULL]

```
## 노드 삽입
```
struct node *p = malloc(sizeof(struct node));
p->data = 2;
p->next = ptr->next;    // p는 두 번째 노드(데이터 = 3)를 가리킴
ptr->next = p;          // p를 첫 번째 노드와 두 번째 노드 사이에 삽입

```
- 노드 삽입 후
```
ptr -> [1 | *] -> [2 | *] -> [3 | *] -> [4 | NULL]

```
## 노드 삭제
```
p = ptr->next->next;       // p는 데이터 = 3인 노드를 가리킴
ptr->next->next = p->next; // p 노드(데이터 = 3)를 건너뛰고 연결
free(p);                   // 삭제된 노드의 메모리 해제

```
- 삭제 후 출력
```
ptr -> [1 | *] -> [2 | *] -> [4 | NULL]

```
## 리스트 순회
```
struct node *p = ptr;
while (p != NULL) {
    printf("%d\n", p->data);
    p = p->next;
}
```
-순회후 출력
```
1
2
4
```
