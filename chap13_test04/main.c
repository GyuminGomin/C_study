// 값 swap

// 직접 주소 지정 방식의 한계
//#include <stdio.h>
//
//void swap(int a, int b)
//{
//	int temp = 0; // a = 95, b = 6
//	temp = a; // temp = 95
//	a = b; // a = 6, b= 6
//	b = temp; // b = 95
//}
//
//void main()
//{
//	int start = 95, end = 6;
//
//	printf("before : start %d, end %d\n", start, end);
//	swap(start, end);
//	printf("after : start %d, end %d\n", start, end);
//
//}


// 간접 주소 지정 방식

#include <stdio.h>

void swap(int* const a, int* const b) // int 앞에 const 붙이면 안됨 왜냐하면 포인터 값을 상수로 지정하겠다는 의미이므로
{
	int temp = 0; // a = 95, b = 6
	temp = *a; // temp = 95
	*a = *b; // a = 6, b= 6
	*b = temp; // b = 95
}

void main()
{
	int start = 95, end = 6;

	printf("before : start %d, end %d\n", start, end);
	swap(&start, &end);
	printf("after : start %d, end %d\n", start, end);

	// const int value = 10;
	// value = 11;
}