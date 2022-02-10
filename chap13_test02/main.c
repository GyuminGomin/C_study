// 포인터 학습
#include <stdio.h>

void main()
{
	short birthday;
	short* ptr; // visual studio에서는 포인터 위치 앞에 두길 권장
	ptr = &birthday;
	*ptr = 1008; // ptr이 가리키고 있는 메모리 주소에 값을 넣는다.

	printf("ptr 변수의 크기 %d\n", sizeof(ptr));
	printf("birthday 주소 %p\n", ptr); // %x로 표현해도 됨 (16진수이기 때문이다.)
	printf("ptr 주소 %p\n", &ptr); // birthday와 다르다. ptr주소에 다른 주소의 값을 가져오는 거기 때문에
	printf("ptr 값 %d\n", *ptr); // ptr의 값 표시

	short* ptr2; // short
	ptr2 = (short*)0x004FFE54; // 메모리 주소를 직접 넣을 수 있다. 그러나 이상한 주소를 넣어서 접근하면 안됨! garbage값이 나올 수도 있다.
	printf("ptr2 값 %d\n", *ptr2); // ptr2의 값 표시

}
