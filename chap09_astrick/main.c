// 별표찍기
#include <stdio.h>

/* 가장 기본 코드
void main()
{
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
*/
/* 2번째 예제
void main()
{
	for (int i = 1; i <= 5; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
*/

void main()
{
	for (int i = 0; i <= 4; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}