// �迭 ����
#include <stdio.h>

void main()
{
	printf("2���� �迭\n");

	char temp[2][3] = { {1,2,3},{4,5,6} }; // �ʱ�ȭ ���

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("temp[%d][%d] = %02d ", i, j, temp[i][j]);
		}
		printf("\n");
	}

	
}