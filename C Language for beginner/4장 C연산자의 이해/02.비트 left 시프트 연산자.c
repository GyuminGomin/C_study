// 왼쪽

#include <stdio.h>

int main() {
    int a = 10;
    printf("%d 를 왼쪽 1회 시프트하면 %d 이다.\n", a, a<<1);
    printf("%d 를 왼쪽 2회 시프트하면 %d 이다.\n", a, a<<2);
    printf("%d 를 왼쪽 3회 시프트하면 %d 이다.\n", a, a<<3);
}