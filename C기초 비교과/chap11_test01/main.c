// ��������
#include <stdio.h>
int g_result; // ��������( ���� ���������� �����ǵ��� g_�� ���δ�. ) --> �Լ��� ����ϸ� �Լ��� ���ӵǹǷ� ���������� ��� �Ұ���

// �������� ��
/*
int sum(int x, int y)
{
	int result = 0; // sum�� �������� result
	result = x + y;
	return result;
}

void main()
{
	int result; // main�� �������� result
	result = sum(5, 3);
	printf("result���� %d\n", result);
}
*/

// �������� ��
void sum(int x, int y)
{
	// int result = 0; // sum�� �������� result
	g_result = x + y;
	// return result;
}

void main()
{
	// int result; // main�� �������� result
	sum(5, 3);
	printf("result���� %d\n", g_result);
}