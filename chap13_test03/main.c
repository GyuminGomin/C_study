// 포인터 연습3

// 직접 주소 대입 방식
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

// 간접 주소 지정 방식
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
	test(&tips); // 여긴 주소를 보내준다.
	printf("%d\n", tips);
}