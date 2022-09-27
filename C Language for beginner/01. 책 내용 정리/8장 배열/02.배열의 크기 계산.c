#include <stdio.h>

int main(){
    int aa[] = {10, 20, 30, 40, 50};
    int count;

    count = sizeof(aa)/sizeof(int); // sizeof는 쓰는 byte 크기를 계산
    // 4byte(int크기) x 4개(요소개수)

    printf("배열 aa[]의 요소의 개수는 %d개 입니다.\n", count);
}