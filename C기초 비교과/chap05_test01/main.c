// �Լ� �����
#include <stdio.h>
#include "main.h" // ���� ���� ���� ��

#define MAX_COUNT 3
#define PI 3.141592 // Java�� static�̶� ����ϴ�.
#define POW_VALUE(a) a*a // ������ ��ɹ� (�Լ�ó�� ���) --> ��ũ�� �Լ� (Macro Function)

int sum(int x, int y) // �� ȣ����(callee) 
{	
	if (x < 0)
	{
		x *= -1;
	}
	if (y < 0)
	{
		y *= -1;
	}
	int result = x + y;
	return result;
}
void main() // ȣ����(caller) -- > main ��ȯ���� int�� �ϸ� return (��ȯ��)�� ������ ������ cf) �Լ����� return���� ������ �Լ� ��ü�� ����������.
			// return 1; �� ������ ������ ���� ����, return 0;�� ���������� ����
			// main �Լ��� ������ int main(), void main() �ΰ��ۿ� ����.
			// main�� ���� �ְ� sum�� �Ʒ��ִٰ� ���� (�����߻�) --> �����߻� �Ƚ�ų����, main ���� int sum(int x, int y); ���� ���ָ� �� cf) parameter�� x, y�� �����൵ �����
{
	int a = 45, b = 20;
	int sum_result = 0;
	// �Լ�ȣ��
	sum_result = sum(a, b);
	printf("a�� b�� �� : %d �Դϴ�.\n", sum_result);

	// ��ó���� ��� #define
	int count = MAX_COUNT;
	printf("%d\n", count);

	printf("%d\n", POW_VALUE(7));
}