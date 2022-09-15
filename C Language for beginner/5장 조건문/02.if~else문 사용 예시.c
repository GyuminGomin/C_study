#include <stdio.h>

int main() {
    int a;

    printf("정수를 입력하세요 : ");
    scanf_s("%d", &a);

    if (a%2 == 0)
    {
        printf("짝수를 입력했군요.\n");
    }
    else
    {
        printf("홀수를 입력했군요.\n");
    }
}