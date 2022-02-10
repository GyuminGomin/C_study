// 배열과 포인터 관계
#include <stdio.h>

void main()
{
	char data[5] = { 0, }; // 지역변수에는 무조건 초기화를 해야한다! 안하면 garbage값들이 들어가있으므로
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