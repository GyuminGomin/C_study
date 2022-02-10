// for 반복문
#include <stdio.h>

void main()
{
	int sum = 0, i = 0;

	for (i = 1; i <= 5; i++) {
		sum += i; // sum = sum + i;
	}

	// for (size_t i = 0; i < length; i++) // cf) size_t 는 unsigned int를 개발자들이 편리하게 만든 것
	printf("합계 sum = %d이다.\n", sum);
}