// �ڷ��� ����
#include <stdio.h> // ǥ�� ����� ��ó����

void main()
{
	printf("-------------------------\n");
	printf("������\n");
	signed char temp = -2; // 1Byte 255
	unsigned char age = 50; 
	short dday = -20; // 2Byte 65535
	unsigned short seconds = 35000;
	long money = 7000000L; // 4Byte 42������ long ���� int�� �ᵵ ��
	unsigned long time_seconds = 1453100624L;

	printf("%d\n", temp);
	printf("%d\n", age);
	printf("%d\n", dday);
	printf("%d\n", seconds);
	printf("%d\n", money);
	printf("%d\n", time_seconds);
	printf("-------------------------\n");

	printf("�Ǽ�Ÿ��\n");
	float pi = 3.141592654f;
	double dpi = -3.141592654;

	printf("%2.9f\n", pi);
	printf("%2.9f\n", dpi);
	printf("-------------------------\n");

}