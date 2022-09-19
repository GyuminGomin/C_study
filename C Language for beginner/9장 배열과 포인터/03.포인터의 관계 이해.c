#include <stdio.h>

int main(){
    char ch;
    char* p;

    ch = 'A';
    p = &ch;

    printf("ch가 가지고 있는 값 : %c \n", ch);
    printf("ch의 주소 : %d \n", &ch);
    printf("p가 가지고 있는 값 : %d \n", p);
    printf("p가 가리키는 곳의 실제값 : %c \n", *p);

    char* q;

    q = p; // 주소 값을 받아오기 때문에 공간을 공유한다.
    *q = 'Z';

    printf("q를 변경해서\nch가 가지고 있는 값 : %c \n", ch);

}

// 참고 사항
/*
char* p; 와 char *p;는 같다.
하지만 char* p,q;로 하는 순간 p는 포인터변수이지만, q는 char변수이다.
따라서 char* p,q; 대신 char *p,*q;로 설정해줘야 함
*/