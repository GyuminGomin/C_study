// 지역변수
#include <stdio.h>
int g_result; // 전역변수( 보통 지역변수와 구별되도록 g_를 붙인다. ) --> 함수에 사용하면 함수가 종속되므로 독립적으로 사용 불가능

// 지역변수 예
/*
int sum(int x, int y)
{
	int result = 0; // sum의 지역변수 result
	result = x + y;
	return result;
}

void main()
{
	int result; // main의 지역변수 result
	result = sum(5, 3);
	printf("result값은 %d\n", result);
}
*/

// 전역변수 예
void sum(int x, int y)
{
	// int result = 0; // sum의 지역변수 result
	g_result = x + y;
	// return result;
}

void main()
{
	// int result; // main의 지역변수 result
	sum(5, 3);
	printf("result값은 %d\n", g_result);
}