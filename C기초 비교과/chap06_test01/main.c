// printf ����
#include <stdio.h>

void main()
{
	int data1 = 3, data2 = 5;

	printf("%d, %f\n", data1, (float) data2);

	int step = 5, value = 3 * step;

	printf("3 * %d = %d\n", step, value);

	printf("65�� �ƽ�Ű���� %c �Դϴ�.\n", 65);

	// float value = 3.141592f;
	// printf("pi�� %.2f �Դϴ�.\n", value); // value�� �������� int value���� ���´�. float�� �ٲ� �� ����.

	// 10����, 8����, 16����
	int data3 = 10, data4 = 017, data5 = 0xFF;
	printf("%d, %o, %x\n", data3, data4, data5);
	printf("%d, %d, %d\n", data3, data4, data5);
}