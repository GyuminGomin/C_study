#include <stdio.h>

int main() {
    int a;

    printf("������ �Է��ϼ��� : ");
    scanf_s("%d", &a);

    if (a%2 == 0)
    {
        printf("¦���� �Է��߱���.\n");
    }
    else
    {
        printf("Ȧ���� �Է��߱���.\n");
    }
}