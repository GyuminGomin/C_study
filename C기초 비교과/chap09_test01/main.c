// for �ݺ���
#include <stdio.h>

void main()
{
	int sum = 0, i = 0;

	for (i = 1; i <= 5; i++) {
		sum += i; // sum = sum + i;
	}

	// for (size_t i = 0; i < length; i++) // cf) size_t �� unsigned int�� �����ڵ��� ���ϰ� ���� ��
	printf("�հ� sum = %d�̴�.\n", sum);
}