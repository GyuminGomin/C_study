// ��ø���ǹ� (��¥ �׽�Ʈ)
#include <stdio.h>

void main()
{
	int year = 2021, month = 12, day = 31;
	// day�� �Ϸ� ����
	day++; // day = 32�� ��
	if (day >31)
	{
		month++; // 13���� ���� ������
		day = 1; // 32���� 1�Ϸ� ����
		if (month>12)
		{
			year++;
			month = 1;
		}
	}
	printf("���� ��¥�� %d�� %d�� %d�� �Դϴ�.\n", year, month, day);
}