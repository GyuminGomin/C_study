// 배열과 포인터 연습
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
	printf("1~5 합계는 %d입니다.\n", sum);
}