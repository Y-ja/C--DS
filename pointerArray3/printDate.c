#include <stdio.h>

typedef struct {
    int year;
    int month;
    int day;
} Date;

// 구조체를 값으로 받아서 출력하는 함수
void printDate(Date d) {
    printf("(%d - %d - %d)\n", d.year, d.month, d.day);
}

// 구조체를 포인터로 받아서 출력하는 함수
void printDate2(const Date *dp) {
    printf("(%d - %d - %d)\n", dp->year, dp->month, dp->day);
}

int main(void) {
    Date today = {2024, 8, 20};
    
    // 구조체를 값으로 전달
    printDate(today);
    
    // 구조체의 포인터를 전달
    printDate2(&today);
    
    return 0;
}
