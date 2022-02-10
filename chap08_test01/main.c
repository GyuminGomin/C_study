// 조건문
#include <stdio.h>

void main()
{
	int data = 5;

	if (data > 3)
	{
		printf("data는 3보다 큰 수 입니다.\n");
		printf("3보다 클 때, 다른 일 계속 처리\n");
	}
	else
	{
		printf("data는 3보다 작은 수 입니다.\n");
		printf("3보다 작을 때는 오류이기 때문에 예외처리\n");
	}

	printf("모든일이 종료된 후 다른 일 처리\n");

	// 3항 연산자 (조건 수식 연산자)
	int sum = 0;
	sum = (data > 3 ? 1 : 0);
	printf("sum = %d\n", sum);
}