// ���ǹ�
#include <stdio.h>

void main()
{
	int data = 5;

	if (data > 3)
	{
		printf("data�� 3���� ū �� �Դϴ�.\n");
		printf("3���� Ŭ ��, �ٸ� �� ��� ó��\n");
	}
	else
	{
		printf("data�� 3���� ���� �� �Դϴ�.\n");
		printf("3���� ���� ���� �����̱� ������ ����ó��\n");
	}

	printf("������� ����� �� �ٸ� �� ó��\n");

	// 3�� ������ (���� ���� ������)
	int sum = 0;
	sum = (data > 3 ? 1 : 0);
	printf("sum = %d\n", sum);
}