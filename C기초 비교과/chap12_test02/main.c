// 배열 연습
#include <stdio.h>

void main()
{
	printf("2차원 배열\n");

	char temp[2][3] = { {1,2,3},{4,5,6} }; // 초기화 방법

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("temp[%d][%d] = %02d ", i, j, temp[i][j]);
		}
		printf("\n");
	}

	
}