// ������ ����3

// ���� �ּ� ���� ���
//#include <stdio.h>
//
//void test(short data)
//{
//	short soft = 0;
//	soft = data;
//	soft++;
//}
//
//void main()
//{
//	short tips = 0x0005;
//	test(tips);
//	printf("%d\n", tips);
//}

// ���� �ּ� ���� ���
#include <stdio.h>

void test(short* ptr)
{
	short soft = 0;
	soft = *ptr;
	soft++;

	*ptr *= 30; // *ptr = (*ptr) * 30;
}

void main()
{
	short tips = 0x0005;
	test(&tips); // ���� �ּҸ� �����ش�.
	printf("%d\n", tips);
}