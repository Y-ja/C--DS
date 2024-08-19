# 📚 C 언어 구조체 (Structs) 사용법
이 문서는 C 언어에서 구조체(Struct)를 사용하는 방법에 대해 설명합니다. 구조체는 여러 변수(필드)를 하나의 복합 데이터 타입으로 묶을 수 있는 유용한 기능입니다.

## 🧩 구조체란?
구조체는 여러 변수(다양한 데이터 타입)들을 하나의 단위로 묶어 주는 사용자 정의 데이터 타입입니다. 이를 통해 관련 데이터를 그룹화하여 더 효율적으로 관리할 수 있습니다.

## 📜 구조체 선언
구조체를 사용하기 위해서는 먼저 구조체를 선언해야 합니다.
```
// 구조체 정의
struct Person {
    char name[50];
    int age;
    float height;
};
```
- struct Person은 구조체의 이름입니다.
- name, age, height는 구조체의 필드입니다.

## ✍️ 구조체 변수 선언
구조체를 정의한 후에는 구조체 변수를 선언하여 사용할 수 있습니다.
```
// 구조체 변수 선언
struct Person person1;
```
## 🛠️ 구조체 초기화
구조체를 선언한 후에는 필드를 초기화할 수 있습니다.
```
// 구조체 초기화
struct Person person1 = {"John Doe", 30, 5.9};
```
## 🚀 구조체 필드 접근
구조체의 필드에 접근하려면 . 연산자를 사용합니다.
```
// 필드에 값 할당
person1.age = 31;

// 필드 값 출력
printf("Name: %s\n", person1.name);
printf("Age: %d\n", person1.age);
printf("Height: %.1f\n", person1.height);

```
## 🏗️ 구조체 배열

구조체 배열을 사용하여 여러 개의 구조체를 관리할 수 있습니다.
```
// 구조체 배열 선언
struct Person people[3];

// 구조체 배열 초기화
people[0] = (struct Person){"Alice", 28, 5.6};
people[1] = (struct Person){"Bob", 32, 5.8};
people[2] = (struct Person){"Charlie", 25, 6.0};

```
## 📌 구조체 포인터
구조체를 포인터를 통해 사용할 수도 있습니다.
```
// 구조체 포인터 선언
struct Person *pPerson;

// 포인터에 구조체 변수의 주소 할당
pPerson = &person1;

// 포인터를 통해 필드에 접근
printf("Name: %s\n", pPerson->name);
printf("Age: %d\n", pPerson->age);
printf("Height: %.1f\n", pPerson->height);
```
## 🧰 실용적인 팁

- 구조체는 다양한 데이터 타입을 조합할 때 유용합니다.
- 복잡한 데이터 구조를 정의할 때 구조체와 구조체 포인터를 활용하세요.
- 구조체의 크기와 메모리 정렬을 고려해 구조체를 설계하는 것이 좋습니다.

## 📚 참고 자료

- C Programming Language - Kernighan and Ritchie
- Learn C - TutorialsPoint
