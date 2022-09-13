// 입력 scanf 연습
#include <stdio.h>

void main()
{
	int data = 0;
	scanf("%d", &data);
	printf("데이터의 값 = %d\n", data);

	int num1, num2, num3;
	printf("값입력 (8진수 10진수 16진수 순으로 입력)\n");
	int result = scanf("%o %d %x", &num1, &num2, &num3); // return 값이 존재하므로 return으로 출력되는 값은 받은 변수의 개수를 뜻한다.
	printf("입력 결과 : %d\n", result);
	printf("입력값 : %d %d %d\n", num1, num2, num3);
}