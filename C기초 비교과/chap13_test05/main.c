// ������ �ּ� ����
#include <stdio.h>

void main()
{
	int data = 65536;
	//int* p = &data;
	short* p = (short*)&data; // shortŸ������ �ٲ㼭 �����ش�. �׷��� ���� short �ڷ����� �޸𸮿� �� �� ���ٸ� ���� ©������ ���´�.
	printf("*p �� = %d", *p);
}