// �迭�� ������ ����
#include <stdio.h>

void main()
{
	char data[5] = { 0, }; // ������������ ������ �ʱ�ȭ�� �ؾ��Ѵ�! ���ϸ� garbage������ �������Ƿ�
	data[1] = 5;
	*(data + 2) = 15;

	for (int i = 0; i < sizeof(data); i++)
	{
		printf("%d\t", data[i]);
	}
	printf("\n");

	for (int i = 0; i < sizeof(data); i++)
	{
		printf("%p\n", &data[i]);
		printf("%p\n\n", (data + i));
	}
}