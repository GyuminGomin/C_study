// printf 예제
#include <stdio.h>

void main()
{
	int data1 = 3, data2 = 5;

	printf("%d, %f\n", data1, (float) data2);

	int step = 5, value = 3 * step;

	printf("3 * %d = %d\n", step, value);

	printf("65의 아스키값은 %c 입니다.\n", 65);

	// float value = 3.141592f;
	// printf("pi는 %.2f 입니다.\n", value); // value를 눌러보면 int value값이 나온다. float로 바꿀 수 없다.

	// 10진수, 8진수, 16진수
	int data3 = 10, data4 = 017, data5 = 0xFF;
	printf("%d, %o, %x\n", data3, data4, data5);
	printf("%d, %d, %d\n", data3, data4, data5);
}