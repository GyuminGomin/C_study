// �迭�� ������ ����
#include <stdio.h>

void main()
{
	char data[5] = { 1,2,3,4,5 };
	int sum = 0;
	char* p = data;
	for (int i = 0; i < sizeof(data); i++)
	{
		sum += *(p + i);
	}
	printf("1~5 �հ�� %d�Դϴ�.\n", sum);
}