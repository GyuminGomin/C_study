// ������ �н�
#include <stdio.h>

void main()
{
	short birthday;
	short* ptr; // visual studio������ ������ ��ġ �տ� �α� ����
	ptr = &birthday;
	*ptr = 1008; // ptr�� ����Ű�� �ִ� �޸� �ּҿ� ���� �ִ´�.

	printf("ptr ������ ũ�� %d\n", sizeof(ptr));
	printf("birthday �ּ� %p\n", ptr); // %x�� ǥ���ص� �� (16�����̱� �����̴�.)
	printf("ptr �ּ� %p\n", &ptr); // birthday�� �ٸ���. ptr�ּҿ� �ٸ� �ּ��� ���� �������� �ű� ������
	printf("ptr �� %d\n", *ptr); // ptr�� �� ǥ��

	short* ptr2; // short
	ptr2 = (short*)0x004FFE54; // �޸� �ּҸ� ���� ���� �� �ִ�. �׷��� �̻��� �ּҸ� �־ �����ϸ� �ȵ�! garbage���� ���� ���� �ִ�.
	printf("ptr2 �� %d\n", *ptr2); // ptr2�� �� ǥ��

}
