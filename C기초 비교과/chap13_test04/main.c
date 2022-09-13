// �� swap

// ���� �ּ� ���� ����� �Ѱ�
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


// ���� �ּ� ���� ���

#include <stdio.h>

void swap(int* const a, int* const b) // int �տ� const ���̸� �ȵ� �ֳ��ϸ� ������ ���� ����� �����ϰڴٴ� �ǹ��̹Ƿ�
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