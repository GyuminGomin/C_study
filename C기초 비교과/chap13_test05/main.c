// 포인터 주소 연산
#include <stdio.h>

void main()
{
	int data = 65536;
	//int* p = &data;
	short* p = (short*)&data; // short타입으로 바꿔서 보내준다. 그러나 값이 short 자료형의 메모리에 들어갈 수 없다면 값이 짤라져서 나온다.
	printf("*p 값 = %d", *p);
}