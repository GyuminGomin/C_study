// �Է� scanf ����
#include <stdio.h>

void main()
{
	int data = 0;
	scanf("%d", &data);
	printf("�������� �� = %d\n", data);

	int num1, num2, num3;
	printf("���Է� (8���� 10���� 16���� ������ �Է�)\n");
	int result = scanf("%o %d %x", &num1, &num2, &num3); // return ���� �����ϹǷ� return���� ��µǴ� ���� ���� ������ ������ ���Ѵ�.
	printf("�Է� ��� : %d\n", result);
	printf("�Է°� : %d %d %d\n", num1, num2, num3);
}