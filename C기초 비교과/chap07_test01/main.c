// ������
#include <stdio.h>

void main()
{
	int data1 = 5, data2 = 3;
	int sum = 0;

	printf("%d + %d = %d\n", data1, data2, (data1 + data2));
	printf("%d - %d = %d\n", data1, data2, (data1 - data2));
	printf("%d * %d = %d\n", data1, data2, (data1 * data2));
	printf("%d / %d = %d\n", data1, data2, (data1 / data2));
	printf("%d %% %d = %d\n", data1, data2, (data1 % data2)); // ""�ȿ� %�ι� ��� ��

	sum = data1++;
	printf("sum = %d\n", sum);
	sum = ++data2;
	printf("sum = %d\n", sum);

}