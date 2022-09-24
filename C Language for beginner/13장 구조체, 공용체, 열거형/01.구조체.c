// 구조체
/*
구조체는 여러 데이터형이 들어갈 수 있다.

형태
struct 구조체이름 {
    int a;
    char b;
    float c;
    char d[5];
}
구조체 생성
struct 구조체이름 생성할이름;
*/

#include <stdio.h>
#include <string.h>

int main(){
    struct bibim {
        int a;
        float b;
        char c;
        char d[5];
    };

    struct bibim b1;
    
    b1.a = 10;
    b1.b = 1.1f;
    b1.c = 'A';
    strcpy(b1.d, "ABCD");

    printf("b1.a ==> %d \n", b1.a);
    printf("b1.b ==> %f \n", b1.b);
    printf("b1.c ==> %c \n", b1.c);
    printf("b1.d ==> %s \n", b1.d);
}