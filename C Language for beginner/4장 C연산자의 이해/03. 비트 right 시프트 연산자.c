// 오른쪽

#include <stdio.h>

int main() {
    int a = 10;
    printf("%d 를 오른쪽 1회 시프트하면 %d 이다.\n", a, a>>1);
    printf("%d 를 오른쪽 2회 시프트하면 %d 이다.\n", a, a>>2);
    printf("%d 를 오른쪽 3회 시프트하면 %d 이다.\n", a, a>>3);
    printf("%d 를 오른쪽 4회 시프트하면 %d 이다.\n", a, a>>4);
}

// 참고로 오른쪽 시프트 연산자는 몫만 남는다. 나머지는 떨어지고