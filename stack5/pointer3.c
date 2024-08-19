#include <stdio.h>

int main(void)
{
    int a;
    char *p;
    
    a = 0x12345678; // 예제에서 a를 임의의 정수로 초기화
    
    // a의 주소를 char 포인터 p에 할당
    p = (char *)&a;
    
    // 각 바이트를 16진수로 출력
    printf("Bytes of a:\n");
    for (int i = 0; i < sizeof(a); i++) {
        printf("Byte %d -> %02x\n", i, (unsigned char)p[i]);
    }
    
    return 0;
}

