#include <stdio.h>

int main()
{
    int year;

    printf("����⵵�� �Է��ϼ��� : ");
    scanf("%d", &year);

    switch (year%12)
    {
        case 0 : printf("������ ��\n"); break;
        case 1 : printf("�� ��\n"); break;
        case 2 : printf("�� ��\n"); break;
        case 3 : printf("���� ��\n"); break;
        case 4 : printf("�� ��\n"); break;
        case 5 : printf("�� ��\n"); break;
        case 6 : printf("ȣ���� ��\n"); break;
        case 7 : printf("�䳢 ��\n"); break;
        case 8 : printf("�� ��\n"); break;
        case 9 : printf("�� ��\n"); break;
        case 10 : printf("�� ��\n"); break;
        case 11 : printf("�� ��\n"); break;
        // default : ��� �͵� ����
    }
}