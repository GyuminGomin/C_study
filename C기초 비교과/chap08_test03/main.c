// switch ����
#include <stdio.h>

void main()
{
	int score = 86;
	char grade = 'A';

	printf("switch�� ����");
	switch (score/10)
	{
	case 10: // 100 -----> case�ڿ� ������ ���� "���"
		// grade = 'A';
		// break;  10�� 9�� �����Ƿ� ���� ����
	case 9: // 90 ~ 99
		grade = 'A';
		break;
	case 8 :
		grade = 'B';
		break;
	case 7 :
		grade = 'C';
		break;
	case 6 :
		grade = 'D';
		break;
	default:
		grade = 'F';
		break;
	}
	printf("����� ������ %c�Դϴ�.", grade);
}