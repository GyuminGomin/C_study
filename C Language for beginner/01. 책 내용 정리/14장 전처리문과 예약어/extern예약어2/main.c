#include <stdio.h>

void exchange();

int a, b;

int main()
{
    printf("a�� ���� �Է� : ");
    scanf("%d", &a);
    printf("b�� ���� �Է� : ");
    scanf("%d", &b);

    exchange();

    printf("\n�ٲ� �� a�� %d, b�� %d \n", a, b);
}