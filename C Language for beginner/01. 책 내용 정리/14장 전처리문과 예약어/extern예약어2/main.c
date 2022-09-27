#include <stdio.h>

void exchange();

int a, b;

int main()
{
    printf("a의 값을 입력 : ");
    scanf("%d", &a);
    printf("b의 값을 입력 : ");
    scanf("%d", &b);

    exchange();

    printf("\n바뀐 값 a는 %d, b는 %d \n", a, b);
}